/*
Example for AlphaNum_G Click

    Date          : Jun 2018.
    Author        : Nenad Filipovic

Test configuration KINETIS :
    
    MCU              : MK64
    Dev. Board       : HEXIWEAR
    ARM Compiler ver : v6.0.0.0

---

Description :

The application is composed of three sections :

- System Initialization - Initializes peripherals and set pins.
- Application Initialization - Initializes SPI driver and performs device configuration.
- Application Task - (code snippet) Write text, special symbols and number on 14-segment display.

Additional Functions :

- SPI

*/

#include "Click_AlphaNum_G_types.h"
#include "Click_AlphaNum_G_config.h"

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_RST_PIN, _GPIO_OUTPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_PWM_PIN, _GPIO_OUTPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_OUTPUT );

    mikrobus_spiInit( _MIKROBUS1, &_ALPHANUMG_SPI_CFG[0] );

    Delay_100ms();
}

void applicationInit()
{
    alphanumg_spiDriverInit( (T_ALPHANUMG_P)&_MIKROBUS1_GPIO, (T_ALPHANUMG_P)&_MIKROBUS1_SPI );
}

void applicationTask()
{
    alphanumg_setDisplayTime( 1000 );
    
    alphanumg_writeCharacter( 'M', 'E' );
    
    alphanumg_writeCharacter( '@', '?' );
    
    alphanumg_writeNumber( 0,  1 );
    alphanumg_writeNumber( 1,  2 );
    alphanumg_writeNumber( 2,  3 );
    alphanumg_writeNumber( 3,  4 );
}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
            applicationTask();
    }
}