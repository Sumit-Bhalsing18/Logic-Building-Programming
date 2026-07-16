#include<stdio.h>
#include<stdbool.h> //to add boolean datatype which is not in see thatswhy we add header file

bool CheckEvenOdd(int iNo)//reusable  banvaycha
{
    int iRemainder=0;

    iRemainder =iNo%2;    

    if (iRemainder==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue =0;
    bool bRet =false;//false internally is o
   
    printf("Enter number to check whether it is even or odd  : ");
    scanf("%d",&iValue);

    bRet=CheckEvenOdd(iValue);

    if(bRet==true)
    {
        printf("%d is even\n",iValue);
    }
    else
    {
        printf("%d is odd\n",iValue);
    }
       
    return 0;
}