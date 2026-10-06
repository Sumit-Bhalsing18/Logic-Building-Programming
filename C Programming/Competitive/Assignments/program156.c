//write a program which accept string from user and one character from user and check whether that character is present in string or not
/*
Enter string :sumit
Enter one chracter:m
character is present in string

Enter string :sumit
Enter one chracter:o
character is not present in string
*/
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL CharPresent(char *str , char ch)
{
  
  while( *str != '\0')
  {
    if(*str == ch)
    {
      return 1;
    }
    str++;
  }
  return 0;
}
int main()
{
  char Arr[20] ;
  BOOL bRet = FALSE;
  char cValue = '\0';

  printf("Enter string :");
  scanf("%[^'\n']s",Arr); ////marvellous\n he fakt marvellous read kart \n tasach rahto mg oushchya %c madhe \n jato mhnun te value ghet nahi space dila ki \n nighun jato
 
  printf("Enter one chracter:");
  scanf(" %c" , &cValue);

  bRet = CharPresent(Arr , cValue);
  
  if(bRet == TRUE)
  {
    printf("character is present in string");
  }
  else
  {
     printf("character is not present in string");
  }
  return 0;
}
/*
scanf("%c", &ch); → Enter सुद्धा character म्हणून घेतो.
scanf(" %c", &ch); → आधीचे Enter/Space/\n सोडून देतो आणि मग character घेतो.

म्हणून %c च्या आधी एक space देणे ही खूप सामान्य आणि योग्य पद्धत आहे.

मग " %c" मध्ये Space का देतो?
scanf(" %c", &cValue);

हा Space म्हणजे:

"जर आधी Space, Tab किंवा Enter (\n) असेल तर ते आधी टाकून दे. मग पुढचा खरा character वाच."
*/