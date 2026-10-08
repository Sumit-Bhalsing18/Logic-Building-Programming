/*complete below code snippet it contains only service provider function*/
/*write entry point function to call below helper function separately*/

/*
write a program which accept one number and position from user and 
 ON that Bit. and return modified number
*/

/*
Enter one number and positin :10 3
Modified number is 14

Enter one number and positin :10 1
Modified number is 11
*/
#include<stdio.h>

typedef unsigned int UNIT; 

UNIT CheckBit(UNIT iNo1 ,int iNo2)
{
    UNIT iMask = (1 << (iNo2 - 1));
    UNIT Ans = iNo1 | iMask;       

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
