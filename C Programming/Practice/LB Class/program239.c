#include<stdio.h>
#include<string.h> // hya header madhun yenar strlen(str)

int main()
{
    char *str = "Ganesh";  
    int iCount = 0;

    printf("Length of string is :%d\n",strlen(str));

    while(*str != '\0')
    {
      iCount++;
      str++;
    }
    printf("Length of string is %d\n",iCount);
   
    return 0;
}