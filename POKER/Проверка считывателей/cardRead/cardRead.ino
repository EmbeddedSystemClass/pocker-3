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

#define SS_PIN 10
#define RST_PIN 9

RFID rfid(SS_PIN, RST_PIN); 

void setup()
{ 
  SPI.begin(); 
  rfid.init();
  pinMode(8, OUTPUT);
  
}

void loop()
{
    
    if (rfid.isCard()) 
    {
     digitalWrite(8, HIGH);
     delay(1000);
    }
    digitalWrite(8, LOW);
    rfid.halt();
}

