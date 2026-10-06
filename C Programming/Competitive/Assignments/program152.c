//write a program which accept string from user and convert it into upper case
/*
Enter string :WELcome to MARVEllous
Updated string is : welCOME TO marveLLOUS
*/
#include<stdio.h>
void StringUpper(char *str)
{
  while(*str != '\0')
  {
   if(*str >= 'a' && *str <= 'z')
   {
    *str = *str - 32 ;  //32 ka karan upper ani lower character cha difference 32 asto 
   }
   str++;
  }

}
int main()
{
  char Arr[20];
  printf("Enter string :");
  scanf("%[^'\n']s" , Arr);

  StringUpper(Arr); //string cha base address dila je kahi logic lagel te main function chya string var changes hotil 

  printf("Updated string is : %s" , Arr);
  return 0;
}