#include "mcc_generated_files/mcc.h"
#include <xc.h>

uint16_t board_select, board, result, light;
uint16_t green = 0;
uint16_t red = 1;


//All Upper limit values for each of the boards in mV.
static  const uint16_t Board_High [3][13] = {
{3750, 3750, 3750, 1750, 2650, 2800, 3450, 2600, 1900, 1600, 1050, 1075, 950},
{3750, 3750, 3750, 2800, 1750, 2800, 3450, 2600, 1900, 2300, 1040, 1900, 3450},
{3750, 3750, 3750, 2650, 2650, 2800, 3450, 2600, 1900, 1300, 1100, 1075, 1000}
}; 

// All Lower limit values for each of the boards in mV. 
static const uint16_t Board_Low [3][13] = {
{3000, 3000, 3000, 1550, 2350, 2600, 3150, 2400, 1700, 1400,  950, 800, 850},
{3000, 3000, 3000, 2550, 1550, 2600, 3150, 2400, 1700, 2100,  960, 1700, 3150},
{3000, 3000, 3000, 2350, 2350, 2600, 3150, 2400, 1700, 1100,  900, 800, 800}
}; 

int Board_Select_Value()   //Determines which board is Connected
{
    Board_Select_TRIS = INPUT;   //Sets to Input
    Board_Select_SetAnalogMode();
    
    bool board_ok = true;
    
    while(board_ok)
    {
    ADCC_StartConversion(Board_Select);
    
    while(!ADCC_IsConversionDone());
        board_select = ADCC_GetConversionResult();   //Reads value on Pin
        
    board_select = board_select*4; //reports board_select in mV. Step value is 1/4 mV value
    
    if(board_select >= 900 && board_select <= 1100) //0.9V to 1.1V
    {
        board = 2; 
        board_ok = false;
    }
    else if(board_select >= 1900 && board_select <= 2100) //1.9V to 2.1V
    {
        board = 1; 
        board_ok = false;
    }
    else if(board_select >= 3000  && board_select <= 3400) //3.0V to 3.4V
    {
        board = 0; 
        board_ok = false;
    }
    else //If board_select is outside of all parameters, toggle one LED cont.
        LED1_LAT= ~LED1_LAT;
        
        __delay_ms(5000); //wait for 5 seconds before restart
    }
    
    return board;
}

int LED_Value(uint16_t (*high)[13], uint16_t (*low)[13], adcc_channel_t channel, uint16_t b,uint16_t c)
{   
    uint16_t lo = *(*(low+b)+c);    //pointer to location of lower limit
    uint16_t hi = *(*(high+b)+c);   //pointer to location of upper limit
    
    ADCC_StartConversion(channel);
    
    while(!ADCC_IsConversionDone());
    
    result = ADCC_GetConversionResult();
    
    result = result*4;  //reports result in mV. Step value is 1/4 mV value
    
    if(result >= lo && result <= hi)
        return green;
    
    else
        return red;
}

void Board_Init() //function to set up LEDs to match number of voltage sources
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
        Board_Init();           //Sets the LEDs for the board being tested
        
        LED1_LAT = LED_Value(Board_High,Board_Low,AND1,board,0);
        LED2_LAT = LED_Value(Board_High,Board_Low,AND0,board,1);
        LED3_LAT = LED_Value(Board_High,Board_Low,ANC3,board,2);
        LED4_LAT = LED_Value(Board_High,Board_Low,ANC2,board,3);
        LED5_LAT = LED_Value(Board_High,Board_Low,ANC1,board,4);
        LED6_LAT = LED_Value(Board_High,Board_Low,ANC0,board,5);
        LED7_LAT = LED_Value(Board_High,Board_Low,ANA6,board,6);
        LED8_LAT = LED_Value(Board_High,Board_Low,ANA7,board,7);
        LED9_LAT = LED_Value(Board_High,Board_Low,ANE2,board,8);
        LED10_LAT = LED_Value(Board_High,Board_Low,ANE1,board,9);
        LED11_LAT = LED_Value(Board_High,Board_Low,ANE0,board,10);
        LED12_LAT = LED_Value(Board_High,Board_Low,ANA5,board,11);
        LED13_LAT = LED_Value(Board_High,Board_Low,ANA4,board,12);
   }
}
/**
 End of File
*/
