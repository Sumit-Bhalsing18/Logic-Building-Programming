//write a program which accept one number from user and off the 7th bit of that number if it is on ,returned modifief number
/*
Enter number:
79
modified number is 15
*/
#include<stdio.h>
typedef unsigned int UNIT;

UNIT CheckBit(UNIT iNo)
{
    UNIT iMask = (1<<6);   //1 << 6  means the 7th bit from the right.                0 1 2 3 4 5 6 = total 7
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
/*
To OFF a bit, we use AND (&) with the complement (~) of the mask.

2)
Suppose the 7th bit is ON.

Number : 11101111
Mask   : 10000000
~Mask  : 01111111
-----------------
AND
11101111
01111111
---------
01101111

Only the 7th bit becomes 0.
*/

/* VERY IMPORTANT 
Easy rule to remember
1) Check a bit → & (AND)
2) OFF a bit → & with ~Mask
3) ON a bit → | (OR)
4) Toggle a bit → ^ (XOR)

*/