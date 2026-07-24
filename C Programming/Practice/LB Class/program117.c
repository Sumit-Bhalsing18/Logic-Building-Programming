#include<stdio.h>

void Display(int Arr[],int iSize) 
{
  int iCnt=0;
  for(iCnt =0;iCnt<iSize;iCnt++) 
  {
    printf("%d\n",Arr[iCnt]);
  }
}

int main()
{
  int iLength =;

  int Brr[iLength]; //Error array legth should be constatnt 
  int iCnt =0;

  printf("Enter input \n");
  
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
     scanf("%d",&Brr[iCnt]);
     
  }
  

  Display(Brr,iLength); //call by address and call by value 2 dile 
  return 0;
}