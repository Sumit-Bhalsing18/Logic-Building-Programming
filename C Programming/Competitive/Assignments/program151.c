//write a program which accept string from user and convert it into lower case
#include<stdio.h>

void StringLowerCase(char *str)  //*str manje string cha pahila character cha base address *str madhe ahe 
{
   while(*str != '\0')
   {
     if(*str >= 'A' && *str <= 'Z' )
     {
      *str = *str + 32;
     }
     str++;
   }

}
int main()
{
  char Arr[20] ;

  printf("Enter string");
  scanf("%[^'\n']s" , Arr)  ;  //string accept karayla aplyala special function lihayla lagt //Enter दाबेपर्यंत पूर्ण line accept कर.
  StringLowerCase(Arr);

  printf("Modified string is %s ",Arr);

  return 0;
}
/*
जर Function मध्ये
char str[]

किंवा

char *str

असे parameter असतील, तर String (array) चा address जातो. त्यामुळे function मध्ये केलेले बदल Original String वरच होतात. म्हणून return करण्याची गरज नसते.
Function ने स्वतःची copy बदलली नाही.
त्याने Original Memory बदलली. 
*/