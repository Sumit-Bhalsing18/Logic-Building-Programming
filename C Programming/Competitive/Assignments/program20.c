//write a program which accept number from user and return difference between summation of all its  factors and non factors 
//input : 12
//output :-34  (16-50)
//input : 10
//output :-29      (8- 37)
#include<stdio.h>

int factDiif(int iNo)
{
   int iCnt =0 ,iSum =0 ,iSum1 =0;
   
   for(iCnt =1; iCnt < iNo; iCnt++)
   {
     if((iNo % iCnt )==0)
     {
      iSum = iSum +iCnt;
     }
     else
     {
      iSum1 = iSum1 +iCnt;
     }
   }
   return iSum-iSum1;
  
   
}
int main()
{
    int iValue =0;
    int iRet =0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet=factDiif(iValue);
   printf("%d",iRet);

    return 0;

}
