
//write a program which accept range from user and return addition of all numbers in between that range (range should contains positive numbers only)
//Enter Starting point :23
//Enter Ending point :30
//addition of all numbers in between that range is :212
//Enter Starting point :-10
//Enter Ending point :2
//INVALID INPUT
#include<stdio.h>
int RangeSum(int iStart,int iEnd)
{
    int iCnt =0 , iAdd =0;
    if(iStart <0 || iEnd < 0 || iStart > iEnd)
    {
        return -1;        //this is used to stop not go to another line if we not write then next program line also print on console 
    }
    for(iCnt = iStart;iCnt <=iEnd;iCnt++)
    {
       iAdd = iAdd + iCnt;
    }
    return iAdd;
}
int main()
{
    int iValue1 =0 ,iValue2 =0 ,iRet =0;
    printf("Enter Starting point :");
    scanf("%d",&iValue1);
    printf("Enter Ending point :");
    scanf("%d",&iValue2);
    iRet = RangeSum(iValue1,iValue2);
   
    if(iRet == -1)
    {
        printf("INVALID INPUT");
    }
    else
    {
        printf("addition of all numbers in between that range is :%d",iRet);
    }

    return 0;
}