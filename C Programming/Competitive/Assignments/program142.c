//Accept character from user and check whether it is capital or not
/*
Enter character :F
TRUE

Enter character :f
FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckCapital(char ch)
{
   if(ch >= 'A' && ch <= 'Z')
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
    
    bRet = CheckCapital(cValue);

    if(bRet == TRUE)
    {
        printf("TRUE");
    }
    else
    {
          printf("FALSE");
    }
    return 0;
}