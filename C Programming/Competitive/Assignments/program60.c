//write a program which accept number from user and count frequency of such a digits which are less than 6
//Enter the number :2395
//frequency of digit less than six : 3
//Enter the number :96672
//frequency of digit less than six : 1
#include<stdio.h>
int CountLessthan6(int iNo)
{
    int iDigit =0 ,iCount =0;
    for(  ; iNo !=0 ;iNo = iNo /10)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
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
    iRet =CountLessthan6(iValue);
    printf("frequency of digit less than six : %d ", iRet);
    return 0;

}