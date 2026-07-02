//write a program which accept number from user and check whether it contains 0 in it or not
//Enter the number :209
//it contains zero
//Enter the number :2395
//there is no zero
#include<stdio.h>
int CheckZero(int iNo)
{
    int iDigit =0;
    for(  ; iNo !=0 ;iNo = iNo /10)
    {
        iDigit = iNo % 10;
        if(iDigit ==0)
        {
            return -1;
        }
        
    }
  
}
int main()
{
    int iValue =0 , iRet =0;
    printf("Enter the number :");
    scanf("%d",&iValue);
    
    iRet =CheckZero(iValue);
    if(iRet == -1)
    {
      printf("it contains zero");  
    }
    else
    {
      printf("there is no zero"); 
    }
    return 0;

}