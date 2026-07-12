//Accept number of rows and number of columns from user and display below pattern
/*
Enter number of rows:5
Enter number of columns:5
a       b       c       d       e
1       2       3       4       5
a       b       c       d       e
1       2       3       4       5
a       b       c       d       e
*/
#include<stdio.h>

void Display(int iRow ,int iCol)
{
  int i =0 , j =0;
  char ch = '\0';
  for(i = 1 ; i <= iRow ;i++)  //row
  {
    for(j=1 ,ch = 'a' ;j <= iCol ;j++)
    {
      if( (i % 2) != 0)
      {
        printf("%c\t" ,ch);
        ch++;
      }
      else
      {
          printf("%d\t" ,j);
          
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