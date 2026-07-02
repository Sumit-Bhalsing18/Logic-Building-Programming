//write a program which accept number from user and check whether it contains 0 in it or not
//Enter the number :2395
//there is no zero
//Enter the number :40057
//it contains zero
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckZero(int iNo)
{
    int iDigit =0;
    for(  ; iNo !=0 ;iNo = iNo /10)
    {
      iDigit = iNo % 10;
      if(iDigit ==0)
      {
        return TRUE;
      }    
    } 
}
int main()
{
    int iValue =0 ;
    BOOL bRet = FALSE ;
    printf("Enter the number :");
    scanf("%d",&iValue);
    
    bRet =RangeDisplayRev(iValue);
    if(bRet == TRUE)
    {
      printf("it contains zero");  
    }
    else
    {
      printf("there is no zero"); 
    }
    return 0;

}