//Accept number of rows and number of columns from user and display below pattern
/*
Enter number of rows:3
Enter number of columns:5
A       A       A       A       A
B       B       B       B       B
C       C       C       C       C
*/
#include<stdio.h>

void Display(int iRow ,int iCol)
{
  int i =1 , j =1;
  char ch = '\0';

  for(i =1 , ch = 'A' ; i <= iRow ;i++ , ch++)  //row
  {
    for(j=1  ;j <= iCol ;j++)  //column
    {
      printf("%c\t",ch);
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