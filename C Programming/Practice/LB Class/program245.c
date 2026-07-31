#include<stdio.h>

void Display(char *str) //*str is pointer 
{
  printf("%c\n",*str);
  str++;
  printf("%c\n",*str);
  str++;
  printf("%c\n",*str);
  str++;
  

}
int main()
{
  char Arr[50] = {'\0'};
  printf("Enter string :\n");
  scanf("%[^'\n']s",Arr);    

  Display(Arr);  
  return 0;
}