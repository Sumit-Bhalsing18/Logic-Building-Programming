//write a program which accept one number from user and off the 7th bit and 10 th bit of that number if it is on ,returned modifief number
/*
Enter number:
577
modified number is 1
*/
#include<stdio.h>
typedef unsigned int UNIT;

UNIT CheckBit(UNIT iNo)
{
    UNIT iMask = (1<<6) | (1<<9);            
    UNIT iAns = iNo & (~iMask);
    return iAns;
};
int main()
{
    UNIT uValue = 0 , iRet = 0;
    printf("Enter number:\n");
    scanf("%u", &uValue);
    
    iRet = CheckBit(uValue);
    printf("modified number is %u" , iRet);
    return 0;
}
