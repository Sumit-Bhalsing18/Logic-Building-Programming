//write a program which accept string from user and reverse that string in place

/*
Enter string :Hello
Reverse string is:  olleH*/

#include<stdio.h>
void ReverseString(char *str )
{
  char *start = str; //str  string chya pahilya character ch name
  char *end  = str;
  char temp;

  while( *end != '\0')
  {
    end++;
  };
  end--;

  //Reverse the string
  while(start < end)
  {
    temp = *start;
    *start = *end;
    *end = temp;

    start++;
    end--;
  }
  
}
int main()
{
  char Arr[20] ;
  int iRet = 0;

  printf("Enter string :");
  scanf("%[^'\n']s",Arr);      

  ReverseString(Arr);
 
  printf("Reverse string is: %s" ,Arr);
  
  return 0;
}
