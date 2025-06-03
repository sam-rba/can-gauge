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

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA2 aliases
#define RXB0F_TRIS                 TRISAbits.TRISA2
#define RXB0F_LAT                  LATAbits.LATA2
#define RXB0F_PORT                 PORTAbits.RA2
#define RXB0F_WPU                  WPUAbits.WPUA2
#define RXB0F_OD                   ODCONAbits.ODA2
#define RXB0F_ANS                  ANSELAbits.ANSA2
#define RXB0F_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define RXB0F_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define RXB0F_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RXB0F_GetValue()           PORTAbits.RA2
#define RXB0F_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define RXB0F_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define RXB0F_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define RXB0F_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define RXB0F_SetPushPull()        do { ODCONAbits.ODA2 = 0; } while(0)
#define RXB0F_SetOpenDrain()       do { ODCONAbits.ODA2 = 1; } while(0)
#define RXB0F_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define RXB0F_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)
// get/set IO_RB4 aliases
#define SO_TRIS                 TRISBbits.TRISB4
#define SO_LAT                  LATBbits.LATB4
#define SO_PORT                 PORTBbits.RB4
#define SO_WPU                  WPUBbits.WPUB4
#define SO_OD                   ODCONBbits.ODB4
#define SO_ANS                  ANSELBbits.ANSB4
#define SO_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define SO_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define SO_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define SO_GetValue()           PORTBbits.RB4
#define SO_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define SO_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define SO_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define SO_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define SO_SetPushPull()        do { ODCONBbits.ODB4 = 0; } while(0)
#define SO_SetOpenDrain()       do { ODCONBbits.ODB4 = 1; } while(0)
#define SO_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define SO_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)
// get/set IO_RB5 aliases
#define SCLK_TRIS                 TRISBbits.TRISB5
#define SCLK_LAT                  LATBbits.LATB5
#define SCLK_PORT                 PORTBbits.RB5
#define SCLK_WPU                  WPUBbits.WPUB5
#define SCLK_OD                   ODCONBbits.ODB5
#define SCLK_ANS                  ANSELBbits.ANSB5
#define SCLK_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define SCLK_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define SCLK_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define SCLK_GetValue()           PORTBbits.RB5
#define SCLK_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define SCLK_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define SCLK_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define SCLK_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define SCLK_SetPushPull()        do { ODCONBbits.ODB5 = 0; } while(0)
#define SCLK_SetOpenDrain()       do { ODCONBbits.ODB5 = 1; } while(0)
#define SCLK_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define SCLK_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)
// get/set IO_RB6 aliases
#define CS_TRIS                 TRISBbits.TRISB6
#define CS_LAT                  LATBbits.LATB6
#define CS_PORT                 PORTBbits.RB6
#define CS_WPU                  WPUBbits.WPUB6
#define CS_OD                   ODCONBbits.ODB6
#define CS_ANS                  ANSELBbits.ANSB6
#define CS_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define CS_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define CS_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define CS_GetValue()           PORTBbits.RB6
#define CS_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define CS_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define CS_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define CS_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define CS_SetPushPull()        do { ODCONBbits.ODB6 = 0; } while(0)
#define CS_SetOpenDrain()       do { ODCONBbits.ODB6 = 1; } while(0)
#define CS_SetAnalogMode()      do { ANSELBbits.ANSB6 = 1; } while(0)
#define CS_SetDigitalMode()     do { ANSELBbits.ANSB6 = 0; } while(0)
// get/set IO_RB7 aliases
#define SI_TRIS                 TRISBbits.TRISB7
#define SI_LAT                  LATBbits.LATB7
#define SI_PORT                 PORTBbits.RB7
#define SI_WPU                  WPUBbits.WPUB7
#define SI_OD                   ODCONBbits.ODB7
#define SI_ANS                  ANSELBbits.ANSB7
#define SI_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define SI_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define SI_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define SI_GetValue()           PORTBbits.RB7
#define SI_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define SI_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define SI_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define SI_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define SI_SetPushPull()        do { ODCONBbits.ODB7 = 0; } while(0)
#define SI_SetOpenDrain()       do { ODCONBbits.ODB7 = 1; } while(0)
#define SI_SetAnalogMode()      do { ANSELBbits.ANSB7 = 1; } while(0)
#define SI_SetDigitalMode()     do { ANSELBbits.ANSB7 = 0; } while(0)
// get/set IO_RC0 aliases
#define MOTOR_00_TRIS                 TRISCbits.TRISC0
#define MOTOR_00_LAT                  LATCbits.LATC0
#define MOTOR_00_PORT                 PORTCbits.RC0
#define MOTOR_00_WPU                  WPUCbits.WPUC0
#define MOTOR_00_OD                   ODCONCbits.ODC0
#define MOTOR_00_ANS                  ANSELCbits.ANSC0
#define MOTOR_00_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define MOTOR_00_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define MOTOR_00_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define MOTOR_00_GetValue()           PORTCbits.RC0
#define MOTOR_00_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define MOTOR_00_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define MOTOR_00_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define MOTOR_00_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define MOTOR_00_SetPushPull()        do { ODCONCbits.ODC0 = 0; } while(0)
#define MOTOR_00_SetOpenDrain()       do { ODCONCbits.ODC0 = 1; } while(0)
#define MOTOR_00_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define MOTOR_00_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)
// get/set IO_RC1 aliases
#define MOTOR_01_TRIS                 TRISCbits.TRISC1
#define MOTOR_01_LAT                  LATCbits.LATC1
#define MOTOR_01_PORT                 PORTCbits.RC1
#define MOTOR_01_WPU                  WPUCbits.WPUC1
#define MOTOR_01_OD                   ODCONCbits.ODC1
#define MOTOR_01_ANS                  ANSELCbits.ANSC1
#define MOTOR_01_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define MOTOR_01_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define MOTOR_01_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define MOTOR_01_GetValue()           PORTCbits.RC1
#define MOTOR_01_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define MOTOR_01_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define MOTOR_01_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define MOTOR_01_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define MOTOR_01_SetPushPull()        do { ODCONCbits.ODC1 = 0; } while(0)
#define MOTOR_01_SetOpenDrain()       do { ODCONCbits.ODC1 = 1; } while(0)
#define MOTOR_01_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define MOTOR_01_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)
// get/set IO_RC2 aliases
#define MOTOR_02_TRIS                 TRISCbits.TRISC2
#define MOTOR_02_LAT                  LATCbits.LATC2
#define MOTOR_02_PORT                 PORTCbits.RC2
#define MOTOR_02_WPU                  WPUCbits.WPUC2
#define MOTOR_02_OD                   ODCONCbits.ODC2
#define MOTOR_02_ANS                  ANSELCbits.ANSC2
#define MOTOR_02_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define MOTOR_02_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define MOTOR_02_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define MOTOR_02_GetValue()           PORTCbits.RC2
#define MOTOR_02_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define MOTOR_02_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define MOTOR_02_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define MOTOR_02_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define MOTOR_02_SetPushPull()        do { ODCONCbits.ODC2 = 0; } while(0)
#define MOTOR_02_SetOpenDrain()       do { ODCONCbits.ODC2 = 1; } while(0)
#define MOTOR_02_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define MOTOR_02_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)
// get/set IO_RC3 aliases
#define MOTOR_03_TRIS                 TRISCbits.TRISC3
#define MOTOR_03_LAT                  LATCbits.LATC3
#define MOTOR_03_PORT                 PORTCbits.RC3
#define MOTOR_03_WPU                  WPUCbits.WPUC3
#define MOTOR_03_OD                   ODCONCbits.ODC3
#define MOTOR_03_ANS                  ANSELCbits.ANSC3
#define MOTOR_03_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define MOTOR_03_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define MOTOR_03_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define MOTOR_03_GetValue()           PORTCbits.RC3
#define MOTOR_03_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define MOTOR_03_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define MOTOR_03_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define MOTOR_03_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define MOTOR_03_SetPushPull()        do { ODCONCbits.ODC3 = 0; } while(0)
#define MOTOR_03_SetOpenDrain()       do { ODCONCbits.ODC3 = 1; } while(0)
#define MOTOR_03_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define MOTOR_03_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)
// get/set IO_RC4 aliases
#define MOTOR_10_TRIS                 TRISCbits.TRISC4
#define MOTOR_10_LAT                  LATCbits.LATC4
#define MOTOR_10_PORT                 PORTCbits.RC4
#define MOTOR_10_WPU                  WPUCbits.WPUC4
#define MOTOR_10_OD                   ODCONCbits.ODC4
#define MOTOR_10_ANS                  ANSELCbits.
#define MOTOR_10_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define MOTOR_10_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define MOTOR_10_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define MOTOR_10_GetValue()           PORTCbits.RC4
#define MOTOR_10_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define MOTOR_10_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define MOTOR_10_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define MOTOR_10_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define MOTOR_10_SetPushPull()        do { ODCONCbits.ODC4 = 0; } while(0)
#define MOTOR_10_SetOpenDrain()       do { ODCONCbits.ODC4 = 1; } while(0)
#define MOTOR_10_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define MOTOR_10_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)
// get/set IO_RC5 aliases
#define MOTOR_11_TRIS                 TRISCbits.TRISC5
#define MOTOR_11_LAT                  LATCbits.LATC5
#define MOTOR_11_PORT                 PORTCbits.RC5
#define MOTOR_11_WPU                  WPUCbits.WPUC5
#define MOTOR_11_OD                   ODCONCbits.ODC5
#define MOTOR_11_ANS                  ANSELCbits.
#define MOTOR_11_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define MOTOR_11_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define MOTOR_11_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define MOTOR_11_GetValue()           PORTCbits.RC5
#define MOTOR_11_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define MOTOR_11_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define MOTOR_11_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define MOTOR_11_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define MOTOR_11_SetPushPull()        do { ODCONCbits.ODC5 = 0; } while(0)
#define MOTOR_11_SetOpenDrain()       do { ODCONCbits.ODC5 = 1; } while(0)
#define MOTOR_11_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define MOTOR_11_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)
// get/set IO_RC6 aliases
#define MOTOR_12_TRIS                 TRISCbits.TRISC6
#define MOTOR_12_LAT                  LATCbits.LATC6
#define MOTOR_12_PORT                 PORTCbits.RC6
#define MOTOR_12_WPU                  WPUCbits.WPUC6
#define MOTOR_12_OD                   ODCONCbits.ODC6
#define MOTOR_12_ANS                  ANSELCbits.ANSC6
#define MOTOR_12_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define MOTOR_12_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define MOTOR_12_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define MOTOR_12_GetValue()           PORTCbits.RC6
#define MOTOR_12_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define MOTOR_12_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define MOTOR_12_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define MOTOR_12_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define MOTOR_12_SetPushPull()        do { ODCONCbits.ODC6 = 0; } while(0)
#define MOTOR_12_SetOpenDrain()       do { ODCONCbits.ODC6 = 1; } while(0)
#define MOTOR_12_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define MOTOR_12_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)
// get/set IO_RC7 aliases
#define MOTOR_13_TRIS                 TRISCbits.TRISC7
#define MOTOR_13_LAT                  LATCbits.LATC7
#define MOTOR_13_PORT                 PORTCbits.RC7
#define MOTOR_13_WPU                  WPUCbits.WPUC7
#define MOTOR_13_OD                   ODCONCbits.ODC7
#define MOTOR_13_ANS                  ANSELCbits.ANSC7
#define MOTOR_13_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define MOTOR_13_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define MOTOR_13_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define MOTOR_13_GetValue()           PORTCbits.RC7
#define MOTOR_13_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define MOTOR_13_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define MOTOR_13_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define MOTOR_13_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define MOTOR_13_SetPushPull()        do { ODCONCbits.ODC7 = 0; } while(0)
#define MOTOR_13_SetOpenDrain()       do { ODCONCbits.ODC7 = 1; } while(0)
#define MOTOR_13_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define MOTOR_13_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

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