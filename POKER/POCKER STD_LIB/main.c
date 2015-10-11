
//Default SPI used
#ifndef MFRC522_SPI
#define MFRC522_SPI                        SPI4
#define MFRC522_SPI_PINSPACK            TM_SPI_PinsPack_2
#endif
 
//Default CS pin used
#ifndef MFRC522_CS_PIN
#define MFRC522_CS_RCC                    RCC_AHB1Periph_GPIOG
#define MFRC522_CS_PORT                    GPIOG
#define MFRC522_CS_PIN                    GPIO_Pin_2
#endif
