//write a program which accept range from user and display all numbers in between that range in reverse order
//Enter starting point :23
//Enter Ending point :35
//35      34      33      32      31      30      29      28      27      26      25      24      23
//Enter starting point :-10
//Enter Ending point :2
//2       1       0       -1      -2      -3      -4      -5      -6      -7      -8      -9      -10
//Enter starting point :90
//Enter Ending point :18
//Invalid input
//time complexity = O(n)    
#include<stdio.h>
int RangeDisplayRev(int iStart,int iEnd)
{
    int iCnt =0 ;

   if( iStart > iEnd)
   {
    printf("Invalid input");
    return 0;
   }
    for(iCnt = iEnd; iCnt >= iStart ;iCnt--)
    {
        printf("%d\t",iCnt);
    }
  
}
int main()
{
    int iValue1 =0 ,iValue2 =0 ;
    printf("Enter starting point :");
    scanf("%d",&iValue1);
    printf("Enter Ending point :");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);

    return 0;

}