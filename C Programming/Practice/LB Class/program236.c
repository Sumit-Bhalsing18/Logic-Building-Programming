#include<stdio.h>

int main()
{
    char *str = "Ganesh";  //same as char str[] = "Ganesh"; //\0 disat nahi pn ahe 
    
    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;


    return 0;
}