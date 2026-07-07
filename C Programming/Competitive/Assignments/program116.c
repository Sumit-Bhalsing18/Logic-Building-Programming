//Accept number of rows and number of columns from user and display below pattern
/*
Enter number of rows:4
Enter number of columns:4
A       B       C       D
A       B       C       D
A       B       C       D
A       B       C       D
*/
#include<stdio.h>

void Display(int iRow ,int iCol)
{
  int i =1 , j =1;
  char ch = '\0';

  for(i =1 ; i <= iRow ;i++)  //row
  {
    for(j=1 ,ch = 'A' ;j <= iCol ;j++ ,ch++)  //column
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