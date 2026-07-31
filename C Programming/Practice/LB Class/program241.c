#include<stdio.h>


int main()
{
  char Arr[50] = {'\0'};
  printf("Enter string :\n");
          //negate 
  scanf("%[^'\n']s",Arr);     //ha %[^'\n']s  (special scanf tyalach negate mhntat ha ulta kam karto jari space ala hyala kahi farak padat nahi to string last payrnt print karto ) issue solve karto 
                              //direct \0 la thambto
  printf("Entered string is : %s\n",Arr);
  return 0;
}