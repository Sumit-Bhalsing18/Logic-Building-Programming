#include<stdio.h>
//4
// 1 + 2 + 3+ 4= 10

// 7
// 1 + 2 + 3+ 4 + 5 + 6 + 7 = 28


int Summation(int iNo)
{
    int iSum =0;
    int i = 0;

    for(i = 1; i <= iNo ; i++)
    {
        iSum = iSum + i;
    }
    return iSum;
}
int main()
{
    int iValue = 0 , iRet = 0;
    printf("Enter frequency:\n");
    scanf("%d",&iValue);
    
    iRet = Summation(iValue);

    printf("Summation is :%d \n", iRet);
  
  
    return 0;
}
