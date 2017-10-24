/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.26
        Device            :  PIC18F47K40
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set ANA0 aliases
#define ANA0_TRIS               TRISAbits.TRISA0
#define ANA0_LAT                LATAbits.LATA0
#define ANA0_PORT               PORTAbits.RA0
#define ANA0_WPU                WPUAbits.WPUA0
#define ANA0_OD                ODCONAbits.ODCA0
#define ANA0_ANS                ANSELAbits.ANSELA0
#define ANA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define ANA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define ANA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define ANA0_GetValue()           PORTAbits.RA0
#define ANA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define ANA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define ANA0_SetPullup()      do { WPUAbits.WPUA0 = 1; } while(0)
#define ANA0_ResetPullup()    do { WPUAbits.WPUA0 = 0; } while(0)
#define ANA0_SetPushPull()    do { ODCONAbits.ODCA0 = 1; } while(0)
#define ANA0_SetOpenDrain()   do { ODCONAbits.ODCA0 = 0; } while(0)
#define ANA0_SetAnalogMode()  do { ANSELAbits.ANSELA0 = 1; } while(0)
#define ANA0_SetDigitalMode() do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set Board_Select aliases
#define Board_Select_TRIS               TRISAbits.TRISA1
#define Board_Select_LAT                LATAbits.LATA1
#define Board_Select_PORT               PORTAbits.RA1
#define Board_Select_WPU                WPUAbits.WPUA1
#define Board_Select_OD                ODCONAbits.ODCA1
#define Board_Select_ANS                ANSELAbits.ANSELA1
#define Board_Select_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define Board_Select_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define Board_Select_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define Board_Select_GetValue()           PORTAbits.RA1
#define Board_Select_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define Board_Select_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define Board_Select_SetPullup()      do { WPUAbits.WPUA1 = 1; } while(0)
#define Board_Select_ResetPullup()    do { WPUAbits.WPUA1 = 0; } while(0)
#define Board_Select_SetPushPull()    do { ODCONAbits.ODCA1 = 1; } while(0)
#define Board_Select_SetOpenDrain()   do { ODCONAbits.ODCA1 = 0; } while(0)
#define Board_Select_SetAnalogMode()  do { ANSELAbits.ANSELA1 = 1; } while(0)
#define Board_Select_SetDigitalMode() do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set RA2 procedures
#define RA2_SetHigh()    do { LATAbits.LATA2 = 1; } while(0)
#define RA2_SetLow()   do { LATAbits.LATA2 = 0; } while(0)
#define RA2_Toggle()   do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RA2_GetValue()         PORTAbits.RA2
#define RA2_SetDigitalInput()   do { TRISAbits.TRISA2 = 1; } while(0)
#define RA2_SetDigitalOutput()  do { TRISAbits.TRISA2 = 0; } while(0)
#define RA2_SetPullup()     do { WPUAbits.WPUA2 = 1; } while(0)
#define RA2_ResetPullup()   do { WPUAbits.WPUA2 = 0; } while(0)
#define RA2_SetAnalogMode() do { ANSELAbits.ANSELA2 = 1; } while(0)
#define RA2_SetDigitalMode()do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set RA3 procedures
#define RA3_SetHigh()    do { LATAbits.LATA3 = 1; } while(0)
#define RA3_SetLow()   do { LATAbits.LATA3 = 0; } while(0)
#define RA3_Toggle()   do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define RA3_GetValue()         PORTAbits.RA3
#define RA3_SetDigitalInput()   do { TRISAbits.TRISA3 = 1; } while(0)
#define RA3_SetDigitalOutput()  do { TRISAbits.TRISA3 = 0; } while(0)
#define RA3_SetPullup()     do { WPUAbits.WPUA3 = 1; } while(0)
#define RA3_ResetPullup()   do { WPUAbits.WPUA3 = 0; } while(0)
#define RA3_SetAnalogMode() do { ANSELAbits.ANSELA3 = 1; } while(0)
#define RA3_SetDigitalMode()do { ANSELAbits.ANSELA3 = 0; } while(0)

// get/set ANA4 aliases
#define ANA4_TRIS               TRISAbits.TRISA4
#define ANA4_LAT                LATAbits.LATA4
#define ANA4_PORT               PORTAbits.RA4
#define ANA4_WPU                WPUAbits.WPUA4
#define ANA4_OD                ODCONAbits.ODCA4
#define ANA4_ANS                ANSELAbits.ANSELA4
#define ANA4_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define ANA4_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define ANA4_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define ANA4_GetValue()           PORTAbits.RA4
#define ANA4_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define ANA4_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define ANA4_SetPullup()      do { WPUAbits.WPUA4 = 1; } while(0)
#define ANA4_ResetPullup()    do { WPUAbits.WPUA4 = 0; } while(0)
#define ANA4_SetPushPull()    do { ODCONAbits.ODCA4 = 1; } while(0)
#define ANA4_SetOpenDrain()   do { ODCONAbits.ODCA4 = 0; } while(0)
#define ANA4_SetAnalogMode()  do { ANSELAbits.ANSELA4 = 1; } while(0)
#define ANA4_SetDigitalMode() do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set ANA5 aliases
#define ANA5_TRIS               TRISAbits.TRISA5
#define ANA5_LAT                LATAbits.LATA5
#define ANA5_PORT               PORTAbits.RA5
#define ANA5_WPU                WPUAbits.WPUA5
#define ANA5_OD                ODCONAbits.ODCA5
#define ANA5_ANS                ANSELAbits.ANSELA5
#define ANA5_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define ANA5_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define ANA5_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define ANA5_GetValue()           PORTAbits.RA5
#define ANA5_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define ANA5_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define ANA5_SetPullup()      do { WPUAbits.WPUA5 = 1; } while(0)
#define ANA5_ResetPullup()    do { WPUAbits.WPUA5 = 0; } while(0)
#define ANA5_SetPushPull()    do { ODCONAbits.ODCA5 = 1; } while(0)
#define ANA5_SetOpenDrain()   do { ODCONAbits.ODCA5 = 0; } while(0)
#define ANA5_SetAnalogMode()  do { ANSELAbits.ANSELA5 = 1; } while(0)
#define ANA5_SetDigitalMode() do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set ANA6 aliases
#define ANA6_TRIS               TRISAbits.TRISA6
#define ANA6_LAT                LATAbits.LATA6
#define ANA6_PORT               PORTAbits.RA6
#define ANA6_WPU                WPUAbits.WPUA6
#define ANA6_OD                ODCONAbits.ODCA6
#define ANA6_ANS                ANSELAbits.ANSELA6
#define ANA6_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define ANA6_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define ANA6_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define ANA6_GetValue()           PORTAbits.RA6
#define ANA6_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define ANA6_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define ANA6_SetPullup()      do { WPUAbits.WPUA6 = 1; } while(0)
#define ANA6_ResetPullup()    do { WPUAbits.WPUA6 = 0; } while(0)
#define ANA6_SetPushPull()    do { ODCONAbits.ODCA6 = 1; } while(0)
#define ANA6_SetOpenDrain()   do { ODCONAbits.ODCA6 = 0; } while(0)
#define ANA6_SetAnalogMode()  do { ANSELAbits.ANSELA6 = 1; } while(0)
#define ANA6_SetDigitalMode() do { ANSELAbits.ANSELA6 = 0; } while(0)

// get/set ANA7 aliases
#define ANA7_TRIS               TRISAbits.TRISA7
#define ANA7_LAT                LATAbits.LATA7
#define ANA7_PORT               PORTAbits.RA7
#define ANA7_WPU                WPUAbits.WPUA7
#define ANA7_OD                ODCONAbits.ODCA7
#define ANA7_ANS                ANSELAbits.ANSELA7
#define ANA7_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define ANA7_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define ANA7_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define ANA7_GetValue()           PORTAbits.RA7
#define ANA7_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define ANA7_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define ANA7_SetPullup()      do { WPUAbits.WPUA7 = 1; } while(0)
#define ANA7_ResetPullup()    do { WPUAbits.WPUA7 = 0; } while(0)
#define ANA7_SetPushPull()    do { ODCONAbits.ODCA7 = 1; } while(0)
#define ANA7_SetOpenDrain()   do { ODCONAbits.ODCA7 = 0; } while(0)
#define ANA7_SetAnalogMode()  do { ANSELAbits.ANSELA7 = 1; } while(0)
#define ANA7_SetDigitalMode() do { ANSELAbits.ANSELA7 = 0; } while(0)

// get/set LED4 aliases
#define LED4_TRIS               TRISBbits.TRISB0
#define LED4_LAT                LATBbits.LATB0
#define LED4_PORT               PORTBbits.RB0
#define LED4_WPU                WPUBbits.WPUB0
#define LED4_OD                ODCONBbits.ODCB0
#define LED4_ANS                ANSELBbits.ANSELB0
#define LED4_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define LED4_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define LED4_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define LED4_GetValue()           PORTBbits.RB0
#define LED4_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define LED4_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define LED4_SetPullup()      do { WPUBbits.WPUB0 = 1; } while(0)
#define LED4_ResetPullup()    do { WPUBbits.WPUB0 = 0; } while(0)
#define LED4_SetPushPull()    do { ODCONBbits.ODCB0 = 1; } while(0)
#define LED4_SetOpenDrain()   do { ODCONBbits.ODCB0 = 0; } while(0)
#define LED4_SetAnalogMode()  do { ANSELBbits.ANSELB0 = 1; } while(0)
#define LED4_SetDigitalMode() do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set LED3 aliases
#define LED3_TRIS               TRISBbits.TRISB1
#define LED3_LAT                LATBbits.LATB1
#define LED3_PORT               PORTBbits.RB1
#define LED3_WPU                WPUBbits.WPUB1
#define LED3_OD                ODCONBbits.ODCB1
#define LED3_ANS                ANSELBbits.ANSELB1
#define LED3_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define LED3_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define LED3_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define LED3_GetValue()           PORTBbits.RB1
#define LED3_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define LED3_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define LED3_SetPullup()      do { WPUBbits.WPUB1 = 1; } while(0)
#define LED3_ResetPullup()    do { WPUBbits.WPUB1 = 0; } while(0)
#define LED3_SetPushPull()    do { ODCONBbits.ODCB1 = 1; } while(0)
#define LED3_SetOpenDrain()   do { ODCONBbits.ODCB1 = 0; } while(0)
#define LED3_SetAnalogMode()  do { ANSELBbits.ANSELB1 = 1; } while(0)
#define LED3_SetDigitalMode() do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set LED2 aliases
#define LED2_TRIS               TRISBbits.TRISB2
#define LED2_LAT                LATBbits.LATB2
#define LED2_PORT               PORTBbits.RB2
#define LED2_WPU                WPUBbits.WPUB2
#define LED2_OD                ODCONBbits.ODCB2
#define LED2_ANS                ANSELBbits.ANSELB2
#define LED2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define LED2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define LED2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define LED2_GetValue()           PORTBbits.RB2
#define LED2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define LED2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define LED2_SetPullup()      do { WPUBbits.WPUB2 = 1; } while(0)
#define LED2_ResetPullup()    do { WPUBbits.WPUB2 = 0; } while(0)
#define LED2_SetPushPull()    do { ODCONBbits.ODCB2 = 1; } while(0)
#define LED2_SetOpenDrain()   do { ODCONBbits.ODCB2 = 0; } while(0)
#define LED2_SetAnalogMode()  do { ANSELBbits.ANSELB2 = 1; } while(0)
#define LED2_SetDigitalMode() do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set LED1 aliases
#define LED1_TRIS               TRISBbits.TRISB3
#define LED1_LAT                LATBbits.LATB3
#define LED1_PORT               PORTBbits.RB3
#define LED1_WPU                WPUBbits.WPUB3
#define LED1_OD                ODCONBbits.ODCB3
#define LED1_ANS                ANSELBbits.ANSELB3
#define LED1_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define LED1_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define LED1_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define LED1_GetValue()           PORTBbits.RB3
#define LED1_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define LED1_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define LED1_SetPullup()      do { WPUBbits.WPUB3 = 1; } while(0)
#define LED1_ResetPullup()    do { WPUBbits.WPUB3 = 0; } while(0)
#define LED1_SetPushPull()    do { ODCONBbits.ODCB3 = 1; } while(0)
#define LED1_SetOpenDrain()   do { ODCONBbits.ODCB3 = 0; } while(0)
#define LED1_SetAnalogMode()  do { ANSELBbits.ANSELB3 = 1; } while(0)
#define LED1_SetDigitalMode() do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()    do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()   do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()   do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()         PORTBbits.RB4
#define RB4_SetDigitalInput()   do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()  do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()     do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()   do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode() do { ANSELBbits.ANSELB4 = 1; } while(0)
#define RB4_SetDigitalMode()do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set ANB5 aliases
#define ANB5_TRIS               TRISBbits.TRISB5
#define ANB5_LAT                LATBbits.LATB5
#define ANB5_PORT               PORTBbits.RB5
#define ANB5_WPU                WPUBbits.WPUB5
#define ANB5_OD                ODCONBbits.ODCB5
#define ANB5_ANS                ANSELBbits.ANSELB5
#define ANB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define ANB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define ANB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define ANB5_GetValue()           PORTBbits.RB5
#define ANB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define ANB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define ANB5_SetPullup()      do { WPUBbits.WPUB5 = 1; } while(0)
#define ANB5_ResetPullup()    do { WPUBbits.WPUB5 = 0; } while(0)
#define ANB5_SetPushPull()    do { ODCONBbits.ODCB5 = 1; } while(0)
#define ANB5_SetOpenDrain()   do { ODCONBbits.ODCB5 = 0; } while(0)
#define ANB5_SetAnalogMode()  do { ANSELBbits.ANSELB5 = 1; } while(0)
#define ANB5_SetDigitalMode() do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set ANC0 aliases
#define ANC0_TRIS               TRISCbits.TRISC0
#define ANC0_LAT                LATCbits.LATC0
#define ANC0_PORT               PORTCbits.RC0
#define ANC0_WPU                WPUCbits.WPUC0
#define ANC0_OD                ODCONCbits.ODCC0
#define ANC0_ANS                ANSELCbits.ANSELC0
#define ANC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define ANC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define ANC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define ANC0_GetValue()           PORTCbits.RC0
#define ANC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define ANC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define ANC0_SetPullup()      do { WPUCbits.WPUC0 = 1; } while(0)
#define ANC0_ResetPullup()    do { WPUCbits.WPUC0 = 0; } while(0)
#define ANC0_SetPushPull()    do { ODCONCbits.ODCC0 = 1; } while(0)
#define ANC0_SetOpenDrain()   do { ODCONCbits.ODCC0 = 0; } while(0)
#define ANC0_SetAnalogMode()  do { ANSELCbits.ANSELC0 = 1; } while(0)
#define ANC0_SetDigitalMode() do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set ANC1 aliases
#define ANC1_TRIS               TRISCbits.TRISC1
#define ANC1_LAT                LATCbits.LATC1
#define ANC1_PORT               PORTCbits.RC1
#define ANC1_WPU                WPUCbits.WPUC1
#define ANC1_OD                ODCONCbits.ODCC1
#define ANC1_ANS                ANSELCbits.ANSELC1
#define ANC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define ANC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define ANC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define ANC1_GetValue()           PORTCbits.RC1
#define ANC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define ANC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define ANC1_SetPullup()      do { WPUCbits.WPUC1 = 1; } while(0)
#define ANC1_ResetPullup()    do { WPUCbits.WPUC1 = 0; } while(0)
#define ANC1_SetPushPull()    do { ODCONCbits.ODCC1 = 1; } while(0)
#define ANC1_SetOpenDrain()   do { ODCONCbits.ODCC1 = 0; } while(0)
#define ANC1_SetAnalogMode()  do { ANSELCbits.ANSELC1 = 1; } while(0)
#define ANC1_SetDigitalMode() do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set ANC2 aliases
#define ANC2_TRIS               TRISCbits.TRISC2
#define ANC2_LAT                LATCbits.LATC2
#define ANC2_PORT               PORTCbits.RC2
#define ANC2_WPU                WPUCbits.WPUC2
#define ANC2_OD                ODCONCbits.ODCC2
#define ANC2_ANS                ANSELCbits.ANSELC2
#define ANC2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define ANC2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define ANC2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define ANC2_GetValue()           PORTCbits.RC2
#define ANC2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define ANC2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define ANC2_SetPullup()      do { WPUCbits.WPUC2 = 1; } while(0)
#define ANC2_ResetPullup()    do { WPUCbits.WPUC2 = 0; } while(0)
#define ANC2_SetPushPull()    do { ODCONCbits.ODCC2 = 1; } while(0)
#define ANC2_SetOpenDrain()   do { ODCONCbits.ODCC2 = 0; } while(0)
#define ANC2_SetAnalogMode()  do { ANSELCbits.ANSELC2 = 1; } while(0)
#define ANC2_SetDigitalMode() do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set ANC3 aliases
#define ANC3_TRIS               TRISCbits.TRISC3
#define ANC3_LAT                LATCbits.LATC3
#define ANC3_PORT               PORTCbits.RC3
#define ANC3_WPU                WPUCbits.WPUC3
#define ANC3_OD                ODCONCbits.ODCC3
#define ANC3_ANS                ANSELCbits.ANSELC3
#define ANC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define ANC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define ANC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define ANC3_GetValue()           PORTCbits.RC3
#define ANC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define ANC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define ANC3_SetPullup()      do { WPUCbits.WPUC3 = 1; } while(0)
#define ANC3_ResetPullup()    do { WPUCbits.WPUC3 = 0; } while(0)
#define ANC3_SetPushPull()    do { ODCONCbits.ODCC3 = 1; } while(0)
#define ANC3_SetOpenDrain()   do { ODCONCbits.ODCC3 = 0; } while(0)
#define ANC3_SetAnalogMode()  do { ANSELCbits.ANSELC3 = 1; } while(0)
#define ANC3_SetDigitalMode() do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set LED12 aliases
#define LED12_TRIS               TRISCbits.TRISC4
#define LED12_LAT                LATCbits.LATC4
#define LED12_PORT               PORTCbits.RC4
#define LED12_WPU                WPUCbits.WPUC4
#define LED12_OD                ODCONCbits.ODCC4
#define LED12_ANS                ANSELCbits.ANSELC4
#define LED12_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define LED12_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define LED12_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define LED12_GetValue()           PORTCbits.RC4
#define LED12_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define LED12_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define LED12_SetPullup()      do { WPUCbits.WPUC4 = 1; } while(0)
#define LED12_ResetPullup()    do { WPUCbits.WPUC4 = 0; } while(0)
#define LED12_SetPushPull()    do { ODCONCbits.ODCC4 = 1; } while(0)
#define LED12_SetOpenDrain()   do { ODCONCbits.ODCC4 = 0; } while(0)
#define LED12_SetAnalogMode()  do { ANSELCbits.ANSELC4 = 1; } while(0)
#define LED12_SetDigitalMode() do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set LED11 aliases
#define LED11_TRIS               TRISCbits.TRISC5
#define LED11_LAT                LATCbits.LATC5
#define LED11_PORT               PORTCbits.RC5
#define LED11_WPU                WPUCbits.WPUC5
#define LED11_OD                ODCONCbits.ODCC5
#define LED11_ANS                ANSELCbits.ANSELC5
#define LED11_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define LED11_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define LED11_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define LED11_GetValue()           PORTCbits.RC5
#define LED11_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define LED11_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define LED11_SetPullup()      do { WPUCbits.WPUC5 = 1; } while(0)
#define LED11_ResetPullup()    do { WPUCbits.WPUC5 = 0; } while(0)
#define LED11_SetPushPull()    do { ODCONCbits.ODCC5 = 1; } while(0)
#define LED11_SetOpenDrain()   do { ODCONCbits.ODCC5 = 0; } while(0)
#define LED11_SetAnalogMode()  do { ANSELCbits.ANSELC5 = 1; } while(0)
#define LED11_SetDigitalMode() do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set LED10 aliases
#define LED10_TRIS               TRISCbits.TRISC6
#define LED10_LAT                LATCbits.LATC6
#define LED10_PORT               PORTCbits.RC6
#define LED10_WPU                WPUCbits.WPUC6
#define LED10_OD                ODCONCbits.ODCC6
#define LED10_ANS                ANSELCbits.ANSELC6
#define LED10_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define LED10_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define LED10_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define LED10_GetValue()           PORTCbits.RC6
#define LED10_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define LED10_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define LED10_SetPullup()      do { WPUCbits.WPUC6 = 1; } while(0)
#define LED10_ResetPullup()    do { WPUCbits.WPUC6 = 0; } while(0)
#define LED10_SetPushPull()    do { ODCONCbits.ODCC6 = 1; } while(0)
#define LED10_SetOpenDrain()   do { ODCONCbits.ODCC6 = 0; } while(0)
#define LED10_SetAnalogMode()  do { ANSELCbits.ANSELC6 = 1; } while(0)
#define LED10_SetDigitalMode() do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set LED9 aliases
#define LED9_TRIS               TRISCbits.TRISC7
#define LED9_LAT                LATCbits.LATC7
#define LED9_PORT               PORTCbits.RC7
#define LED9_WPU                WPUCbits.WPUC7
#define LED9_OD                ODCONCbits.ODCC7
#define LED9_ANS                ANSELCbits.ANSELC7
#define LED9_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define LED9_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define LED9_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define LED9_GetValue()           PORTCbits.RC7
#define LED9_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define LED9_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define LED9_SetPullup()      do { WPUCbits.WPUC7 = 1; } while(0)
#define LED9_ResetPullup()    do { WPUCbits.WPUC7 = 0; } while(0)
#define LED9_SetPushPull()    do { ODCONCbits.ODCC7 = 1; } while(0)
#define LED9_SetOpenDrain()   do { ODCONCbits.ODCC7 = 0; } while(0)
#define LED9_SetAnalogMode()  do { ANSELCbits.ANSELC7 = 1; } while(0)
#define LED9_SetDigitalMode() do { ANSELCbits.ANSELC7 = 0; } while(0)

// get/set AND0 aliases
#define AND0_TRIS               TRISDbits.TRISD0
#define AND0_LAT                LATDbits.LATD0
#define AND0_PORT               PORTDbits.RD0
#define AND0_WPU                WPUDbits.WPUD0
#define AND0_OD                ODCONDbits.ODCD0
#define AND0_ANS                ANSELDbits.ANSELD0
#define AND0_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define AND0_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define AND0_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define AND0_GetValue()           PORTDbits.RD0
#define AND0_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define AND0_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define AND0_SetPullup()      do { WPUDbits.WPUD0 = 1; } while(0)
#define AND0_ResetPullup()    do { WPUDbits.WPUD0 = 0; } while(0)
#define AND0_SetPushPull()    do { ODCONDbits.ODCD0 = 1; } while(0)
#define AND0_SetOpenDrain()   do { ODCONDbits.ODCD0 = 0; } while(0)
#define AND0_SetAnalogMode()  do { ANSELDbits.ANSELD0 = 1; } while(0)
#define AND0_SetDigitalMode() do { ANSELDbits.ANSELD0 = 0; } while(0)

// get/set AND1 aliases
#define AND1_TRIS               TRISDbits.TRISD1
#define AND1_LAT                LATDbits.LATD1
#define AND1_PORT               PORTDbits.RD1
#define AND1_WPU                WPUDbits.WPUD1
#define AND1_OD                ODCONDbits.ODCD1
#define AND1_ANS                ANSELDbits.ANSELD1
#define AND1_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define AND1_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define AND1_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define AND1_GetValue()           PORTDbits.RD1
#define AND1_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define AND1_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define AND1_SetPullup()      do { WPUDbits.WPUD1 = 1; } while(0)
#define AND1_ResetPullup()    do { WPUDbits.WPUD1 = 0; } while(0)
#define AND1_SetPushPull()    do { ODCONDbits.ODCD1 = 1; } while(0)
#define AND1_SetOpenDrain()   do { ODCONDbits.ODCD1 = 0; } while(0)
#define AND1_SetAnalogMode()  do { ANSELDbits.ANSELD1 = 1; } while(0)
#define AND1_SetDigitalMode() do { ANSELDbits.ANSELD1 = 0; } while(0)

// get/set POWER_BUTTON aliases
#define POWER_BUTTON_TRIS               TRISDbits.TRISD2
#define POWER_BUTTON_LAT                LATDbits.LATD2
#define POWER_BUTTON_PORT               PORTDbits.RD2
#define POWER_BUTTON_WPU                WPUDbits.WPUD2
#define POWER_BUTTON_OD                ODCONDbits.ODCD2
#define POWER_BUTTON_ANS                ANSELDbits.ANSELD2
#define POWER_BUTTON_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define POWER_BUTTON_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define POWER_BUTTON_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define POWER_BUTTON_GetValue()           PORTDbits.RD2
#define POWER_BUTTON_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define POWER_BUTTON_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define POWER_BUTTON_SetPullup()      do { WPUDbits.WPUD2 = 1; } while(0)
#define POWER_BUTTON_ResetPullup()    do { WPUDbits.WPUD2 = 0; } while(0)
#define POWER_BUTTON_SetPushPull()    do { ODCONDbits.ODCD2 = 1; } while(0)
#define POWER_BUTTON_SetOpenDrain()   do { ODCONDbits.ODCD2 = 0; } while(0)
#define POWER_BUTTON_SetAnalogMode()  do { ANSELDbits.ANSELD2 = 1; } while(0)
#define POWER_BUTTON_SetDigitalMode() do { ANSELDbits.ANSELD2 = 0; } while(0)

// get/set LED13 aliases
#define LED13_TRIS               TRISDbits.TRISD3
#define LED13_LAT                LATDbits.LATD3
#define LED13_PORT               PORTDbits.RD3
#define LED13_WPU                WPUDbits.WPUD3
#define LED13_OD                ODCONDbits.ODCD3
#define LED13_ANS                ANSELDbits.ANSELD3
#define LED13_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define LED13_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define LED13_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define LED13_GetValue()           PORTDbits.RD3
#define LED13_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define LED13_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define LED13_SetPullup()      do { WPUDbits.WPUD3 = 1; } while(0)
#define LED13_ResetPullup()    do { WPUDbits.WPUD3 = 0; } while(0)
#define LED13_SetPushPull()    do { ODCONDbits.ODCD3 = 1; } while(0)
#define LED13_SetOpenDrain()   do { ODCONDbits.ODCD3 = 0; } while(0)
#define LED13_SetAnalogMode()  do { ANSELDbits.ANSELD3 = 1; } while(0)
#define LED13_SetDigitalMode() do { ANSELDbits.ANSELD3 = 0; } while(0)

// get/set LED8 aliases
#define LED8_TRIS               TRISDbits.TRISD4
#define LED8_LAT                LATDbits.LATD4
#define LED8_PORT               PORTDbits.RD4
#define LED8_WPU                WPUDbits.WPUD4
#define LED8_OD                ODCONDbits.ODCD4
#define LED8_ANS                ANSELDbits.ANSELD4
#define LED8_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define LED8_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define LED8_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define LED8_GetValue()           PORTDbits.RD4
#define LED8_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define LED8_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define LED8_SetPullup()      do { WPUDbits.WPUD4 = 1; } while(0)
#define LED8_ResetPullup()    do { WPUDbits.WPUD4 = 0; } while(0)
#define LED8_SetPushPull()    do { ODCONDbits.ODCD4 = 1; } while(0)
#define LED8_SetOpenDrain()   do { ODCONDbits.ODCD4 = 0; } while(0)
#define LED8_SetAnalogMode()  do { ANSELDbits.ANSELD4 = 1; } while(0)
#define LED8_SetDigitalMode() do { ANSELDbits.ANSELD4 = 0; } while(0)

// get/set LED7 aliases
#define LED7_TRIS               TRISDbits.TRISD5
#define LED7_LAT                LATDbits.LATD5
#define LED7_PORT               PORTDbits.RD5
#define LED7_WPU                WPUDbits.WPUD5
#define LED7_OD                ODCONDbits.ODCD5
#define LED7_ANS                ANSELDbits.ANSELD5
#define LED7_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define LED7_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define LED7_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define LED7_GetValue()           PORTDbits.RD5
#define LED7_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define LED7_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define LED7_SetPullup()      do { WPUDbits.WPUD5 = 1; } while(0)
#define LED7_ResetPullup()    do { WPUDbits.WPUD5 = 0; } while(0)
#define LED7_SetPushPull()    do { ODCONDbits.ODCD5 = 1; } while(0)
#define LED7_SetOpenDrain()   do { ODCONDbits.ODCD5 = 0; } while(0)
#define LED7_SetAnalogMode()  do { ANSELDbits.ANSELD5 = 1; } while(0)
#define LED7_SetDigitalMode() do { ANSELDbits.ANSELD5 = 0; } while(0)

// get/set LED6 aliases
#define LED6_TRIS               TRISDbits.TRISD6
#define LED6_LAT                LATDbits.LATD6
#define LED6_PORT               PORTDbits.RD6
#define LED6_WPU                WPUDbits.WPUD6
#define LED6_OD                ODCONDbits.ODCD6
#define LED6_ANS                ANSELDbits.ANSELD6
#define LED6_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define LED6_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define LED6_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define LED6_GetValue()           PORTDbits.RD6
#define LED6_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define LED6_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define LED6_SetPullup()      do { WPUDbits.WPUD6 = 1; } while(0)
#define LED6_ResetPullup()    do { WPUDbits.WPUD6 = 0; } while(0)
#define LED6_SetPushPull()    do { ODCONDbits.ODCD6 = 1; } while(0)
#define LED6_SetOpenDrain()   do { ODCONDbits.ODCD6 = 0; } while(0)
#define LED6_SetAnalogMode()  do { ANSELDbits.ANSELD6 = 1; } while(0)
#define LED6_SetDigitalMode() do { ANSELDbits.ANSELD6 = 0; } while(0)

// get/set LED5 aliases
#define LED5_TRIS               TRISDbits.TRISD7
#define LED5_LAT                LATDbits.LATD7
#define LED5_PORT               PORTDbits.RD7
#define LED5_WPU                WPUDbits.WPUD7
#define LED5_OD                ODCONDbits.ODCD7
#define LED5_ANS                ANSELDbits.ANSELD7
#define LED5_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define LED5_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define LED5_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define LED5_GetValue()           PORTDbits.RD7
#define LED5_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define LED5_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define LED5_SetPullup()      do { WPUDbits.WPUD7 = 1; } while(0)
#define LED5_ResetPullup()    do { WPUDbits.WPUD7 = 0; } while(0)
#define LED5_SetPushPull()    do { ODCONDbits.ODCD7 = 1; } while(0)
#define LED5_SetOpenDrain()   do { ODCONDbits.ODCD7 = 0; } while(0)
#define LED5_SetAnalogMode()  do { ANSELDbits.ANSELD7 = 1; } while(0)
#define LED5_SetDigitalMode() do { ANSELDbits.ANSELD7 = 0; } while(0)

// get/set ANE0 aliases
#define ANE0_TRIS               TRISEbits.TRISE0
#define ANE0_LAT                LATEbits.LATE0
#define ANE0_PORT               PORTEbits.RE0
#define ANE0_WPU                WPUEbits.WPUE0
#define ANE0_OD                ODCONEbits.ODCE0
#define ANE0_ANS                ANSELEbits.ANSELE0
#define ANE0_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define ANE0_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define ANE0_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define ANE0_GetValue()           PORTEbits.RE0
#define ANE0_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define ANE0_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define ANE0_SetPullup()      do { WPUEbits.WPUE0 = 1; } while(0)
#define ANE0_ResetPullup()    do { WPUEbits.WPUE0 = 0; } while(0)
#define ANE0_SetPushPull()    do { ODCONEbits.ODCE0 = 1; } while(0)
#define ANE0_SetOpenDrain()   do { ODCONEbits.ODCE0 = 0; } while(0)
#define ANE0_SetAnalogMode()  do { ANSELEbits.ANSELE0 = 1; } while(0)
#define ANE0_SetDigitalMode() do { ANSELEbits.ANSELE0 = 0; } while(0)

// get/set ANE1 aliases
#define ANE1_TRIS               TRISEbits.TRISE1
#define ANE1_LAT                LATEbits.LATE1
#define ANE1_PORT               PORTEbits.RE1
#define ANE1_WPU                WPUEbits.WPUE1
#define ANE1_OD                ODCONEbits.ODCE1
#define ANE1_ANS                ANSELEbits.ANSELE1
#define ANE1_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define ANE1_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define ANE1_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define ANE1_GetValue()           PORTEbits.RE1
#define ANE1_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define ANE1_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define ANE1_SetPullup()      do { WPUEbits.WPUE1 = 1; } while(0)
#define ANE1_ResetPullup()    do { WPUEbits.WPUE1 = 0; } while(0)
#define ANE1_SetPushPull()    do { ODCONEbits.ODCE1 = 1; } while(0)
#define ANE1_SetOpenDrain()   do { ODCONEbits.ODCE1 = 0; } while(0)
#define ANE1_SetAnalogMode()  do { ANSELEbits.ANSELE1 = 1; } while(0)
#define ANE1_SetDigitalMode() do { ANSELEbits.ANSELE1 = 0; } while(0)

// get/set ANE2 aliases
#define ANE2_TRIS               TRISEbits.TRISE2
#define ANE2_LAT                LATEbits.LATE2
#define ANE2_PORT               PORTEbits.RE2
#define ANE2_WPU                WPUEbits.WPUE2
#define ANE2_OD                ODCONEbits.ODCE2
#define ANE2_ANS                ANSELEbits.ANSELE2
#define ANE2_SetHigh()            do { LATEbits.LATE2 = 1; } while(0)
#define ANE2_SetLow()             do { LATEbits.LATE2 = 0; } while(0)
#define ANE2_Toggle()             do { LATEbits.LATE2 = ~LATEbits.LATE2; } while(0)
#define ANE2_GetValue()           PORTEbits.RE2
#define ANE2_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define ANE2_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
#define ANE2_SetPullup()      do { WPUEbits.WPUE2 = 1; } while(0)
#define ANE2_ResetPullup()    do { WPUEbits.WPUE2 = 0; } while(0)
#define ANE2_SetPushPull()    do { ODCONEbits.ODCE2 = 1; } while(0)
#define ANE2_SetOpenDrain()   do { ODCONEbits.ODCE2 = 0; } while(0)
#define ANE2_SetAnalogMode()  do { ANSELEbits.ANSELE2 = 1; } while(0)
#define ANE2_SetDigitalMode() do { ANSELEbits.ANSELE2 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/