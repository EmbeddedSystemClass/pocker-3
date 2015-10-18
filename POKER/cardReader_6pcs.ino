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

#define SS_PIN_1 A9
#define SS_PIN_2 A11
#define SS_PIN_3 A13
#define SS_PIN_4 22
#define SS_PIN_5 24
#define SS_PIN_6 26
#define SS_PIN_7 28
#define SS_PIN_8 30
#define SS_PIN_9 32
#define SS_PIN_10 34
#define SS_PIN_11 36
#define SS_PIN_12 38
#define SS_PIN_13 40
#define SS_PIN_14 42
#define SS_PIN_15 44
#define SS_PIN_16 46
#define SS_PIN_17 48

#define RST_PIN_1 A10
#define RST_PIN_2 A12
#define RST_PIN_3 A14
#define RST_PIN_4 23
#define RST_PIN_5 25
#define RST_PIN_6 27
#define RST_PIN_7 29
#define RST_PIN_8 31
#define RST_PIN_9 33
#define RST_PIN_10 35
#define RST_PIN_11 37
#define RST_PIN_12 39
#define RST_PIN_13 41
#define RST_PIN_14 43
#define RST_PIN_15 45
#define RST_PIN_16 47
#define RST_PIN_17 49

RFID rfid_1(SS_PIN_1, RST_PIN_1); 
RFID rfid_2(SS_PIN_2, RST_PIN_2);
RFID rfid_3(SS_PIN_3, RST_PIN_3);
RFID rfid_4(SS_PIN_4, RST_PIN_4);
RFID rfid_5(SS_PIN_5, RST_PIN_5);
RFID rfid_6(SS_PIN_6, RST_PIN_6);
RFID rfid_7(SS_PIN_7, RST_PIN_7);
RFID rfid_8(SS_PIN_8, RST_PIN_8);
RFID rfid_9(SS_PIN_9, RST_PIN_9);
RFID rfid_10(SS_PIN_10, RST_PIN_10);
RFID rfid_11(SS_PIN_11, RST_PIN_11);
RFID rfid_12(SS_PIN_12, RST_PIN_12);
RFID rfid_13(SS_PIN_13, RST_PIN_13);
RFID rfid_14(SS_PIN_14, RST_PIN_14);
RFID rfid_15(SS_PIN_15, RST_PIN_15);
RFID rfid_16(SS_PIN_16, RST_PIN_16);
RFID rfid_17(SS_PIN_17, RST_PIN_17);
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
  rfid_7.init();  
  rfid_8.init(); 
  rfid_9.init();  
  rfid_10.init();
  rfid_11.init();
  rfid_12.init();
  rfid_13.init();
  rfid_14.init();
  rfid_15.init();
  rfid_16.init();
  rfid_17.init();
}

void loop()
{   
    if (rfid_1.isCard()) {
        if (rfid_1.readCardSerial()) {
                /* With a new cardnumber, show it. */
                Serial.println(" ");
                Serial.println("Card_1 found");
                Serial.print(rfid_1.serNum[1],HEX);
                time = millis()/1000;
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
                time = millis()/1000;
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
                time = millis()/1000;
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
                time = millis()/1000;
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
                time = millis()/1000;
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
                time = millis()/1000;
                Serial.print(" - ");
                Serial.println(time);               
             } 
    } 
    rfid_6.halt();
       if (rfid_7.isCard()) {
        if (rfid_7.readCardSerial()) {
                /* With a new cardnumber, show it. */
                Serial.println(" ");
                Serial.println("Card_7 found");
                Serial.print(rfid_7.serNum[1],HEX);
                time = millis()/1000;
                Serial.print(" - ");
                Serial.println(time);                 
             } 
    } 
    rfid_7.halt();
       if (rfid_8.isCard()) {
        if (rfid_8.readCardSerial()) {
                /* With a new cardnumber, show it. */
                Serial.println(" ");
                Serial.println("Card_8 found");
                Serial.print(rfid_8.serNum[1],HEX);
                time = millis()/1000;
                Serial.print(" - ");
                Serial.println(time);                 
             } 
    } 
    rfid_8.halt();
       if (rfid_9.isCard()) {
        if (rfid_9.readCardSerial()) {
                /* With a new cardnumber, show it. */
                Serial.println(" ");
                Serial.println("Card_9 found");
                Serial.print(rfid_9.serNum[1],HEX);
                time = millis()/1000;
                Serial.print(" - ");
                Serial.println(time);                 
             } 
    } 
    rfid_9.halt();
       if (rfid_10.isCard()) {
        if (rfid_10.readCardSerial()) {
                /* With a new cardnumber, show it. */
                Serial.println(" ");
                Serial.println("Card_10 found");
                Serial.print(rfid_10.serNum[1],HEX); 
                time = millis()/1000;
                Serial.print(" - ");
                Serial.println(time);                
             } 
    } 
    rfid_10.halt();
       if (rfid_11.isCard()) {
        if (rfid_11.readCardSerial()) {
                /* With a new cardnumber, show it. */
                Serial.println(" ");
                Serial.println("Card_11 found");
                Serial.print(rfid_11.serNum[1],HEX); 
                time = millis()/1000;
                Serial.print(" - ");
                Serial.println(time);                
             } 
    } 
    rfid_11.halt();
       if (rfid_12.isCard()) {
        if (rfid_12.readCardSerial()) {
                /* With a new cardnumber, show it. */
                Serial.println(" ");
                Serial.println("Card_12 found");
                Serial.print(rfid_12.serNum[1],HEX); 
                time = millis()/1000;
                Serial.print(" - ");
                Serial.println(time);                
             } 
    } 
    rfid_12.halt();
       if (rfid_13.isCard()) {
        if (rfid_13.readCardSerial()) {
                /* With a new cardnumber, show it. */
                Serial.println(" ");
                Serial.println("Card_13 found");
                Serial.print(rfid_13.serNum[1],HEX); 
                time = millis()/1000;
                Serial.print(" - ");
                Serial.println(time);                
             } 
    } 
    rfid_13.halt();
       if (rfid_14.isCard()) {
        if (rfid_14.readCardSerial()) {
                /* With a new cardnumber, show it. */
                Serial.println(" ");
                Serial.println("Card_14 found");
                Serial.print(rfid_14.serNum[1],HEX); 
                time = millis()/1000;
                Serial.print(" - ");
                Serial.println(time);                
             } 
    } 
    rfid_14.halt();
       if (rfid_15.isCard()) {
        if (rfid_15.readCardSerial()) {
                /* With a new cardnumber, show it. */
                Serial.println(" ");
                Serial.println("Card_15 found");
                Serial.print(rfid_15.serNum[1],HEX); 
                time = millis()/1000;
                Serial.print(" - ");
                Serial.println(time);                
             } 
    } 
    rfid_15.halt();
       if (rfid_16.isCard()) {
        if (rfid_16.readCardSerial()) {
                /* With a new cardnumber, show it. */
                Serial.println(" ");
                Serial.println("Card_16 found");
                Serial.print(rfid_16.serNum[1],HEX); 
                time = millis()/1000;
                Serial.print(" - ");
                Serial.println(time);                
             } 
    } 
    rfid_16.halt();
    if (rfid_17.isCard()) {
        if (rfid_17.readCardSerial()) {
                /* With a new cardnumber, show it. */
                Serial.println(" ");
                Serial.println("Card_17 found");
                Serial.print(rfid_17.serNum[1],HEX); 
                time = millis()/1000;
                Serial.print(" - ");
                Serial.println(time);                
             } 
    } 
    rfid_17.halt();
}

