#include<stdio.h>
//Enter Number:
//571
//Summation is 35
int Summation(int iNo)
{
     int iDigit = 0;  
     static int iSum = 1;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum * iDigit;
     
        Summation(iNo / 10);
    }
    return iSum ;
}
int main()
{
    int iValue = 0 ;
    int iRet = 0;;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    
    iRet = Summation(iValue);
    printf("Summation is %d\n", iRet);
    return 0;
}
