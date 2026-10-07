//write a program check whether 7th and 15th and 21st 28 th bit is on or off
/*Enter Number
270565504
7th and 15th and 21st 28th bit is ON
*/
#include<stdio.h>
# define TRUE 1
#define FALSE 0

typedef int BOOL ;
typedef unsigned int UNIT;
BOOL CheckBit(UNIT iNo)
{
   UNIT iMask = (1 << 7) | (1 << 15) | (1 << 21) | (1 << 28);
   return ((iNo & iMask) == iMask) != 0 ;
}
int main()
{
    UNIT iValue = 0;
    BOOL iRet = 0;
    printf("Enter Number\n");
    scanf("%u" ,&iValue);
    
    iRet = CheckBit(iValue);

    if(iRet == TRUE)
    {
        printf("7th and 15th and 21st 28th bit is ON");
    }
    else
    {
         printf("7th and 15th and 21st 28th bit is OFF");
    }
    return 0;
} 
/*
जर testing साठी input विचारला तर:

(1 << 2) + (1 << 5) + (1 << 9)
= 4 + 32 + 512
= 548
*/