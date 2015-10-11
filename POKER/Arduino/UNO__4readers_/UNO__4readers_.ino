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

#define SS_PIN1 10
#define SS_PIN2 8
#define SS_PIN3 7
#define SS_PIN4 6
#define RST_PIN 9

RFID rfid1(SS_PIN1, RST_PIN);
RFID rfid2(SS_PIN2, RST_PIN);
RFID rfid3(SS_PIN3, RST_PIN);
RFID rfid4(SS_PIN4, RST_PIN);

// Setup variables:
    int ser1Num0;
    int ser1Num1;
    int ser1Num2;
    int ser1Num3;
    int ser1Num4;
    int ser2Num0;
    int ser2Num1;
    int ser2Num2;
    int ser2Num3;
    int ser2Num4;
    int ser3Num0;
    int ser3Num1;
    int ser3Num2;
    int ser3Num3;
    int ser3Num4;
    int ser4Num0;
    int ser4Num1;
    int ser4Num2;
    int ser4Num3;
    int ser4Num4;
    

void setup()
{ 
  Serial.begin(9600);
  SPI.begin(); 
  rfid1.init();
  rfid2.init();
  rfid3.init();
  rfid4.init();
}

void loop()
{    
    if (rfid1.isCard()) {
        if (rfid1.readCardSerial()) {
            if (rfid1.serNum[0] != ser1Num0
                || rfid1.serNum[1] != ser1Num1
                || rfid1.serNum[2] != ser1Num2
                || rfid1.serNum[3] != ser1Num3
                || rfid1.serNum[4] != ser1Num4            
            ) {
                /* With a new cardnumber, show it. */
                
                
                ser1Num0 = rfid1.serNum[0];
                ser1Num1 = rfid1.serNum[1];
                ser1Num2 = rfid1.serNum[2];
                ser1Num3 = rfid1.serNum[3];
                ser1Num4 = rfid1.serNum[4];
                
               
                //Serial.println(" ");
                
                
		Serial.print(rfid1.serNum[0],DEC);
                Serial.print("  ");
		Serial.print(rfid1.serNum[1],DEC);
                Serial.print("  ");
		Serial.print(rfid1.serNum[2],DEC);
                Serial.print("  ");
		Serial.print(rfid1.serNum[3],DEC);
                Serial.print("  ");
		Serial.print(rfid1.serNum[4],DEC);
                Serial.print("   ");
                Serial.print("   ");
                        
                
  		Serial.print(rfid1.serNum[0],HEX);
                  Serial.print("  ");
  		Serial.print(rfid1.serNum[1],HEX);
                  Serial.print("  ");
  		Serial.print(rfid1.serNum[2],HEX);
                  Serial.print("  ");
  		Serial.print(rfid1.serNum[3],HEX);
                  Serial.print("  ");
  		Serial.print(rfid1.serNum[4],HEX);
                  Serial.println(" ");
    
             } else {
               /* If we have the same ID, just write a dot. */
               //Serial.print(".");
             }
          }
    } else {
      Serial.println("NO CARD_1");
      }
    
    rfid1.halt();
    if (rfid2.isCard()) {
        if (rfid2.readCardSerial()) {
            if (rfid2.serNum[0] != ser2Num0
                || rfid2.serNum[1] != ser2Num1
                || rfid2.serNum[2] != ser2Num2
                || rfid2.serNum[3] != ser2Num3
                || rfid2.serNum[4] != ser2Num4
                
            ) {
                /* With a new cardnumber, show it. */
                
                
                ser2Num0 = rfid2.serNum[0];
                ser2Num1 = rfid2.serNum[1];
                ser2Num2 = rfid2.serNum[2];
                ser2Num3 = rfid2.serNum[3];
                ser2Num4 = rfid2.serNum[4];
                
               
                //Serial.println(" ");
                
                
    Serial.print(rfid2.serNum[0],DEC);
                Serial.print("  ");
    Serial.print(rfid2.serNum[1],DEC);
                Serial.print("  ");
    Serial.print(rfid2.serNum[2],DEC);
                Serial.print("  ");
    Serial.print(rfid2.serNum[3],DEC);
                Serial.print("  ");
    Serial.print(rfid2.serNum[4],DEC);
                Serial.print("   ");
                Serial.print("   ");
                        
                
      Serial.print(rfid2.serNum[0],HEX);
                  Serial.print("  ");
      Serial.print(rfid2.serNum[1],HEX);
                  Serial.print("  ");
      Serial.print(rfid2.serNum[2],HEX);
                  Serial.print("  ");
      Serial.print(rfid2.serNum[3],HEX);
                  Serial.print("  ");
      Serial.print(rfid2.serNum[4],HEX);
                  Serial.println(" ");
    
             } else {
               /* If we have the same ID, just write a dot. */
               //Serial.print(".");
             }
          }
    }else {
      Serial.println("NO CARD_2");
      }
    
    rfid2.halt(); 
        
    if (rfid3.isCard()) {
        if (rfid3.readCardSerial()) {
            if (rfid3.serNum[0] != ser3Num0
                || rfid3.serNum[1] != ser3Num1
                || rfid3.serNum[2] != ser3Num2
                || rfid3.serNum[3] != ser3Num3
                || rfid3.serNum[4] != ser3Num4
                
            ) {
                /* With a new cardnumber, show it. */
                
                
                ser3Num0 = rfid3.serNum[0];
                ser3Num1 = rfid3.serNum[1];
                ser3Num2 = rfid3.serNum[2];
                ser3Num3 = rfid3.serNum[3];
                ser3Num4 = rfid3.serNum[4];
                
               
                //Serial.println(" ");
                
                
    Serial.print(rfid3.serNum[0],DEC);
                Serial.print("  ");
    Serial.print(rfid3.serNum[1],DEC);
                Serial.print("  ");
    Serial.print(rfid3.serNum[2],DEC);
                Serial.print("  ");
    Serial.print(rfid3.serNum[3],DEC);
                Serial.print("  ");
    Serial.print(rfid3.serNum[4],DEC);
                Serial.print("   ");
                Serial.print("   ");
                        
                
      Serial.print(rfid3.serNum[0],HEX);
                  Serial.print("  ");
      Serial.print(rfid3.serNum[1],HEX);
                  Serial.print("  ");
      Serial.print(rfid3.serNum[2],HEX);
                  Serial.print("  ");
      Serial.print(rfid3.serNum[3],HEX);
                  Serial.print("  ");
      Serial.print(rfid3.serNum[4],HEX);
                  Serial.println(" ");
    
             } else {
               /* If we have the same ID, just write a dot. */
               //Serial.print(".");
             }
          }
    }else {
      Serial.println("NO CARD3");
      }
    
    rfid3.halt();   
    
    if (rfid4.isCard()) {
        if (rfid4.readCardSerial()) {
            if (rfid4.serNum[0] != ser4Num0
                || rfid4.serNum[1] != ser4Num1
                || rfid4.serNum[2] != ser4Num2
                || rfid4.serNum[3] != ser4Num3
                || rfid4.serNum[4] != ser4Num4
                
            ) {
                /* With a new cardnumber, show it. */
                
                
                ser4Num0 = rfid4.serNum[0];
                ser4Num1 = rfid4.serNum[1];
                ser4Num2 = rfid4.serNum[2];
                ser4Num3 = rfid4.serNum[3];
                ser4Num4 = rfid4.serNum[4];
                
               
                //Serial.println(" ");
                
                
    Serial.print(rfid4.serNum[0],DEC);
                Serial.print("  ");
    Serial.print(rfid4.serNum[1],DEC);
                Serial.print("  ");
    Serial.print(rfid4.serNum[2],DEC);
                Serial.print("  ");
    Serial.print(rfid4.serNum[3],DEC);
                Serial.print("  ");
    Serial.print(rfid4.serNum[4],DEC);
                Serial.print("   ");
                Serial.print("   ");
                        
                
      Serial.print(rfid4.serNum[0],HEX);
                  Serial.print("  ");
      Serial.print(rfid4.serNum[1],HEX);
                  Serial.print("  ");
      Serial.print(rfid4.serNum[2],HEX);
                  Serial.print("  ");
      Serial.print(rfid4.serNum[3],HEX);
                  Serial.print("  ");
      Serial.print(rfid4.serNum[4],HEX);
                  Serial.println(" ");
    
             } else {
               /* If we have the same ID, just write a dot. */
               //Serial.print(".");
             }
          }

    } else {
      Serial.println("NO CARD4");
      }   
    rfid4.halt();
}

