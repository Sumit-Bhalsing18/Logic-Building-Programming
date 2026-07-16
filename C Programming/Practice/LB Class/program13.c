#include<stdio.h>
int CheckEvenOdd(int iNo)//reusable  banvaycha
{
    int iRemainder=0;

    iRemainder =iNo%2;    

    return iRemainder;  
}
int main()
{
    int iValue =0;
    int iRet =0;
   
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=CheckEvenOdd(iValue);

    if(iRet==0)
    {
        Printf("Number is even\n");
    }
    else
    {
        Printf("Number is odd\n");
    }
       
    return 0;
}