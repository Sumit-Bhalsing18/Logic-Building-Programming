//write a program which accept number from user and return summation of all its non factors 
//input : 12
//output :50
//input : 6
//output :9      non factors are 4 ani 5 tyachi addition 9
#include<stdio.h>

int NonFactSum(int iNo)
{
   int iCnt =0 ,iSum =0;
   
   for(iCnt =1; iCnt <= iNo; iCnt++)
   {
     if((iNo % iCnt )!=0)
     {
      iSum = iSum +iCnt;
     }
   }
   return iSum;
  
   
}
int main()
{
    int iValue =0;
    int iRet =0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet=NonFactSum(iValue);
   printf("%d",iRet);

    return 0;

}
