#include<stdio.h>
#include<string.h>  //automatic yete inbuilt function astat hya madhe 
// strlen ha inbuilt function ahe toh \0 count karat nahi 
int main()
{
    char str[] = "jay Ganesh";   

    int iRet =0;
    iRet = strlen(str);  //function ahe inbuilt
    printf("Length of string is : %d\n",iRet); //10
    return 0;
}