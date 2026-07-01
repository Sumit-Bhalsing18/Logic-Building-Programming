
//write a program which accept range from user and display all even numbers in between that range
//Enter Starting point :23
//Enter Ending point35
//24      26      28      30      32      34
//Enter Starting point :10
//Enter Ending point :18
//10      12      14      16      18
//time complexity = O(n)     (loop runs n times if condition is constant time -> O(1)  total n * O(1) = O(n)
#include<stdio.h>
void RangeDisplayEven(int iStart,int iEnd)
{
    int iCnt =0;
    for(iCnt = iStart;iCnt <=iEnd;iCnt++)
    {
        if((iCnt %2)==0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue1 =0 ,iValue2 =0;
    printf("Enter Starting point :");
    scanf("%d",&iValue1);
    printf("Enter Ending point");
    scanf("%d",&iValue2);
    RangeDisplayEven(iValue1,iValue2);

    return 0;
}