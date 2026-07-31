#include<stdio.h>


int main()
{
    char str[] = { 'J','a','y','\0','g','a','n','e','s','h','\0'}; //(/0 lihayla lagto nahitar ithe automatic yet nahi garbage value yete data sobath )

    printf("%s\n",str); //%s ha format specifier first \0 payrnt che character display karto
    return 0;
}