//write a program which accept a string from user and copy the small character of string into another string 
/*
Enter string :Marvellous muitl OS
 arvellous muitl
 */
#include<stdio.h>

void StrCpySmall(char *src , char *dest )  
{
    //filter
    while(*src != '\0')
    {
       if(*src >= 'a' && *src <= 'z' || *src == ' ')
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

    StrCpySmall(Arr ,Brr );

    printf(" %s\n" , Brr); 

    return 0;
}
