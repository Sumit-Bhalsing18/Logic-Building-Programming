
/*
write a program which accept one number from user and check whether 9th and 12th bit is on or off
*/
/*
Enter number  :2304
 9th and 12th bit is ON
*/
#define TRUE 1
#define FALSE 0
#include<stdio.h>

typedef int BOOL;
typedef unsigned int UNIT; 

BOOL CheckBit(UNIT iNo1 )
{
    int iMask = (1 << 8) | (1 << 11);   //jar or kele tar 1 jari 1 asla tari 1 yeto & sarkh nahiye 
  
    return ((iNo1 & iMask) == iMask);                    
}                           
                            
int main()
{
    UNIT uValue1 = 0 ;
    BOOL bRet = FALSE;

    printf("Enter number  :");
    scanf("%u",&uValue1);
    
    bRet =CheckBit(uValue1);
    
    if(bRet == TRUE)
    {
      printf(" 9th and 12th bit is ON");
    }
    else
    {
      printf(" 9th and 12th bit is OFF");
    }

    return 0;
}
