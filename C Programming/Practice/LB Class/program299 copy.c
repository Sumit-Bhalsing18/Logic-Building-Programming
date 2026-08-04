
#include<stdio.h>

void strrevX(char *str)
{
  char *start =NULL;  //start pointer
  char *end = NULL;
  char temp =NULL;
 

  while(start < end)
  {
   temp = *start;
   *start = *end;
   *end = temp;

   start++;
   end --;
  }
}
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string ");
    scanf("%[^'\n']s",Arr);
    
    strrevX(Arr);

    printf("Updated string : %s",)

    return 0;
}