//Accept number of rows and number of columns from user and display below pattern
/*
Enter number of rows:4
Enter number of columns:4
A       B       C       D
a       b       c       d
A       B       C       D
a       b       c       d
*/
#include<stdio.h>

void Display(int iRow ,int iCol)
{
  int i =1 , j =1;
  char ch= '\0';

  for(i =1 ; i <= iRow ;i++)  //row
  {
    if(i % 2==0)    //condition ekdach chech hot ahe magchya code satkhi multiple condition check nahi karat he
    {               //maghcya code madh 2 variable use kele ahe hya madhe 1ch kela ahe
      ch = 'a';     //i sathi fakt ekdach condition check hote ani 4 vela j print hot ahe
    }
    else
    {
      ch = 'A';
    }
  
    for(j=1 ;j<= iCol;j++)
    {
      printf("%c\t",ch);
      ch++;
    }
  printf("\n");
}
}

int main()
{
  int iValue1 =0 , iValue2 =0;
  printf("Enter number of rows:");
  scanf("%d" ,&iValue1);
  printf("Enter number of columns:");
  scanf("%d" ,&iValue2);
  
  Display(iValue1,iValue2);
  return 0;
}