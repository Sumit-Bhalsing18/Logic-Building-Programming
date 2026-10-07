//write a program which accept one number from user and toggle the 7th bit of that number ,return modified number
/*
Enter number:
137
modified number is 201

Enter number:
2                   // 2 + 64(7 POSITION)
modified number is 66
*/
#include<stdio.h>
typedef unsigned int UNIT;

UNIT CheckBit(UNIT iNo)
{
    UNIT iMask = (1<<6) ;            
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
/*
1) Toggle म्हणजे काय?
Bit 0 असेल → 1 करा.
Bit 1 असेल → 0 करा. म्हणजे उलट करणे. यासाठी आपण XOR (^) वापरतो.

2)0 ^ 0 = 0
  0 ^ 1 = 1
  1 ^ 0 = 1
  1 ^ 1 = 0
लक्षात ठेव:
same asel tar 0
different asel tar 1

3)
137 चे binary:

10001001

Mask (1<<6):

01000000

XOR: -> same asel tar 0    ex: 0 ^ 0 = 0
   different asel tar 1    ex: 1 ^ 0 = 1

10001001
01000000
---------
11001001

11001001 =

128 + 64 + 8 + 1 = 201
*/