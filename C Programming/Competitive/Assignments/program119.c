//Accept number of rows and number of columns from user and display below pattern
/*
Enter number of rows:4
Enter number of columns:5
4       4       4       4       4
3       3       3       3       3
2       2       2       2       2
1       1       1       1       1
*/
#include<stdio.h>

void Display(int iRow ,int iCol)
{
  int i =0 , j =0;

  for(i =iRow ; i > 0 ;i--)  //row
  {
    for(j=1  ;j <= iCol ;j++)  //column
    {
      printf("%d\t",i);
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