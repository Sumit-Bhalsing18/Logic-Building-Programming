//write a program which accept number from user and display its non factors 
//input : 12
//output : 5  7 8 9 10 11
#include<stdio.h>

int NonFactors(int iNo)
{
   int iCnt =0 ;
   
   for(iCnt =1; iCnt <= iNo; iCnt++)
   {
     if((iNo % iCnt )!=0)
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

    NonFactors(iValue);

    
    return 0;

}
