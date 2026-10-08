
/*
Enter one number and positin :10 3                         1010
Modified number is 14                              ^       0100
*/                        //                               1110
#include<stdio.h>

typedef unsigned int UNIT; 

UNIT CheckBit(UNIT iNo1 ,int iPos)
{
    UNIT iMask = (1 << (iPos - 1));    //0 pasn start n karta 1 pasn kel mhnun -1 kel
    UNIT Ans = iNo1 ^ iMask;       

    return Ans;  //return (iNo1 & iMask)
        
}
int main()
{
    UNIT uValue = 0 ,  uRet = 0 ;
    int  iValue = 0;


    printf("Enter one number and positin :");
    scanf("%u %d",&uValue,&iValue);
    
    uRet = CheckBit(uValue,iValue);

    printf("Modified number is %u",uRet);

    return 0;
}
