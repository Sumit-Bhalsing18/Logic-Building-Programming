#include<stdio.h>
//4
// 4 + 3 + 2 + 1= 10
int Summation(int iNo)
{
    int iSum =0;
    
    while( iNo != 0) 
    {
        iSum = iSum + iNo;
        iNo--;
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
