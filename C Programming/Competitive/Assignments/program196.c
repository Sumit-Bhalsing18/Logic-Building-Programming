//Write generic program to multiplay two numbers

#include<stdio.h>

int Multiplay(int iNo1,int iNo2)
{
   int Ans = 0;
   Ans = iNo1 * iNo2;
   return Ans;
}
int main()
{
    int iNo1 = 0 , iNo2 = 0 , iRet = 0;

    printf("Enter two numbers");
    scanf("%d %d",&iNo1,&iNo2);

    iRet =Multiplay(iNo1,iNo2);
    printf("Multiplication of two number is : %d",iRet);

    return 0;
}