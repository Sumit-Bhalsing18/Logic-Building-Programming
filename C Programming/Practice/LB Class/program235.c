#include<stdio.h>
#include<string.h>  //inbuilt function use karayche asle ki hi header file use karayla lagte 

int main()
{
    char str[] = "jay Ganesh";   

    int iRet =0;
    iRet = strlen(str);  //strlen function ahe  \0 la count karat nahi
    printf("Length of string is : %d\n",iRet);//10

    iRet = sizeof(str); //operator
    printf("size of string is : %d\n",iRet); //11
    return 0;
}