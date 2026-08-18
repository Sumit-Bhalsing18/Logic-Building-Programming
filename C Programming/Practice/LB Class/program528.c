#include<stdio.h>
//4
// 4 *3* 2* 1 = 24

unsigned long int Factorial(int iNo)
{
    unsigned long int iMul =1;
    
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
    unsigned long int iRet = 0;;
    printf("Enter frequency:\n");
    scanf("%d",&iValue);
    
    iRet = Factorial(iValue);

    printf("Factorial is :%lu \n", iRet);
  
  
    return 0;
}
