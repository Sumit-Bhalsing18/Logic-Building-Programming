//write a program which accept string from user and accept one character from user , return index of last occurence of that character
/*

Enter string :Marvellous Multi OS
Enter one chracter:M
index of last occurence of that character:11

Enter string :Marvellous Multi OS
Enter one chracter:e
index of last occurence of that character:4
*/

#include<stdio.h>
int CountWhiteSpace(char *str , char ch)
{
  int index = 0;
  int last = -1;

  while( *str != '\0')
  {
    if(*str == ch)
    {
       last = index;
    }
    str++;
    index++;
  };
  return last;
}
int main()
{
  char Arr[20] ;
  int iRet = 0;
  char cValue = '\0';

  printf("Enter string :");
  scanf("%[^'\n']s",Arr);      
 
  printf("Enter one chracter:");
  scanf(" %c" , &cValue);

  iRet = CountWhiteSpace(Arr , cValue);
  printf("index of last occurence of that character in string:%d" , iRet);
  
  return 0;
}
/*

First Occurrence → Character मिळताच return.
Last Occurrence → Character मिळाला की index save करायचा, पण loop पूर्ण चालू द्यायचा. शेवटी save केलेला शेवटचा index return करायचा.
*/