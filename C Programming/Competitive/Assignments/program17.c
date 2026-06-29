//write a program which accept number from user and display its factors
//input : 12
//output :144   
#include<stdio.h>

int Factors(int iNo)
{
   int iCnt =0 , iMul =1;
   
   for(iCnt =1; iCnt <=iNo/2; iCnt++)
   {
     if((iNo % iCnt )==0)
     {
       iMul = iMul *iCnt;
     }
    
   }
   return iMul;
  
   
}
int main()
{
    int iValue =0;
    int iRet =0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet =Factors(iValue);
    printf("summation of even factor is :%d",iRet);
    return 0;

}
