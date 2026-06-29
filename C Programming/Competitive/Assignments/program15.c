#include<stdio.h>

typedef int BOOL;
# define TRUE 1
# define FALSE 0

BOOL CheckVowel(char iNo)
{
    
    if(iNo == 'a' || iNo == 'e' || iNo == 'i' || iNo == 'o' || iNo == 'u' || 
       iNo == 'A' || iNo == 'E' || iNo == 'I' || iNo == 'O' || iNo == 'U' )
    {
        return TRUE;
    }
    else
    {
        return FALSE; 
    }
}
int main()
{
    char cValue ='\0';
    BOOL bRet = FALSE;

    printf("Enter character \n");
    scanf("%c",&cValue);

    bRet =CheckVowel(cValue);

    if(bRet==TRUE)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is not vowel"); 
    }
    return 0;
}