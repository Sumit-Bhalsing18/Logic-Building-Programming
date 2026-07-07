//Accept number of rows and number of columns from user and display below pattern
/*
Enter number of rows:3
Enter number of columns:4
1       2       3       4
5       6       7       8
9       10      11      12
*/
#include<stdio.h>

void Display(int iRow ,int iCol)
{
  int i =0 , j =0;
  int iCnt =1 ;
  for(i = 1 ; i <= iRow ;i++)  //row
  {
    for(j=1  ;j <= iCol ;j++ ,iCnt++)  //column
    {
      printf("%d\t",iCnt);
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