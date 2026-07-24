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

  int Brr[iLength]={10,20,30,40}; //Error array legth should be constatnt 

  Display(Brr,iLength); //call by address and call by value 2 dile 
  return 0;
}