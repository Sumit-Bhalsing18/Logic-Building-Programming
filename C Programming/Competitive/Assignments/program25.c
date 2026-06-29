//write a program which accept N from user and print first 5 multiples of N
//Enter the number: 4
//4       8       16      32      64
//odd numbers are number which is not eaxctly divide by 2
//time complexity O(n)
#include<stdio.h>
void MultipleDisplay(int iNo)
{
    int iCnt =0 ;
   
    for(iCnt = 1; iCnt <=5 ; iCnt++)
    {
      printf("%d\t", iNo); 
      iNo = iNo *2;
    }
    
      
}
int main()
{
    int iValue =0;
    printf("Enter the number: ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);
    return 0;
}