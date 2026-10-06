//Accept character from user and display its ascii value in decimal octal and hexadecimal format
/*
Enter character :A
Deciaml :65
octal : 0101
Hexadecmal: 0X41
*/
#include<stdio.h>

void Display(char ch)
{
  printf("Deciaml :%d\n" , ch);
  printf("octal : 0%o  \n" , ch);
  printf("Hexadecmal: 0X%X\n" , ch);
}
int main()
{
  char cValue = '\0';
  printf("Enter character :");
  scanf("%c", &cValue);

  Display(cValue);
  return 0;
}