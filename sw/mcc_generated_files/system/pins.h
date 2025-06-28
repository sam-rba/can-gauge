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
? [2025] Microchip Technology Inc. and its subsidiaries.

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

// get/set IO_RA2 aliases
#define INT_TRIS TRISAbits.TRISA2
#define INT_LAT	 LATAbits.LATA2
#define INT_PORT PORTAbits.RA2
#define INT_WPU	 WPUAbits.WPUA2
#define INT_OD	 ODCONAbits.ODA2
#define INT_ANS	 ANSELAbits.ANSA2
#define INT_SetHigh()               \
	do {                        \
		LATAbits.LATA2 = 1; \
	} while (0)
#define INT_SetLow()                \
	do {                        \
		LATAbits.LATA2 = 0; \
	} while (0)
#define INT_Toggle()                              \
	do {                                      \
		LATAbits.LATA2 = ~LATAbits.LATA2; \
	} while (0)
#define INT_GetValue() PORTAbits.RA2
#define INT_SetDigitalInput()         \
	do {                          \
		TRISAbits.TRISA2 = 1; \
	} while (0)
#define INT_SetDigitalOutput()        \
	do {                          \
		TRISAbits.TRISA2 = 0; \
	} while (0)
#define INT_SetPullup()             \
	do {                        \
		WPUAbits.WPUA2 = 1; \
	} while (0)
#define INT_ResetPullup()           \
	do {                        \
		WPUAbits.WPUA2 = 0; \
	} while (0)
#define INT_SetPushPull()            \
	do {                         \
		ODCONAbits.ODA2 = 0; \
	} while (0)
#define INT_SetOpenDrain()           \
	do {                         \
		ODCONAbits.ODA2 = 1; \
	} while (0)
#define INT_SetAnalogMode()           \
	do {                          \
		ANSELAbits.ANSA2 = 1; \
	} while (0)
#define INT_SetDigitalMode()          \
	do {                          \
		ANSELAbits.ANSA2 = 0; \
	} while (0)
// get/set IO_RB4 aliases
#define SO_TRIS TRISBbits.TRISB4
#define SO_LAT	LATBbits.LATB4
#define SO_PORT PORTBbits.RB4
#define SO_WPU	WPUBbits.WPUB4
#define SO_OD	ODCONBbits.ODB4
#define SO_ANS	ANSELBbits.ANSB4
#define SO_SetHigh()                \
	do {                        \
		LATBbits.LATB4 = 1; \
	} while (0)
#define SO_SetLow()                 \
	do {                        \
		LATBbits.LATB4 = 0; \
	} while (0)
#define SO_Toggle()                               \
	do {                                      \
		LATBbits.LATB4 = ~LATBbits.LATB4; \
	} while (0)
#define SO_GetValue() PORTBbits.RB4
#define SO_SetDigitalInput()          \
	do {                          \
		TRISBbits.TRISB4 = 1; \
	} while (0)
#define SO_SetDigitalOutput()         \
	do {                          \
		TRISBbits.TRISB4 = 0; \
	} while (0)
#define SO_SetPullup()              \
	do {                        \
		WPUBbits.WPUB4 = 1; \
	} while (0)
#define SO_ResetPullup()            \
	do {                        \
		WPUBbits.WPUB4 = 0; \
	} while (0)
#define SO_SetPushPull()             \
	do {                         \
		ODCONBbits.ODB4 = 0; \
	} while (0)
#define SO_SetOpenDrain()            \
	do {                         \
		ODCONBbits.ODB4 = 1; \
	} while (0)
#define SO_SetAnalogMode()            \
	do {                          \
		ANSELBbits.ANSB4 = 1; \
	} while (0)
#define SO_SetDigitalMode()           \
	do {                          \
		ANSELBbits.ANSB4 = 0; \
	} while (0)
// get/set IO_RB5 aliases
#define SCK_TRIS TRISBbits.TRISB5
#define SCK_LAT	 LATBbits.LATB5
#define SCK_PORT PORTBbits.RB5
#define SCK_WPU	 WPUBbits.WPUB5
#define SCK_OD	 ODCONBbits.ODB5
#define SCK_ANS	 ANSELBbits.ANSB5
#define SCK_SetHigh()               \
	do {                        \
		LATBbits.LATB5 = 1; \
	} while (0)
#define SCK_SetLow()                \
	do {                        \
		LATBbits.LATB5 = 0; \
	} while (0)
#define SCK_Toggle()                              \
	do {                                      \
		LATBbits.LATB5 = ~LATBbits.LATB5; \
	} while (0)
#define SCK_GetValue() PORTBbits.RB5
#define SCK_SetDigitalInput()         \
	do {                          \
		TRISBbits.TRISB5 = 1; \
	} while (0)
#define SCK_SetDigitalOutput()        \
	do {                          \
		TRISBbits.TRISB5 = 0; \
	} while (0)
#define SCK_SetPullup()             \
	do {                        \
		WPUBbits.WPUB5 = 1; \
	} while (0)
#define SCK_ResetPullup()           \
	do {                        \
		WPUBbits.WPUB5 = 0; \
	} while (0)
#define SCK_SetPushPull()            \
	do {                         \
		ODCONBbits.ODB5 = 0; \
	} while (0)
#define SCK_SetOpenDrain()           \
	do {                         \
		ODCONBbits.ODB5 = 1; \
	} while (0)
#define SCK_SetAnalogMode()           \
	do {                          \
		ANSELBbits.ANSB5 = 1; \
	} while (0)
#define SCK_SetDigitalMode()          \
	do {                          \
		ANSELBbits.ANSB5 = 0; \
	} while (0)
// get/set IO_RB6 aliases
#define CS_TRIS TRISBbits.TRISB6
#define CS_LAT	LATBbits.LATB6
#define CS_PORT PORTBbits.RB6
#define CS_WPU	WPUBbits.WPUB6
#define CS_OD	ODCONBbits.ODB6
#define CS_ANS	ANSELBbits.ANSB6
#define CS_SetHigh()                \
	do {                        \
		LATBbits.LATB6 = 1; \
	} while (0)
#define CS_SetLow()                 \
	do {                        \
		LATBbits.LATB6 = 0; \
	} while (0)
#define CS_Toggle()                               \
	do {                                      \
		LATBbits.LATB6 = ~LATBbits.LATB6; \
	} while (0)
#define CS_GetValue() PORTBbits.RB6
#define CS_SetDigitalInput()          \
	do {                          \
		TRISBbits.TRISB6 = 1; \
	} while (0)
#define CS_SetDigitalOutput()         \
	do {                          \
		TRISBbits.TRISB6 = 0; \
	} while (0)
#define CS_SetPullup()              \
	do {                        \
		WPUBbits.WPUB6 = 1; \
	} while (0)
#define CS_ResetPullup()            \
	do {                        \
		WPUBbits.WPUB6 = 0; \
	} while (0)
#define CS_SetPushPull()             \
	do {                         \
		ODCONBbits.ODB6 = 0; \
	} while (0)
#define CS_SetOpenDrain()            \
	do {                         \
		ODCONBbits.ODB6 = 1; \
	} while (0)
#define CS_SetAnalogMode()            \
	do {                          \
		ANSELBbits.ANSB6 = 1; \
	} while (0)
#define CS_SetDigitalMode()           \
	do {                          \
		ANSELBbits.ANSB6 = 0; \
	} while (0)
// get/set IO_RB7 aliases
#define SI_TRIS TRISBbits.TRISB7
#define SI_LAT	LATBbits.LATB7
#define SI_PORT PORTBbits.RB7
#define SI_WPU	WPUBbits.WPUB7
#define SI_OD	ODCONBbits.ODB7
#define SI_ANS	ANSELBbits.ANSB7
#define SI_SetHigh()                \
	do {                        \
		LATBbits.LATB7 = 1; \
	} while (0)
#define SI_SetLow()                 \
	do {                        \
		LATBbits.LATB7 = 0; \
	} while (0)
#define SI_Toggle()                               \
	do {                                      \
		LATBbits.LATB7 = ~LATBbits.LATB7; \
	} while (0)
#define SI_GetValue() PORTBbits.RB7
#define SI_SetDigitalInput()          \
	do {                          \
		TRISBbits.TRISB7 = 1; \
	} while (0)
#define SI_SetDigitalOutput()         \
	do {                          \
		TRISBbits.TRISB7 = 0; \
	} while (0)
#define SI_SetPullup()              \
	do {                        \
		WPUBbits.WPUB7 = 1; \
	} while (0)
#define SI_ResetPullup()            \
	do {                        \
		WPUBbits.WPUB7 = 0; \
	} while (0)
#define SI_SetPushPull()             \
	do {                         \
		ODCONBbits.ODB7 = 0; \
	} while (0)
#define SI_SetOpenDrain()            \
	do {                         \
		ODCONBbits.ODB7 = 1; \
	} while (0)
#define SI_SetAnalogMode()            \
	do {                          \
		ANSELBbits.ANSB7 = 1; \
	} while (0)
#define SI_SetDigitalMode()           \
	do {                          \
		ANSELBbits.ANSB7 = 0; \
	} while (0)
// get/set IO_RC0 aliases
#define SER_TRIS TRISCbits.TRISC0
#define SER_LAT	 LATCbits.LATC0
#define SER_PORT PORTCbits.RC0
#define SER_WPU	 WPUCbits.WPUC0
#define SER_OD	 ODCONCbits.ODC0
#define SER_ANS	 ANSELCbits.ANSC0
#define SER_SetHigh()               \
	do {                        \
		LATCbits.LATC0 = 1; \
	} while (0)
#define SER_SetLow()                \
	do {                        \
		LATCbits.LATC0 = 0; \
	} while (0)
#define SER_Toggle()                              \
	do {                                      \
		LATCbits.LATC0 = ~LATCbits.LATC0; \
	} while (0)
#define SER_GetValue() PORTCbits.RC0
#define SER_SetDigitalInput()         \
	do {                          \
		TRISCbits.TRISC0 = 1; \
	} while (0)
#define SER_SetDigitalOutput()        \
	do {                          \
		TRISCbits.TRISC0 = 0; \
	} while (0)
#define SER_SetPullup()             \
	do {                        \
		WPUCbits.WPUC0 = 1; \
	} while (0)
#define SER_ResetPullup()           \
	do {                        \
		WPUCbits.WPUC0 = 0; \
	} while (0)
#define SER_SetPushPull()            \
	do {                         \
		ODCONCbits.ODC0 = 0; \
	} while (0)
#define SER_SetOpenDrain()           \
	do {                         \
		ODCONCbits.ODC0 = 1; \
	} while (0)
#define SER_SetAnalogMode()           \
	do {                          \
		ANSELCbits.ANSC0 = 1; \
	} while (0)
#define SER_SetDigitalMode()          \
	do {                          \
		ANSELCbits.ANSC0 = 0; \
	} while (0)
// get/set IO_RC1 aliases
#define SRCLK_TRIS TRISCbits.TRISC1
#define SRCLK_LAT  LATCbits.LATC1
#define SRCLK_PORT PORTCbits.RC1
#define SRCLK_WPU  WPUCbits.WPUC1
#define SRCLK_OD   ODCONCbits.ODC1
#define SRCLK_ANS  ANSELCbits.ANSC1
#define SRCLK_SetHigh()             \
	do {                        \
		LATCbits.LATC1 = 1; \
	} while (0)
#define SRCLK_SetLow()              \
	do {                        \
		LATCbits.LATC1 = 0; \
	} while (0)
#define SRCLK_Toggle()                            \
	do {                                      \
		LATCbits.LATC1 = ~LATCbits.LATC1; \
	} while (0)
#define SRCLK_GetValue() PORTCbits.RC1
#define SRCLK_SetDigitalInput()       \
	do {                          \
		TRISCbits.TRISC1 = 1; \
	} while (0)
#define SRCLK_SetDigitalOutput()      \
	do {                          \
		TRISCbits.TRISC1 = 0; \
	} while (0)
#define SRCLK_SetPullup()           \
	do {                        \
		WPUCbits.WPUC1 = 1; \
	} while (0)
#define SRCLK_ResetPullup()         \
	do {                        \
		WPUCbits.WPUC1 = 0; \
	} while (0)
#define SRCLK_SetPushPull()          \
	do {                         \
		ODCONCbits.ODC1 = 0; \
	} while (0)
#define SRCLK_SetOpenDrain()         \
	do {                         \
		ODCONCbits.ODC1 = 1; \
	} while (0)
#define SRCLK_SetAnalogMode()         \
	do {                          \
		ANSELCbits.ANSC1 = 1; \
	} while (0)
#define SRCLK_SetDigitalMode()        \
	do {                          \
		ANSELCbits.ANSC1 = 0; \
	} while (0)
// get/set IO_RC2 aliases
#define RCLK_TRIS TRISCbits.TRISC2
#define RCLK_LAT  LATCbits.LATC2
#define RCLK_PORT PORTCbits.RC2
#define RCLK_WPU  WPUCbits.WPUC2
#define RCLK_OD	  ODCONCbits.ODC2
#define RCLK_ANS  ANSELCbits.ANSC2
#define RCLK_SetHigh()              \
	do {                        \
		LATCbits.LATC2 = 1; \
	} while (0)
#define RCLK_SetLow()               \
	do {                        \
		LATCbits.LATC2 = 0; \
	} while (0)
#define RCLK_Toggle()                             \
	do {                                      \
		LATCbits.LATC2 = ~LATCbits.LATC2; \
	} while (0)
#define RCLK_GetValue() PORTCbits.RC2
#define RCLK_SetDigitalInput()        \
	do {                          \
		TRISCbits.TRISC2 = 1; \
	} while (0)
#define RCLK_SetDigitalOutput()       \
	do {                          \
		TRISCbits.TRISC2 = 0; \
	} while (0)
#define RCLK_SetPullup()            \
	do {                        \
		WPUCbits.WPUC2 = 1; \
	} while (0)
#define RCLK_ResetPullup()          \
	do {                        \
		WPUCbits.WPUC2 = 0; \
	} while (0)
#define RCLK_SetPushPull()           \
	do {                         \
		ODCONCbits.ODC2 = 0; \
	} while (0)
#define RCLK_SetOpenDrain()          \
	do {                         \
		ODCONCbits.ODC2 = 1; \
	} while (0)
#define RCLK_SetAnalogMode()          \
	do {                          \
		ANSELCbits.ANSC2 = 1; \
	} while (0)
#define RCLK_SetDigitalMode()         \
	do {                          \
		ANSELCbits.ANSC2 = 0; \
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