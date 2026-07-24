#include<stdio.h>

void Display(int *iPtr)
{
    printf("%d\n",*iPtr);
    
    iPtr++; //4 ne pudhe sarkarnar karan pointer integer pointer ahe

     printf("%d\n",*iPtr);

    iPtr++; //4 ne pudhe sarkarnar karan pointer integer pointer ahe

     printf("%d\n",*iPtr);
}

int main()
{
  
  int Arr[5]={10,20,30,40,50};

  Display(Arr);
  return 0;
}