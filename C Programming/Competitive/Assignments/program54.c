//write a program which accept range from user and return addition of all even numbers in between that range (Range should contains positive numbers only)
//Enter starting point :23
//Enter Ending point :30
//addition of all even numbers in between that range :108
//Enter starting point-10
//Enter Ending point2
//Invalid input
//Enter starting point90
//Enter Ending point18
//Invalid input
//time complexity = O(n)
#include<stdio.h>
int RangeSumEven(int iStart,int iEnd)
{
    int iCnt =0 , iSum =0;
    if(iStart <0 || iEnd < 0 || iStart > iEnd )
    {
        return -1;
    }
    for(iCnt = iStart; iCnt <= iEnd ;iCnt++)
    {
        if((iCnt % 2 )==0)
        {
            iSum = iSum + iCnt ;
        }
    }
    return iSum;
}
int main()
{
    int iValue1 =0 ,iValue2 =0 ,iRet =0;
    printf("Enter starting point :");
    scanf("%d",&iValue1);
    printf("Enter Ending point :");
    scanf("%d",&iValue2);

    iRet =RangeSumEven(iValue1,iValue2);

    if(iRet == -1)
    {
        printf("Invalid input");
    }
    else
    {
        printf("addition of all even numbers in between that range is : %d",iRet);
    }

}