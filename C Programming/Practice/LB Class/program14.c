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
   
    printf("Enter number to check whether it is even or odd  : ");
    scanf("%d",&iValue);

    iRet=CheckEvenOdd(iValue);

    if(iRet==0)
    {
        printf("%d is even\n",iValue);
    }
    else
    {
        printf("%d is odd\n",iValue);
    }
       
    return 0;
}