//290 che adhiche c ani nantar che java kae 
//time complexity 2n
#include<stdio.h>

void strrevX(char *str)
{
  char *start =NULL;  //start pointer
  char *end = NULL;
  
  start = str;  //100 de address de karan jar h adhich jar ala tar titkach print hoil 

  while(*str != '\0')
  {
    str++;
  }
  str--;
  while(start <= str)
  {
    printf("%s\n",str);
    str--;
  }
  printf("\n");

}
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string ");
    scanf("%[^'\n']s",Arr);
    
    strrevX(Arr);

    return 0;
}