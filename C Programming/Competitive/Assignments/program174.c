//write a program which accept one number from user and toggle the 7th bit and 10th bit of that number ,return modified number
/*
Enter number:
137
modified number is 713

Enter number:
2
modified number is 578
*/
#include<stdio.h>
typedef unsigned int UNIT;

UNIT CheckBit(UNIT iNo)
{
    UNIT iMask = (1<<6) | (1<<9) ;            
    UNIT iAns = iNo ^ iMask;
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
