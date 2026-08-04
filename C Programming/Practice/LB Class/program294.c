//290 che adhiche c ani nantar che java kae 
//time complexity 2n
#include<stdio.h>

void ReverseDisplay(char *str)
{
  char *start =NULL;  //start pointer

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
    
    ReverseDisplay(Arr);

    return 0;
}