//write a program which accept number from user and display its digit in reverse order
//Enter the number :2395            //Enter the number :239
//5                                 //9
//9                                 //3
//3                                 //2
//2  
#include<stdio.h>
int RangeDisplayRev(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iDigit =0;
    while(iNo !=0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo /10 ;
    }
  
}
int main()
{
    int iValue =0;
    printf("Enter the number :");
    scanf("%d",&iValue);
    
    RangeDisplayRev(iValue);
    return 0;

}