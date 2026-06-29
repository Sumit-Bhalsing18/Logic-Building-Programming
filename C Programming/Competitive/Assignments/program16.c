#include<stdio.h>

char DisplayConvert(int cValue)
{
    if(cValue>='a' && cValue<='z')
    {
      printf("%c ",cValue -32 );
    }
    else if(cValue>='A' && cValue<='Z')
    {
     printf("%c ",cValue +32 );
    }
}
int main()
{
    char cValue = '\0';
    printf("Enter character :");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    return 0; 
}