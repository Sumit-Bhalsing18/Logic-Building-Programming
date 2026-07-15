//Accept character from user and check whether it is small case or not
/*

*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckSmall(char ch)
{
   if(ch >= 'a' && ch <= 'z')
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
    
    bRet = CheckSmall(cValue);

    if(bRet == TRUE)
    {
        printf("it is small case character");
    }
    else
    {
          printf("it is not small case character");
    }
    return 0;
}