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

#define SS_PIN_1 A15
#define SS_PIN_2 46
#define SS_PIN_3 44
#define RST_PIN_1 A14
#define RST_PIN_2 47
#define RST_PIN_3 45

RFID rfid_1(SS_PIN_1, RST_PIN_1); 
RFID rfid_2(SS_PIN_2, RST_PIN_2);
RFID rfid_3(SS_PIN_3, RST_PIN_3);
// Setup variables:
    int serNum0;
    int serNum1;
    int serNum2;
    int serNum3;
    int serNum4;

void setup()
{ 
  Serial.begin(9600);
  SPI.begin(); 
  rfid_1.init();
  rfid_2.init();
  rfid_3.init();
  
}

void loop()
{
    
    if (rfid_1.isCard()) {
        if (rfid_1.readCardSerial()) {
                /* With a new cardnumber, show it. */
                Serial.println(" ");
                Serial.println("Card_1 found");
                serNum0 = rfid_1.serNum[0];
                serNum1 = rfid_1.serNum[1];
                serNum2 = rfid_1.serNum[2];
                serNum3 = rfid_1.serNum[3];
                serNum4 = rfid_1.serNum[4];
               
                //Serial.println(" ");
                Serial.println("Cardnumber:");
                Serial.print("Dec: ");
		Serial.print(serNum0,DEC);
                Serial.print(", ");
		Serial.print(serNum1,DEC);
                Serial.print(", ");
		Serial.print(serNum2,DEC);
                Serial.print(", ");
		Serial.print(serNum3,DEC);
                Serial.print(", ");
		Serial.print(serNum4,DEC);
                Serial.println(" ");
                        
                Serial.print("Hex: ");
		Serial.print(serNum0,HEX);
                Serial.print(", ");
		Serial.print(serNum1,HEX);
                Serial.print(", ");
		Serial.print(serNum2,HEX);
                Serial.print(", ");
		Serial.print(serNum3,HEX);
                Serial.print(", ");
		Serial.print(serNum4,HEX);
                Serial.println(" ");
                serNum0 = 0;
                serNum1 = 0;
                serNum2 = 0;
                serNum3 = 0;
                serNum4 = 0;
             } 
    } 
    rfid_1.halt();
     if (rfid_2.isCard()) {
        if (rfid_2.readCardSerial()) {
                /* With a new cardnumber, show it. */
                Serial.println(" ");
                Serial.println("Card_2 found");
                serNum0 = rfid_2.serNum[0];
                serNum1 = rfid_2.serNum[1];
                serNum2 = rfid_2.serNum[2];
                serNum3 = rfid_2.serNum[3];
                serNum4 = rfid_2.serNum[4];
               
                //Serial.println(" ");
                Serial.println("Cardnumber:");
                Serial.print("Dec: ");
   Serial.print(serNum0,DEC);
                Serial.print(", ");
    Serial.print(serNum1,DEC);
                Serial.print(", ");
    Serial.print(serNum2,DEC);
                Serial.print(", ");
    Serial.print(serNum3,DEC);
                Serial.print(", ");
    Serial.print(serNum4,DEC);
                Serial.println(" ");
                        
                Serial.print("Hex: ");
    Serial.print(serNum0,HEX);
                Serial.print(", ");
    Serial.print(serNum1,HEX);
                Serial.print(", ");
    Serial.print(serNum2,HEX);
                Serial.print(", ");
    Serial.print(serNum3,HEX);
                Serial.print(", ");
    Serial.print(serNum4,HEX);
                Serial.println(" ");
                serNum0 = 0;
                serNum1 = 0;
                serNum2 = 0;
                serNum3 = 0;
                serNum4 = 0;
             } 
    } 
    rfid_2.halt();   
         if (rfid_3.isCard()) {
        if (rfid_3.readCardSerial()) {
                /* With a new cardnumber, show it. */
                Serial.println(" ");
                Serial.println("Card_3 found");
                serNum0 = rfid_3.serNum[0];
                serNum1 = rfid_3.serNum[1];
                serNum2 = rfid_3.serNum[2];
                serNum3 = rfid_3.serNum[3];
                serNum4 = rfid_3.serNum[4];
               
                //Serial.println(" ");
                Serial.println("Cardnumber:");
                Serial.print("Dec: ");
   Serial.print(serNum0,DEC);
                Serial.print(", ");
    Serial.print(serNum1,DEC);
                Serial.print(", ");
    Serial.print(serNum2,DEC);
                Serial.print(", ");
    Serial.print(serNum3,DEC);
                Serial.print(", ");
    Serial.print(serNum4,DEC);
                Serial.println(" ");
                        
                Serial.print("Hex: ");
    Serial.print(serNum0,HEX);
                Serial.print(", ");
    Serial.print(serNum1,HEX);
                Serial.print(", ");
    Serial.print(serNum2,HEX);
                Serial.print(", ");
    Serial.print(serNum3,HEX);
                Serial.print(", ");
    Serial.print(serNum4,HEX);
                Serial.println(" ");
                serNum0 = 0;
                serNum1 = 0;
                serNum2 = 0;
                serNum3 = 0;
                serNum4 = 0;
             } 
    } 
    rfid_3.halt();
}

