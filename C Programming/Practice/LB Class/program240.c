#include<stdio.h>

int main()
{
  char Arr[50] = {'\0'};
  printf("Enter string :\n");
  scanf("%s",Arr); //ISSUE AHE ITHE  //& chi garaj nahi karan Arr namjech Address asto 
  //jevha jay ganesh input deto tevha fakt jay print hoil karan scanf fakt space payrnt display karto 
  printf("Entered string is : %s\n",Arr);
  return 0;
}