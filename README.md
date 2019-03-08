![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# AlphaNum G Click

---

- **CIC Prefix**  : ALPHANUMG
- **Author**      : Nenad Filipovic
- **Verison**     : 1.0.0
- **Date**        : Jun 2018.

---

### Software Support

We provide a library for the AlphaNum_G Click on our [LibStock](https://libstock.mikroe.com/projects/view/1266/alphanum-click-board-example) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

The library covers all the necessary functions to control AlphaNum G Click: write text, special symbols and number on 14-segment display.

Key functions :

- ``` void alphanumg_writeDisplay( uint16_t leftDisplay, uint16_t rightDisplay ) ``` - Generic data write function
- ``` void alphanumg_writeCharacter( uint8_t leftCharacter, uint8_t rightCharacter ) ``` - Function write left and right character on the display
- ``` void alphanumg_writeNumber( uint8_t leftNumber, uint8_t rightNumber ) ``` - Function write left and right number on the display

**Examples Description**

Description :

The application is composed of three sections :

- System Initialization - Initializes SPI peripherals and set pins.
- Application Initialization - Initializes SPI driver and performs device configuration.
- Application Task - (code snippet) Write text, special symbols and number on 14-segment display.


```.c

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

```



The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/1266/alphanum-click-board-example) page.

Other mikroE Libraries used in the example:

- SPI


**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
---
