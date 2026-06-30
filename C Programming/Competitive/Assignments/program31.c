//write a program which accept number from user and display below pattern
//input : 5
//output : * * * * * # # # # #
//Enter the number:-5
//*       *       *       *       *       #       #       #       #       #
//time complexity : O(n)
#include<stdio.h>
void Display(int iNo)
{
  int iCnt =0;
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  for(iCnt =1;iCnt <= iNo;iCnt++)
  {
    printf("%c\t",'*');
  }
  for(iCnt =1;iCnt <= iNo;iCnt++)
  {
    printf("%c\t",'#');
  }
}
int main()
{
    int iValue =0;
    printf("Enter the number:");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}

//O(n²) only when one loop runs inside another loop (nested loops).
/*Here the loops are one after another (sequential), not nested.
If n = 5:
First loop executes 5 times.
Second loop executes 5 times.
Total operations = 5 + 5 = 10 = 2n
So, T(n)=n+n =2n
ignoring constant   O(2n) = O(n)
*/