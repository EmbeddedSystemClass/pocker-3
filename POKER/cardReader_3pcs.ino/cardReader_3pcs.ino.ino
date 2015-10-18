/**
* Read a card using a mfrc522 reader on your SPI interface
* Pin layout should be as follows (on Arduino Uno):
* MOSI: Pin 11 / ICSP-4
* MISO: Pin 12 / ICSP-1
* SCK: Pin 13 / ISCP-3
* SS: Pin 10
* RST: Pin 9
*
* Script is based on the script of Miguel Balboa. 
* New cardnumber is printed when card has changed. Only a dot is printed
* if card is the same.
*
* @version 0.1
* @author Henri de Jong
* @since 06-01-2013
*/

#include <SPI.h>
#include <RFID.h>

#define SS_PIN_1 A2
#define SS_PIN_2 A1
#define SS_PIN_3 10
#define SS_PIN_4 4
#define SS_PIN_5 8
#define SS_PIN_6 6


#define RST_PIN_1 A3
#define RST_PIN_2 A0
#define RST_PIN_3 A7
#define RST_PIN_4 9
#define RST_PIN_5 7
#define RST_PIN_6 5


RFID rfid_1(SS_PIN_1, RST_PIN_1); 
RFID rfid_2(SS_PIN_2, RST_PIN_2);
RFID rfid_3(SS_PIN_3, RST_PIN_3);
RFID rfid_4(SS_PIN_4, RST_PIN_4);
RFID rfid_5(SS_PIN_5, RST_PIN_5);
RFID rfid_6(SS_PIN_6, RST_PIN_6);

unsigned long time; 
void setup()
{ 
  Serial.begin(9600);
  SPI.begin(); 
  rfid_1.init();
  rfid_2.init();
  rfid_3.init();
  rfid_4.init();
  rfid_5.init();  
  rfid_6.init();  
 
}

void loop()
{   
    if (rfid_1.isCard()) {
        if (rfid_1.readCardSerial()) {
                /* With a new cardnumber, show it. */
                Serial.println(" ");
                Serial.println("Card_1 found");
                Serial.print(rfid_1.serNum[1],HEX);
                time = millis();
                Serial.print(" - ");
                Serial.println(time);                
             } 
    } 
    rfid_1.halt();
   if (rfid_2.isCard()) {
        if (rfid_2.readCardSerial()) {
                /* With a new cardnumber, show it. */
                Serial.println(" ");
                Serial.println("Card_2 found");
                Serial.print(rfid_2.serNum[1],HEX);
                time = millis();
                Serial.print(" - ");
                Serial.println(time);                 
             } 
    } 
    rfid_2.halt();  
   if (rfid_3.isCard()) {
        if (rfid_3.readCardSerial()) {
                /* With a new cardnumber, show it. */
                Serial.println(" ");
                Serial.println("Card_3 found");
                Serial.print(rfid_3.serNum[1],HEX);     
                time = millis();
                Serial.print(" - ");
                Serial.println(time);            
             } 
    } 
    rfid_3.halt();
   if (rfid_4.isCard()) {
        if (rfid_4.readCardSerial()) {
                /* With a new cardnumber, show it. */
                Serial.println(" ");
                Serial.println("Card_4 found");
                Serial.print(rfid_4.serNum[1],HEX);
                time = millis();
                Serial.print(" - ");
                Serial.println(time);                 
             } 
    } 
    rfid_4.halt();  
   if (rfid_5.isCard()) {
        if (rfid_5.readCardSerial()) {
                /* With a new cardnumber, show it. */
                Serial.println(" ");
                Serial.println("Card_5 found");
                Serial.print(rfid_5.serNum[1],HEX);
                time = millis();
                Serial.print(" - ");
                Serial.println(time);                 
             } 
    } 
    rfid_5.halt();
       if (rfid_6.isCard()) {
        if (rfid_6.readCardSerial()) {
                /* With a new cardnumber, show it. */
                Serial.println(" ");
                Serial.println("Card_6 found");
                Serial.print(rfid_6.serNum[1],HEX);  
                time = millis();
                Serial.print(" - ");
                Serial.println(time);               
             } 
    } 
    rfid_6.halt();
 
}

