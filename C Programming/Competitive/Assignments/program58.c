//write a program which accept number from user and count frequency of 2 in it
//Enter the number :1018
//frequency of two in number is :0
//Enter the number :922432
//frequency of two in number is :3
#include<stdio.h>
int CountTwo(int iNo)
{
    int iDigit =0 ,iCount =0;
    for(  ; iNo !=0 ;iNo = iNo /10)
    {
        iDigit = iNo % 10;
        if(iDigit ==2)
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
    iRet =CountTwo(iValue);
    printf("frequency of two in number : %d ", iRet);
    return 0;

}