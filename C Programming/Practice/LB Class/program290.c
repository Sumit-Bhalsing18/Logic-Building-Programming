//290 che adhiche c ani nantar che java kae 
#include<stdio.h>

void ReverseDisplay(char *str)
{
  printf("%s\n",str);
}
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string ");
    scanf("%[^'\n']s",Arr);
    
    ReverseDisplay(Arr);

    return 0;
}