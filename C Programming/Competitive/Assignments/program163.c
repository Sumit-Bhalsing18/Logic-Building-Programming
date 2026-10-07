//write a program which accept a string from user and copy the capital character of string into another string 
/*
Enter string :Marvellous Multi OS
 MMOS
 */
#include<stdio.h>

void StrCpyCapital(char *src , char *dest )  
{
    //filter
    while(*src != '\0')
    {
       if(*src >= 'A' && *src <= 'Z')
       {
         *dest = *src;
         dest++;
       }
       src++; 
    }
    *dest = '\0';     
}
int main()
{
    char Arr[30] ;
    char Brr[30] ;

    printf("Enter string :");
    scanf("%[^'\n']s" , Arr);

    StrCpyCapital(Arr ,Brr );

    printf(" %s" , Brr); 

    return 0;
}
