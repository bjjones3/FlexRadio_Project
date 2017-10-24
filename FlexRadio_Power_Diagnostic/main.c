#include "mcc_generated_files/mcc.h"
#include <xc.h>

int board_select, board, result, light;
int green = 0;  //Green is low due to hardware setup
int red = 1;    //Red is high due to hardware setup

static int Board_High[3][13]= {
    {0x363,0x363,0x363,0x33D,0x275,0x29A,0x33D,0x275,0x1C6,0x17B,0xFE,0xFE,0xE3},
    {0,0,0x363,0x29A,0x33D,0x29A,0x33D,0x275,0x1C6,0x22A,0xFE,0x1C6,0x33D},
    {0x363,0x363,0x363,0x275,0,0,0x33D,0x1C6,0x1C6,0x130,0,0,0}
}; //All Upper limit values for each of the boards. 0's denote not used
static int Board_Low[3][13] = {
    {0x35C,0x35C,0x35C,0x337,0x26F,0x295,0x337,0x26F,0x1C0,0x175,0xF8,0xF8,0xDF},
    {0,0,0x35C,0x295,0x337,0x295,0x337,0x26F,0x1C0,0x224,0xF8,0x1C0,0x337},
    {0x35C,0x35C,0x35C,0x26F,0,0,0x337,0x1C0,0x1C0,0x12A,0,0,0}
}; //All Lower limit values for each of the boards. 0's denote not used

int Board_Select_Value()   //Determines which board is Connected
{
    Board_Select_TRIS = INPUT;   //Sets to Input
    Board_Select_SetAnalogMode();
    
    ADCC_StartConversion(Board_Select);
    
    while(!ADCC_IsConversionDone());
        board_select = ADCC_GetConversionResult();   //Reads value on Pin
    
    if(board_select >= 0xE1 && board_select <= 0xFC) //0.9V to 1.1V
        board = 2;
    else if(board_select >= 0x1DB && board_select <= 0x20D) //1.9V to 2.1V
        board = 1;
    else if(board_select >= 0x2D5  && board_select <= 0x307) //2.9V to 3.1V
        board = 0;
    else //If board_select is outside of all parameters, toggle one LED cont.
        while(1)
        {
            LED1_LAT= ~LED1_LAT;
            __delay_ms(5000);
        }
    
    return board;
}

bool LED_Value(int high, int low, adcc_channel_t channel)
{
    ADCC_StartConversion(channel);
    
    while(!ADCC_IsConversionDone());
    result = ADCC_GetConversionResult();
    
    if(result >= low && result <= high)
        light = green;
    else
        light = red;
    
    return light;
}

void Board_Init()
{
    if(board == 2)
    {
        LED1_TRIS = OUTPUT;
        LED2_TRIS = OUTPUT;
        LED3_TRIS = OUTPUT;
        LED4_TRIS = OUTPUT;
        LED5_TRIS = OUTPUT;
        LED6_TRIS = OUTPUT;
        LED7_TRIS = OUTPUT;
        LED8_TRIS = OUTPUT;
        LED9_TRIS = OUTPUT;
        LED10_TRIS = OUTPUT;
        LED11_TRIS = OUTPUT;
        LED12_TRIS = OUTPUT;
        LED13_TRIS = OUTPUT;
    }
    else if(board == 1)
    {
        LED1_TRIS = INPUT;
        LED2_TRIS = INPUT;
        LED3_TRIS = OUTPUT;
        LED4_TRIS = OUTPUT;
        LED5_TRIS = OUTPUT;
        LED6_TRIS = OUTPUT;
        LED7_TRIS = OUTPUT;
        LED8_TRIS = OUTPUT;
        LED9_TRIS = OUTPUT;
        LED10_TRIS = OUTPUT;
        LED11_TRIS = OUTPUT;
        LED12_TRIS = OUTPUT;
        LED13_TRIS = OUTPUT;
    }
    else if(board == 0)
    {
        LED1_TRIS = OUTPUT;
        LED2_TRIS = OUTPUT;
        LED3_TRIS = OUTPUT;
        LED4_TRIS = OUTPUT;
        LED5_TRIS = INPUT;
        LED6_TRIS = INPUT;
        LED7_TRIS = OUTPUT;
        LED8_TRIS = OUTPUT;
        LED9_TRIS = OUTPUT;
        LED10_TRIS = OUTPUT;
        LED11_TRIS = INPUT;
        LED12_TRIS = INPUT;
        LED13_TRIS = INPUT;
    }
}

void main(void)
{
    SYSTEM_Initialize();    //Initialize the device
    ADCC_Initialize();      //Initialize the ADC
    
    
    while (1)
    {
        Board_Select_Value();   //Determine which board is connected
        Board_Init();           //Sets high and low parameters
        
        LED1_LAT = LED_Value(Board_High[board][0],Board_Low[board][0],AND1);
        LED2_LAT = LED_Value(Board_High[board][1],Board_Low[board][1],AND0);
        LED3_LAT = LED_Value(Board_High[board][2],Board_Low[board][2],ANC3);
        LED4_LAT = LED_Value(Board_High[board][3],Board_Low[board][3],ANC2);
        LED5_LAT = LED_Value(Board_High[board][4],Board_Low[board][4],ANC1);
        LED6_LAT = LED_Value(Board_High[board][5],Board_Low[board][5],ANC0);
        LED7_LAT = LED_Value(Board_High[board][6],Board_Low[board][6],ANA6);
        LED8_LAT = LED_Value(Board_High[board][7],Board_Low[board][7],ANA7);
        LED9_LAT = LED_Value(Board_High[board][8],Board_Low[board][8],ANE2);
        LED10_LAT = LED_Value(Board_High[board][9],Board_Low[board][9],ANE1);
        LED11_LAT = LED_Value(Board_High[board][10],Board_Low[board][10],ANE0);
        LED12_LAT = LED_Value(Board_High[board][11],Board_Low[board][11],ANA5);
        LED13_LAT = LED_Value(Board_High[board][12],Board_Low[board][12],ANA4);
   }
}
/**
 End of File
*/