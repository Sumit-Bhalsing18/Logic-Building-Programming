//Accept character from user and check whether it is digit or not
/*
Enter character :7
it is digit

Enter character :d
it is not digit

*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckDigit(char ch)
{
   if(ch >= '0' && ch <= '9')
   {
    return TRUE;
   }
   return FALSE;
}
int main()
{

    char cValue ='\0';
    BOOL bRet = FALSE;
    printf("Enter character :");
    scanf("%c",&cValue);
    
    bRet = CheckDigit(cValue);

    if(bRet == TRUE)
    {
        printf("it is digit");
    }
    else
    {
          printf("it is not digit");
    }
    return 0;
}