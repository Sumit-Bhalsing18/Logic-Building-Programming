/*
Enter first number
10
Enter Second number
11
Result is 10
*/
#include<stdio.h>
int main()
{
    
  int No1 =0 ,No2 =0,Ans =0;
  
  printf("Enter first number\n");
  scanf("%d",&No1);

  printf("Enter Second number\n");
  scanf("%d",&No2);

  Ans = No1 & No2 ; //ekdach & ha bitwise & ahe kivha binary &  jar 2 && asel tar logical and
  printf("Result is %d\n",Ans);
  return 0;
}