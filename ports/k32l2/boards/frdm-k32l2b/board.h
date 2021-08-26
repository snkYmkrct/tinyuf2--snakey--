/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Ha Thach for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef BOARD_H_
#define BOARD_H_

//--------------------------------------------------------------------+
// Flash
//--------------------------------------------------------------------+

#define BOARD_FLASH_TOTAL     0x40000U

//--------------------------------------------------------------------+
// Button
//--------------------------------------------------------------------+

#define BUTTON_GPIO           GPIOC
#define BUTTON_PORT           PORTC
#define BUTTON_CLK_PORT       kCLOCK_PortC
#define BUTTON_PIN            3
#define BUTTON_STATE_ACTIVE   0

//--------------------------------------------------------------------+
// LED
//--------------------------------------------------------------------+

#define LED_GPIO              GPIOD
#define LED_PORT              PORTD
#define LED_CLK_PORT          kCLOCK_PortD
#define LED_PIN               5
#define LED_STATE_ON          0

//--------------------------------------------------------------------+
// Neopixel
//--------------------------------------------------------------------+

// Number of neopixels
#define NEOPIXEL_NUMBER       0

//--------------------------------------------------------------------+
// USB UF2
//--------------------------------------------------------------------+

#define USB_VID           0x1FC9
#define USB_PID           0x009E
#define USB_MANUFACTURER  "NXP"
#define USB_PRODUCT       "FRDM-K32L2B3"

#define UF2_PRODUCT_NAME  USB_MANUFACTURER " " USB_PRODUCT
#define UF2_BOARD_ID      "FRDM-K32L2B3"
#define UF2_VOLUME_LABEL  "K32L2B3BOOT"
#define UF2_INDEX_URL     "https://www.nxp.com/FRDM-K32L2B3"

//--------------------------------------------------------------------+
// UART
//--------------------------------------------------------------------+

#define UART_DEV              LPUART0
#define UART_CLK_PORT         kCLOCK_PortA
#define UART_PIN_PORT         PORTA
#define UART_TX_PIN           2
#define UART_TX_MUX           kPORT_MuxAlt2
#define UART_RX_PIN           1
#define UART_RX_MUX           kPORT_MuxAlt2
#define UART_SOPT_INIT        \
  SIM->SOPT5 &= ~(SIM_SOPT5_LPUART0TXSRC_MASK | SIM_SOPT5_LPUART0RXSRC_MASK)

#endif
