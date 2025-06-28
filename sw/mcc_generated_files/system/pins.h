/**
 * Generated Pins header File
 *
 * @file pins.h
 *
 * @defgroup  pinsdriver Pins Driver
 *
 * @brief This is generated driver header for pins.
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.0.0
 */

/*
© [2025] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip
    software and any derivatives exclusively with Microchip products.
    You are responsible for complying with 3rd party license terms
    applicable to your use of 3rd party software (including open source
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.?
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT  1
#define OUTPUT 0

#define HIGH 1
#define LOW  0

#define ANALOG	1
#define DIGITAL 0

#define PULL_UP_ENABLED	 1
#define PULL_UP_DISABLED 0

// get/set IO_RB4 aliases
#define SCK_TRIS TRISBbits.TRISB4
#define SCK_LAT	 LATBbits.LATB4
#define SCK_PORT PORTBbits.RB4
#define SCK_WPU	 WPUBbits.WPUB4
#define SCK_OD	 ODCONBbits.
#define SCK_ANS	 ANSELBbits.ANSB4
#define SCK_SetHigh()               \
	do {                        \
		LATBbits.LATB4 = 1; \
	} while (0)
#define SCK_SetLow()                \
	do {                        \
		LATBbits.LATB4 = 0; \
	} while (0)
#define SCK_Toggle()                              \
	do {                                      \
		LATBbits.LATB4 = ~LATBbits.LATB4; \
	} while (0)
#define SCK_GetValue() PORTBbits.RB4
#define SCK_SetDigitalInput()         \
	do {                          \
		TRISBbits.TRISB4 = 1; \
	} while (0)
#define SCK_SetDigitalOutput()        \
	do {                          \
		TRISBbits.TRISB4 = 0; \
	} while (0)
#define SCK_SetPullup()             \
	do {                        \
		WPUBbits.WPUB4 = 1; \
	} while (0)
#define SCK_ResetPullup()           \
	do {                        \
		WPUBbits.WPUB4 = 0; \
	} while (0)
#define SCK_SetPushPull()       \
	do {                    \
		ODCONBbits.= 0; \
	} while (0)
#define SCK_SetOpenDrain()      \
	do {                    \
		ODCONBbits.= 1; \
	} while (0)
#define SCK_SetAnalogMode()           \
	do {                          \
		ANSELBbits.ANSB4 = 1; \
	} while (0)
#define SCK_SetDigitalMode()          \
	do {                          \
		ANSELBbits.ANSB4 = 0; \
	} while (0)
// get/set IO_RB5 aliases
#define CS_TRIS TRISBbits.TRISB5
#define CS_LAT	LATBbits.LATB5
#define CS_PORT PORTBbits.RB5
#define CS_WPU	WPUBbits.WPUB5
#define CS_OD	ODCONBbits.
#define CS_ANS	ANSELBbits.ANSB5
#define CS_SetHigh()                \
	do {                        \
		LATBbits.LATB5 = 1; \
	} while (0)
#define CS_SetLow()                 \
	do {                        \
		LATBbits.LATB5 = 0; \
	} while (0)
#define CS_Toggle()                               \
	do {                                      \
		LATBbits.LATB5 = ~LATBbits.LATB5; \
	} while (0)
#define CS_GetValue() PORTBbits.RB5
#define CS_SetDigitalInput()          \
	do {                          \
		TRISBbits.TRISB5 = 1; \
	} while (0)
#define CS_SetDigitalOutput()         \
	do {                          \
		TRISBbits.TRISB5 = 0; \
	} while (0)
#define CS_SetPullup()              \
	do {                        \
		WPUBbits.WPUB5 = 1; \
	} while (0)
#define CS_ResetPullup()            \
	do {                        \
		WPUBbits.WPUB5 = 0; \
	} while (0)
#define CS_SetPushPull()        \
	do {                    \
		ODCONBbits.= 0; \
	} while (0)
#define CS_SetOpenDrain()       \
	do {                    \
		ODCONBbits.= 1; \
	} while (0)
#define CS_SetAnalogMode()            \
	do {                          \
		ANSELBbits.ANSB5 = 1; \
	} while (0)
#define CS_SetDigitalMode()           \
	do {                          \
		ANSELBbits.ANSB5 = 0; \
	} while (0)
// get/set IO_RB6 aliases
#define SI_TRIS TRISBbits.TRISB6
#define SI_LAT	LATBbits.LATB6
#define SI_PORT PORTBbits.RB6
#define SI_WPU	WPUBbits.WPUB6
#define SI_OD	ODCONBbits.
#define SI_ANS	ANSELBbits.
#define SI_SetHigh()                \
	do {                        \
		LATBbits.LATB6 = 1; \
	} while (0)
#define SI_SetLow()                 \
	do {                        \
		LATBbits.LATB6 = 0; \
	} while (0)
#define SI_Toggle()                               \
	do {                                      \
		LATBbits.LATB6 = ~LATBbits.LATB6; \
	} while (0)
#define SI_GetValue() PORTBbits.RB6
#define SI_SetDigitalInput()          \
	do {                          \
		TRISBbits.TRISB6 = 1; \
	} while (0)
#define SI_SetDigitalOutput()         \
	do {                          \
		TRISBbits.TRISB6 = 0; \
	} while (0)
#define SI_SetPullup()              \
	do {                        \
		WPUBbits.WPUB6 = 1; \
	} while (0)
#define SI_ResetPullup()            \
	do {                        \
		WPUBbits.WPUB6 = 0; \
	} while (0)
#define SI_SetPushPull()        \
	do {                    \
		ODCONBbits.= 0; \
	} while (0)
#define SI_SetOpenDrain()       \
	do {                    \
		ODCONBbits.= 1; \
	} while (0)
#define SI_SetAnalogMode()      \
	do {                    \
		ANSELBbits.= 1; \
	} while (0)
#define SI_SetDigitalMode()     \
	do {                    \
		ANSELBbits.= 0; \
	} while (0)
// get/set IO_RC2 aliases
#define SO_TRIS TRISCbits.TRISC2
#define SO_LAT	LATCbits.LATC2
#define SO_PORT PORTCbits.RC2
#define SO_WPU	WPUCbits.
#define SO_OD	ODCONCbits.
#define SO_ANS	ANSELCbits.ANSC2
#define SO_SetHigh()                \
	do {                        \
		LATCbits.LATC2 = 1; \
	} while (0)
#define SO_SetLow()                 \
	do {                        \
		LATCbits.LATC2 = 0; \
	} while (0)
#define SO_Toggle()                               \
	do {                                      \
		LATCbits.LATC2 = ~LATCbits.LATC2; \
	} while (0)
#define SO_GetValue() PORTCbits.RC2
#define SO_SetDigitalInput()          \
	do {                          \
		TRISCbits.TRISC2 = 1; \
	} while (0)
#define SO_SetDigitalOutput()         \
	do {                          \
		TRISCbits.TRISC2 = 0; \
	} while (0)
#define SO_SetPullup()        \
	do {                  \
		WPUCbits.= 1; \
	} while (0)
#define SO_ResetPullup()      \
	do {                  \
		WPUCbits.= 0; \
	} while (0)
#define SO_SetPushPull()        \
	do {                    \
		ODCONCbits.= 0; \
	} while (0)
#define SO_SetOpenDrain()       \
	do {                    \
		ODCONCbits.= 1; \
	} while (0)
#define SO_SetAnalogMode()            \
	do {                          \
		ANSELCbits.ANSC2 = 1; \
	} while (0)
#define SO_SetDigitalMode()           \
	do {                          \
		ANSELCbits.ANSC2 = 0; \
	} while (0)
// get/set IO_RC3 aliases
#define SER_TRIS TRISCbits.TRISC3
#define SER_LAT	 LATCbits.LATC3
#define SER_PORT PORTCbits.RC3
#define SER_WPU	 WPUCbits.
#define SER_OD	 ODCONCbits.
#define SER_ANS	 ANSELCbits.ANSC3
#define SER_SetHigh()               \
	do {                        \
		LATCbits.LATC3 = 1; \
	} while (0)
#define SER_SetLow()                \
	do {                        \
		LATCbits.LATC3 = 0; \
	} while (0)
#define SER_Toggle()                              \
	do {                                      \
		LATCbits.LATC3 = ~LATCbits.LATC3; \
	} while (0)
#define SER_GetValue() PORTCbits.RC3
#define SER_SetDigitalInput()         \
	do {                          \
		TRISCbits.TRISC3 = 1; \
	} while (0)
#define SER_SetDigitalOutput()        \
	do {                          \
		TRISCbits.TRISC3 = 0; \
	} while (0)
#define SER_SetPullup()       \
	do {                  \
		WPUCbits.= 1; \
	} while (0)
#define SER_ResetPullup()     \
	do {                  \
		WPUCbits.= 0; \
	} while (0)
#define SER_SetPushPull()       \
	do {                    \
		ODCONCbits.= 0; \
	} while (0)
#define SER_SetOpenDrain()      \
	do {                    \
		ODCONCbits.= 1; \
	} while (0)
#define SER_SetAnalogMode()           \
	do {                          \
		ANSELCbits.ANSC3 = 1; \
	} while (0)
#define SER_SetDigitalMode()          \
	do {                          \
		ANSELCbits.ANSC3 = 0; \
	} while (0)
// get/set IO_RC4 aliases
#define SRCLK_TRIS TRISCbits.TRISC4
#define SRCLK_LAT  LATCbits.LATC4
#define SRCLK_PORT PORTCbits.RC4
#define SRCLK_WPU  WPUCbits.
#define SRCLK_OD   ODCONCbits.
#define SRCLK_ANS  ANSELCbits.
#define SRCLK_SetHigh()             \
	do {                        \
		LATCbits.LATC4 = 1; \
	} while (0)
#define SRCLK_SetLow()              \
	do {                        \
		LATCbits.LATC4 = 0; \
	} while (0)
#define SRCLK_Toggle()                            \
	do {                                      \
		LATCbits.LATC4 = ~LATCbits.LATC4; \
	} while (0)
#define SRCLK_GetValue() PORTCbits.RC4
#define SRCLK_SetDigitalInput()       \
	do {                          \
		TRISCbits.TRISC4 = 1; \
	} while (0)
#define SRCLK_SetDigitalOutput()      \
	do {                          \
		TRISCbits.TRISC4 = 0; \
	} while (0)
#define SRCLK_SetPullup()     \
	do {                  \
		WPUCbits.= 1; \
	} while (0)
#define SRCLK_ResetPullup()   \
	do {                  \
		WPUCbits.= 0; \
	} while (0)
#define SRCLK_SetPushPull()     \
	do {                    \
		ODCONCbits.= 0; \
	} while (0)
#define SRCLK_SetOpenDrain()    \
	do {                    \
		ODCONCbits.= 1; \
	} while (0)
#define SRCLK_SetAnalogMode()   \
	do {                    \
		ANSELCbits.= 1; \
	} while (0)
#define SRCLK_SetDigitalMode()  \
	do {                    \
		ANSELCbits.= 0; \
	} while (0)
// get/set IO_RC5 aliases
#define RCLK_TRIS TRISCbits.TRISC5
#define RCLK_LAT  LATCbits.LATC5
#define RCLK_PORT PORTCbits.RC5
#define RCLK_WPU  WPUCbits.
#define RCLK_OD	  ODCONCbits.
#define RCLK_ANS  ANSELCbits.
#define RCLK_SetHigh()              \
	do {                        \
		LATCbits.LATC5 = 1; \
	} while (0)
#define RCLK_SetLow()               \
	do {                        \
		LATCbits.LATC5 = 0; \
	} while (0)
#define RCLK_Toggle()                             \
	do {                                      \
		LATCbits.LATC5 = ~LATCbits.LATC5; \
	} while (0)
#define RCLK_GetValue() PORTCbits.RC5
#define RCLK_SetDigitalInput()        \
	do {                          \
		TRISCbits.TRISC5 = 1; \
	} while (0)
#define RCLK_SetDigitalOutput()       \
	do {                          \
		TRISCbits.TRISC5 = 0; \
	} while (0)
#define RCLK_SetPullup()      \
	do {                  \
		WPUCbits.= 1; \
	} while (0)
#define RCLK_ResetPullup()    \
	do {                  \
		WPUCbits.= 0; \
	} while (0)
#define RCLK_SetPushPull()      \
	do {                    \
		ODCONCbits.= 0; \
	} while (0)
#define RCLK_SetOpenDrain()     \
	do {                    \
		ODCONCbits.= 1; \
	} while (0)
#define RCLK_SetAnalogMode()    \
	do {                    \
		ANSELCbits.= 1; \
	} while (0)
#define RCLK_SetDigitalMode()   \
	do {                    \
		ANSELCbits.= 0; \
	} while (0)
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);

#endif // PINS_H
       /**
	End of File
       */