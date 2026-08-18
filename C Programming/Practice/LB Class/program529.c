#include<stdio.h>
//4
// 4 *3* 2* 1 = 24

typedef unsigned long int ULONG;

ULONG Factorial(int iNo)
{
    ULONG iMul =1;
    
    while( iNo != 0) 
    {
        iMul = iMul * iNo;
        iNo--;
    }
    return iMul;
}
int main()
{
    int iValue = 0 ;
    ULONG iRet = 0;;
    printf("Enter frequency:\n");
    scanf("%d",&iValue);
    
    iRet = Factorial(iValue);

    printf("Factorial is :%lu \n", iRet);
   
    return 0;
}
