/**
 * CONFIGURATION BITS Generated Driver Source File
 *
 * @file config_bits.c
 *
 * @ingroup config_bitsdriver
 *
 * @brief This file contains the API implementation for the Device Configuration Bits driver.
 *
 * @version Driver Version 1.0.1
 *
 * @version Package Version 1.0.3
 */

/*
� [2025] Microchip Technology Inc. and its subsidiaries.

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

// Configuration bits: selected in the GUI

// CONFIG1
#pragma config FOSC	= INTOSC // Oscillator Selection->INTOSC oscillator: I/O function on CLKIN pin
#pragma config WDTE	= OFF	 // Watchdog Timer Enable->WDT disabled
#pragma config PWRTE	= OFF	 // Power-up Timer Enable->PWRT disabled
#pragma config MCLRE	= OFF	 // MCLR Pin Function Select->MCLR/VPP pin function is digital input
#pragma config CP	= OFF	 // Flash Program Memory Code Protection->Program memory code protection is disabled
#pragma config BOREN	= ON	 // Brown-out Reset Enable->Brown-out Reset enabled
#pragma config CLKOUTEN = ON	 // Clock Out Enable->CLKOUT function is enabled on the CLKOUT pin
#pragma config IESO	= ON	 // Internal/External Switchover->Internal/External Switchover Mode is enabled
#pragma config FCMEN	= ON	 // Fail-Safe Clock Monitor Enable->Fail-Safe Clock Monitor is enabled

// CONFIG2
#pragma config WRT	= OFF	   // Flash Memory Self-Write Protection->Write protection off
#pragma config PLLEN	= DISABLED // PLL Enable->3x or 4x PLL Disabled
#pragma config STVREN	= ON	   // Stack Overflow/Underflow Reset Enable->Stack Overflow or Underflow will cause a Reset
#pragma config BORV	= LO	   // Brown-out Reset Voltage Selection->Brown-out Reset Voltage (Vbor), low trip point selected.
#pragma config LVP	= ON	   // Low-Voltage Programming Enable->Low-voltage programming enabled
#pragma config LPBOR	= OFF	   // Low-Power Brown-out Reset Enable Bit->Low-Power BOR is disabled
#pragma config CPUDIV	= NOCLKDIV // CPU System Clock Selection Bit->NO CPU system divide
#pragma config USBLSCLK = 48MHz	   // USB Low Speed Clock Selection bit->System clock expects 48 MHz, FS/LS USB CLKENs divide-by is set to 8.
#pragma config PLLMULT	= 3x	   // PLL Multiplier Selection Bit->3x Output Frequency Selected

/**
 End of File
*/