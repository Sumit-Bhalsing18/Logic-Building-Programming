#include<stdio.h>

void Display(int *iPtr)
{
   printf("\nvalue of iPtr %d\n",iPtr);
}

int main()
{
  
  int Arr[5]={10,20,30,40,50};

  printf("\nBase address of Arr :%d",Arr);

  Display(Arr);
  return 0;
}