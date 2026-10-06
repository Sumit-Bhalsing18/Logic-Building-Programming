/*Accept character from user if it is capital then display all the characters from the input characters till Z. 
if input character is small then print all the characters in reverse order till a ,In other cases  return directly */
/* 
Enter character :
Q
Q       R       S       T       U       V       W       X       Y       Z
Enter character :
m
m       l       k       j       i       h       g       f       e       d       c       b       a
Enter character :
8

*/
#include<stdio.h>
void Display(char ch)
{
  char c ;
  if(ch >= 'A' && ch <= 'Z')
  {
    
    for(c = ch ; c <= 'Z' ;c++)
    {
      printf("%c\t" , c);
    }
  }
  else if(ch >= 'a' && ch <= 'z')
  {
  
    for(c = ch ; c >= 'a' ;c--)
    {
      printf("%c\t" , c);
    }
  }
  else
  {
    return ;
  }

}
int main()
{
    char cValue = '\0';
    printf("Enter character :\n");
    scanf("%c",&cValue);
    Display(cValue);

    return 0;
}