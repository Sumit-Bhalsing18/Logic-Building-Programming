//write a program which accept a string from user and copy the contents of that string into another string (Implement strncpy() function )


//NOTE : if third parameter is greater than the size of source string then copy whole string into destination 
/*
INPUT : "Marvellous Multi OS"
sieze : 10
output : Marvellous*/
#include<stdio.h>

void StrNCopy(char *src , char *dest , int iSize)  
{
    //filter
    while((*src != '\0') && (iSize != 0))
    {
        *dest = *src; 
        src++;
        dest++;
        iSize--;
    }
    *dest = '\0';     
}
int main()
{
    char Arr[30] ;
    char Brr[30] ;
    int iValue = 10;

    printf("Enter string :");
    scanf("%[^'\n']s" , Arr);

    printf("Enter size of character you want from string: ");
    scanf(" %d" ,&iValue );

    StrNCopy(Arr ,Brr , iValue);

    printf(" %s" , Brr); 

    return 0;
}
