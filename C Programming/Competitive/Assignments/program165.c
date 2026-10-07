//write a program which accept a 2 string from user and concat second string after first string (implement strcat() function )
/*
Enter 1st string :Marvellous Infosystem
Enter 2nd string :Logic building
 Marvellous Infosystem Logic building
 */
#include<stdio.h>

void StrCon(char *src , char *dest )  
{
    //first string sathi traversal
    while(*src != '\0')
    {
       src++;
    }
     // Add one space
    *src = ' ';
    src++;

     //second string sathi traversal
    while(*dest != '\0')
    {
      *src = *dest;
      src++;
      dest++;
    }
    *src = '\0';
}
int main()
{
    char Arr[30] ;
    char Brr[30] ;
  

    printf("Enter 1st string :");
    scanf("%[^'\n']s" ,Arr);

    printf("Enter 2nd string :");
    scanf(" %[^'\n']s" ,Brr);

    StrCon(Arr ,Brr );

    printf(" %s\n" , Arr); 

    return 0;
}
