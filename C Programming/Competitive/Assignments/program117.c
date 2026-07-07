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
  char ch1 = '\0' , ch2 = '\0';

  for(i =1 ; i <= iRow ;i++)  //row
  {
    for(j=1 ,ch1 = 'a' , ch2 = 'A' ;j <= iCol ;j++)  //column
    {
      if((i % 2) ==0)
      {
        printf("%c\t",ch1);
        ch1++;
      }
      else
      {
        printf("%c\t",ch2);
        ch2++;
      }
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