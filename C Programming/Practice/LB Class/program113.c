#include<stdio.h>

void Display(int Arr[]) 
{
  int iCnt=0;
  for(iCnt =0;iCnt<8;iCnt++) 
  {
    printf("%d\n",Arr[iCnt]);//segmentation fault 6 7 8 la default manje kuthli pn value yeu rahilet
  }
}

int main()
{
  
  int Brr[4]={10,20,30,40};

  Display(Brr);
  return 0;
}