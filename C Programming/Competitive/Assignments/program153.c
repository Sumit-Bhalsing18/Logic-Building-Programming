////write a program which accept string from user and toggle the case

#include<stdio.h>
void Stringtoggle(char *str)
{
  while(*str != '\0')
  {
   if(*str >= 'a' && *str <= 'z')
   {
    *str = *str - 32 ;  
   }
   else if(*str >= 'A' && *str <= 'Z')
   {
     *str = *str + 32 ; 
   }
   str++;
  }

}
int main()
{
  char Arr[20];
  printf("Enter string :");
  scanf("%[^'\n']s" , Arr);

  Stringtoggle(Arr); 

  printf("Updated string is : %s" , Arr);
  return 0;
}