/*
 * MFRC522 - Library to use ARDUINO RFID MODULE KIT 13.56 MHZ WITH TAGS SPI W AND R BY COOQROBOT.
 * The library file MFRC522.h has a wealth of useful info. Please read it.
 * The functions are documented in MFRC522.cpp.
 *
 * Based on code Dr.Leong   ( WWW.B2CQSHOP.COM )
 * Created by Miguel Balboa (circuitito.com), Jan, 2012.
 * Rewritten by Søren Thing Andersen (access.thing.dk), fall of 2013 (Translation to English, refactored, comments, anti collision, cascade levels.)
 * Released into the public domain.
 *
 * Sample program showing how to read data from a PICC using a MFRC522 reader on the Arduino SPI interface.
 *----------------------------------------------------------------------------- empty_skull 
 * Aggiunti pin per arduino Mega
 * add pin configuration for arduino mega
 * http://mac86project.altervista.org/
 ----------------------------------------------------------------------------- Nicola Coppola
 * Pin layout should be as follows:
 * Signal     Pin              Pin               Pin
 *            Arduino Uno      Arduino Mega      MFRC522 board
 * ------------------------------------------------------------
 * Reset      9                5                 RST
 * SPI SS     10               53                SDA
 * SPI MOSI   11               52                MOSI
 * SPI MISO   12               51                MISO
 * SPI SCK    13               50                SCK
 *
 * The reader can be found on eBay for around 5 dollars. Search for "mf-rc522" on ebay.com. 
 */

#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN_1 48
#define SS_PIN_2 46
#define RST_PIN_1 49
#define RST_PIN_2 47
#define SS_PIN_3 44
#define RST_PIN_3 45
MFRC522 mfrc522_1(SS_PIN_1, RST_PIN_1);	// Create MFRC522 instance.
MFRC522 mfrc522_2(SS_PIN_2, RST_PIN_2);  // Create MFRC522 instance.
MFRC522 mfrc522_3(SS_PIN_3, RST_PIN_3);  // Create MFRC522 instance.
void setup() {
	Serial.begin(9600);	// Initialize serial communications with the PC
	SPI.begin();			// Init SPI bus
	mfrc522_1.PCD_Init();	// Init MFRC522 card
  mfrc522_2.PCD_Init();  // Init MFRC522 card
  mfrc522_3.PCD_Init();  // Init MFRC522 card
	Serial.println("Scan PICC to see UID and type...");
}

void loop() {
  byte byteCount;
  byte buffer[2]; // длина массива (16 байт + 2 байта контрольная сумма) 
  byteCount = sizeof(buffer);
	// Look for new cards
	if ( ! mfrc522_1.PICC_IsNewCardPresent()) {
		return;//go to start of loop if there is no card present
	}

	// Select one of the cards
	if ( ! mfrc522_1.PICC_ReadCardSerial()) {
		return;//if ReadCardSerial returns 1, the "uid" struct (see MFRC522.h lines 238-45)) contains the ID of the read card.
}

	// Dump debug info about the card. PICC_HaltA() is automatically called.
  Serial.print("1_");
	Serial.print(mfrc522_1.uid.uidByte[1], HEX);
  Serial.println();
  mfrc522_1.PICC_HaltA();
  
	if ( ! mfrc522_2.PICC_IsNewCardPresent()) {
    return;//go to start of loop if there is no card present
  }

  // Select one of the cards
  if ( ! mfrc522_2.PICC_ReadCardSerial()) {
    return;//if ReadCardSerial returns 1, the "uid" struct (see MFRC522.h lines 238-45)) contains the ID of the read card.
  }

  // Dump debug info about the card. PICC_HaltA() is automatically called.
  Serial.print("2_");
  Serial.print(mfrc522_2.uid.uidByte[1], HEX);
  Serial.println();
  mfrc522_2.PICC_HaltA();
  mfrc522_3.PICC_WakeupA(buffer, &byteCount);
  if ( ! mfrc522_3.PICC_IsNewCardPresent()) {
    return;//go to start of loop if there is no card present
  }

  // Select one of the cards
  if ( ! mfrc522_3.PICC_ReadCardSerial()) {
    return;//if ReadCardSerial returns 1, the "uid" struct (see MFRC522.h lines 238-45)) contains the ID of the read card.
  }
  
  // Dump debug info about the card. PICC_HaltA() is automatically called.
  Serial.print("3_");
  Serial.print(mfrc522_3.uid.uidByte[1], HEX);
  Serial.println();
  mfrc522_3.PICC_HaltA();
  
}
