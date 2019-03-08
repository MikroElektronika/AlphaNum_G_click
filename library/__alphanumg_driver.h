/*
    __alphanumg_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __alphanumg_driver.h
@brief    AlphaNum_G Driver
@mainpage AlphaNum_G Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   ALPHANUMG
@brief      AlphaNum_G Click Driver
@{

| Global Library Prefix | **ALPHANUMG** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **Jun 2018.**      |
| Developer             | **Nenad Filipovic**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _ALPHANUMG_H_
#define _ALPHANUMG_H_

/** 
 * @macro T_ALPHANUMG_P
 * @brief Driver Abstract type 
 */
#define T_ALPHANUMG_P    const uint8_t*

/** @defgroup ALPHANUMG_COMPILE Compilation Config */              /** @{ */

   #define   __ALPHANUMG_DRV_SPI__                            /**<     @macro __ALPHANUMG_DRV_SPI__  @brief SPI driver selector */
//  #define   __ALPHANUMG_DRV_I2C__                            /**<     @macro __ALPHANUMG_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __ALPHANUMG_DRV_UART__                           /**<     @macro __ALPHANUMG_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup ALPHANUMG_VAR Variables */                           /** @{ */

/**
 * Character table
 */
const uint16_t _ALPHANUMG_CHAR_TABLE[ 52 ];

                                                                       /** @} */
/** @defgroup ALPHANUMG_TYPES Types */                             /** @{ */



                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup ALPHANUMG_INIT Driver Initialization */              /** @{ */

#ifdef   __ALPHANUMG_DRV_SPI__
void alphanumg_spiDriverInit(T_ALPHANUMG_P gpioObj, T_ALPHANUMG_P spiObj);
#endif
#ifdef   __ALPHANUMG_DRV_I2C__
void alphanumg_i2cDriverInit(T_ALPHANUMG_P gpioObj, T_ALPHANUMG_P i2cObj, uint8_t slave);
#endif
#ifdef   __ALPHANUMG_DRV_UART__
void alphanumg_uartDriverInit(T_ALPHANUMG_P gpioObj, T_ALPHANUMG_P uartObj);
#endif

                                                                       /** @} */
/** @defgroup ALPHANUMG_FUNC Driver Functions */                   /** @{ */

/**
 * @brief Generic data write function
 *
 * @param[in] delayDisplayShow Display time [ ms ]
 *
 * Function set display time
 */
void alphanumg_setDisplayTime(uint16_t delayDisplayShow);

/**
 * @brief Generic data write function
 *
 * @param[in] leftDisplay Data to write on left display
 *
 * @param[in] rightDisplay Data to write on right display
 *
 * Function write left and right data on display
 */
void alphanumg_writeDisplay( uint16_t leftDisplay, uint16_t rightDisplay );

/**
 * @brief Generic data write function
 *
 * @param[in] leftDisplay Character to write on left display
 *
 * @param[in] rightDisplay Character to write on right display
 *
 * Function write left and right character on display
 */
void alphanumg_writeCharacter(uint8_t leftCharacter, uint8_t rightCharacter);

/**
 * @brief Generic data write function
 *
 * @param[in] leftDisplay Number to write on left display
 *
 * @param[in] rightDisplay Number to write on right display
 *
 * Function write left and right number on display
 */
void alphanumg_writeNumber(uint8_t leftNumber, uint8_t rightNumber);

/**
 * @brief Function get char
 *
 * @param[in] character Char to write
 *
 * Function get character for writing on the display
 */
uint16_t alphanumg_getCharacter(uint8_t character);

/**
 * @brief Function get number
 *
 * @param[in] number Number to write
 *
 * Function get number for writing on the display
 */
uint16_t alphanumg_getNumber(uint8_t number);





                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_AlphaNum_G_STM.c
    @example Click_AlphaNum_G_TIVA.c
    @example Click_AlphaNum_G_CEC.c
    @example Click_AlphaNum_G_KINETIS.c
    @example Click_AlphaNum_G_MSP.c
    @example Click_AlphaNum_G_PIC.c
    @example Click_AlphaNum_G_PIC32.c
    @example Click_AlphaNum_G_DSPIC.c
    @example Click_AlphaNum_G_AVR.c
    @example Click_AlphaNum_G_FT90x.c
    @example Click_AlphaNum_G_STM.mbas
    @example Click_AlphaNum_G_TIVA.mbas
    @example Click_AlphaNum_G_CEC.mbas
    @example Click_AlphaNum_G_KINETIS.mbas
    @example Click_AlphaNum_G_MSP.mbas
    @example Click_AlphaNum_G_PIC.mbas
    @example Click_AlphaNum_G_PIC32.mbas
    @example Click_AlphaNum_G_DSPIC.mbas
    @example Click_AlphaNum_G_AVR.mbas
    @example Click_AlphaNum_G_FT90x.mbas
    @example Click_AlphaNum_G_STM.mpas
    @example Click_AlphaNum_G_TIVA.mpas
    @example Click_AlphaNum_G_CEC.mpas
    @example Click_AlphaNum_G_KINETIS.mpas
    @example Click_AlphaNum_G_MSP.mpas
    @example Click_AlphaNum_G_PIC.mpas
    @example Click_AlphaNum_G_PIC32.mpas
    @example Click_AlphaNum_G_DSPIC.mpas
    @example Click_AlphaNum_G_AVR.mpas
    @example Click_AlphaNum_G_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __alphanumg_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */