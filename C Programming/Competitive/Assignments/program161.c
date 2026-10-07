//write a program accept a string from user and copy the contents of that string into another string
/*OUTPUT : Marvellous Multi OS
*/
#include<stdio.h>

void StrCopy(char *src , char *dest) //src- Source String ,  dest- destination String 
{
    //filter
    while(*src != '\0')
    {
        *dest = *src;  //destination madhe copy kel source string 
        src++;
        dest++;
    }
    *dest = '\0';    //deyla lagto ahe karan src++ houn \0 kade jato loop false hot ani nantar destination ch termination string ch rahun jat mhnun baher kel termination 
}
int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30] ;

    StrCopy(Arr ,Brr);

    printf("%s" , Brr);  //Marvellous Multi OS

    return 0;
}
/*
Arr
M a r v e l l o u s
^ 

Brr

_ _ _ _ _ _ _ _ _
^
पहिली Iteration
*dest = *src;
Arr

M a r
^

Brr

M _ _
^

src++;
dest++;
*/