#include<stdio.h>

void strlenX(char *str) //user define function 
{
  *str = 'A';    //dusra kahi pn karu shakto kivha change karu sahkto hii risk ahe tyamule apla data change hoto
}
int main()
{
  char Arr[50] = {'\0'};
 
  printf("Enter string :\n");
  scanf("%[^'\n']s",Arr);     //ha %[^'\n']s issue solve karto 

  strlenX(Arr);  
  printf("String is : %s\n",Arr);
  return 0;
}