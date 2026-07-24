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
  int iLength =4;

  int Brr[iLength]; //Error array legth should be constatnt 

  Brr[0]=10;
  Brr[1]=20;
  Brr[2]=30;
  Brr[3]=40;

  Display(Brr,iLength); //call by address and call by value 2 dile 
  return 0;
}