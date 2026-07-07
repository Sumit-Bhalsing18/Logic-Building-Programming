//Accept number of rows and number of columns from user and display below pattern
/*
Enter number of rows:3
Enter number of columns:4
*       #       *       #
*       #       *       #
*       #       *       #
*/
#include<stdio.h>

void Display(int iRow ,int iCol)
{
  int i =1 , j =1;
  for(i =1 ; i <= iRow ;i++)  //row
   {
    for(j=1 ;j <= iCol ;j++)  //column
    {
      if((j % 2)==0)
      {
        printf("#\t");
      }
      else
      {
        printf("*\t");
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