#include<stdio.h>

void Display(char str[]) //*str is pointer 
{
  printf("%c\n",str[0]);
  printf("%c\n",str[1]);
  printf("%c\n",str[2]);  
}
int main()
{
  char Arr[50] = {'\0'};
  printf("Enter string :\n");
  scanf("%[^'\n']s",Arr);     //ha %[^'\n']s issue solve karto 

  Display(Arr);  //1 ch jat ahe karan last la \0 ahe he mahit ahe mhnun garaj nahi kiti elements pathvayche ahet tee
  return 0;
}