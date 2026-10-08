
/*
write a program which accept one number from user and toggle contents of first and last 
nibble of that number return modified number
*/

/*
Enter one number :2
Modified number is 4026531853

Enter one number :10
Modified number is 4026531845
*/
#include<stdio.h>

typedef unsigned int UNIT; 

UNIT CheckBit(UNIT iNo1 )
{
    UNIT iMask = 0XF000000F; 
    UNIT Ans = iNo1 ^ iMask;       

    return Ans;  //return (iNo1 & iMask)
        
}
int main()
{
    UNIT uValue = 0 ,  uRet = 0 ;


    printf("Enter one number :");
    scanf("%u",&uValue);
    
    uRet = CheckBit(uValue);

    printf("Modified number is %u",uRet);

    return 0;
}
/*
1)First आणि Last nibble म्हणजे काय?
First nibble:

00000000 00000000 00000000 1111
                           ↑↑↑↑

Last nibble:

11110000 00000000 00000000 0000
↑↑↑↑

दोन्ही nibble toggle करण्यासाठी mask:

11110000 00000000 00000000 1111

2)उदा. जर input:

10

तर 32-bit मध्ये:

10 = 00000000 00000000 00000000 00001010

Mask:

    11110000 00000000 00000000 00001111           //first nibble and last nibble toggle

XOR:                                           //same asel tar 0 different asel tar 1

    11110000 00000000 00000000 00000101

याची decimal value:

4026531845

म्हणून:

Enter one number : 10
Modified number is 4026531845
*/