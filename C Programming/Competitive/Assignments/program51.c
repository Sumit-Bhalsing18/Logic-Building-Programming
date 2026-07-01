
//write a program whivh accept range from user and display all numbers in between that range
//Enter starting point : 23
//Enter Ending point :35
//23      24      25      26      27      28      29      30      31      32      33      34      35
////Enter starting point : -10
//Enter Ending point :2
//-10     -9      -8      -7      -6      -5      -4      -3      -2      -1      0       1       2
//time complexity = O(n)
#include<stdio.h>
void RangeDisplay(int iStart,int iEnd)
{
    int iCnt =0;
    for(iCnt = iStart;iCnt <=iEnd;iCnt++)
    {
        printf("%d\t",iCnt);
    }

}
int main()
{
    int iValue1 =0 ,iValue2 =0;
    printf("Enter Starting point :");
    scanf("%d",&iValue1);
    printf("Enter Ending point");
    scanf("%d",&iValue2);
    RangeDisplay(iValue1,iValue2);

    return 0;
}