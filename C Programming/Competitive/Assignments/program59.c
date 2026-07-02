//write a program which accept number from user and count frequency of 4 in it
//Enter the number :2395
//frequency of four in number : 0
//Enter the number :922432
//frequency of four in number : 1
#include<stdio.h>
int CountFour(int iNo)
{
    int iDigit =0 ,iCount =0;
    for(  ; iNo !=0 ;iNo = iNo /10)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
           iCount++;
        }   
    }
    return  iCount++;
}
int main()
{
    int iValue =0 , iRet =0;
    printf("Enter the number :");
    scanf("%d",&iValue);
    iRet =CountFour(iValue);
    printf("frequency of four in number : %d ", iRet);
    return 0;

}