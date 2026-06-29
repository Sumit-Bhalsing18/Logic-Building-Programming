//write a program which accept N from user and print all odd numbers up to N
//Enter the number: 18
//1       3       5       7       9       11      13      15      17
//odd numbers are number which is not eaxctly divide by 2
#include<stdio.h>
//time complexity O(n)
void OddDisplay(int iNo)
{
    int iCnt =0;
   
    for(iCnt = 1; iCnt < iNo ;iCnt++)
    {
      if((iCnt % 2)!= 0)
      {
        printf("%d\t",iCnt);
      }
    }
      
}
int main()
{
    int iValue =0;
    printf("Enter the number: ");
    scanf("%d",&iValue);

    OddDisplay(iValue);
    return 0;
}