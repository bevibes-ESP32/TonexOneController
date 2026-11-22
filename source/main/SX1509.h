/************************************************
      Header File: SX1509.H
************************************************/

#ifndef _SX1509_H
#define _SX1509_H

#define SX1509_ADDRESS_3E      0x3E
#define SX1509_ADDRESS_3F      0x3F
#define SX1509_ADDRESS_70      0x70
#define SX1509_ADDRESS_71      0x71
#define SX1509_ADDRESS_DEFAULT SX1509_ADDRESS_71

uint8_t SX1509_IsAddressValid(uint32_t address);
enum Expander_PinModes
{    
    EXPANDER_INPUT,
    EXPANDER_INPUT_PULLUP,
    EXPANDER_INPUT_PULLDOWN,
    EXPANDER_OUTPUT,
    EXPANDER_OUTPUT_PULLUP,
    EXPANDER_OUTPUT_PULLDOWN
};

esp_err_t SX1509_Init(i2c_master_bus_handle_t bus_handle, SemaphoreHandle_t I2CMutex, uint8_t address);
esp_err_t SX1509_refresh(void);
esp_err_t SX1509_gpioMode(uint8_t pin, uint8_t mode);
esp_err_t SX1509_digitalWrite(uint8_t pin, uint8_t value);
esp_err_t SX1509_digitalRead(uint8_t pin, uint8_t* value); 
esp_err_t SX1509_getPinValues(uint16_t* values);


#endif      //_SX1509_H
