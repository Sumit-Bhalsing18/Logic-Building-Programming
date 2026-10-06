//write a program check whether first and last bit is on or off, first bit means bit number 1 and last bit means bit number 32
/*
Enter number :
2147483649
First and last bit is ON
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned int UNIT ;
BOOL CheckBit(UNIT iNo)
{
    UNIT iMask = (1 << 0) | (1 << 31);
    return ((iNo & iMask) == iMask) != 0;
}
int main()
{
    UNIT iValue = 0;
    BOOL iRet = 0;
    printf("Enter number :\n");
    scanf("%u", &iValue);

    iRet =CheckBit(iValue);

    if(iRet == TRUE)
    {
        printf("First and last bit is ON");
    }
    else
    {
        printf("First and last bit is OFF");
    }
    return 0;
}
