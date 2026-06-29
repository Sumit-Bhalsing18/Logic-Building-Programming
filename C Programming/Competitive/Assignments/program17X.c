//write a program which accept number from user and display its factors in Decending order
//input : 12
//output : 6 4 3 2 1
#include<stdio.h>

int FactorsReverse(int iNo)
{
   int iCnt =0 ;
   
   for(iCnt =iNo/2; iCnt > 0; iCnt--)
   {
     if((iNo % iCnt )==0)
     {
        printf("%d\t",iCnt);
     }
   }
  
   
}
int main()
{
    int iValue =0;
   

    printf("Enter the number:");
    scanf("%d",&iValue);

    FactorsReverse(iValue);

    
    return 0;

}
