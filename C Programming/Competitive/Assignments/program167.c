//write a program check whether 5th and 8th bit is on or off
/*
5th sathi 32 + 8th sathi 2 raise to 8  = 256
Enter Number
288
5th and 8th bit is ON
*/
#include<stdio.h>
# define TRUE 1
#define FALSE 0

typedef int BOOL ;
typedef unsigned int UNIT;
BOOL CheckBit(UNIT iNo)
{
   UNIT iMask1 = 0X20;
   UNIT iMask2 = 0X100;
   UNIT iAns1 = 0 , iAns2 = 0;

   iAns1 = iNo & iMask1 ;
   iAns2 = iNo & iMask2;
   if(iAns1 == iMask1 && iAns2 == iMask2)
   {
    return 1;
   }
   else
   {
    return 0;
   }
}
int main()
{
    UNIT iValue = 0;
    BOOL iRet = 0;
    printf("Enter Number\n");
    scanf("%lu" ,&iValue);
    
    iRet = CheckBit(iValue);

    if(iRet == TRUE)
    {
        printf("5th and 8th bit is ON");
    }
    else
    {
         printf("5th and 8th bit is OFF");
    }
    return 0;
} 