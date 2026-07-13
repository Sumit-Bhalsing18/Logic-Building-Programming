//Accept number of rows and number of columns from user and display below pattern
/* 
Enter number of rows:4
Enter number of columns:4
*       *       *       #
*       *       #       @
*       #       @       @
#       @       @       @

*/
#include<stdio.h>

void Display(int iRow ,int iCol)
{
  int i =0 , j =0;
  for(i = 1 ; i <= iRow ;i++)  //row
  {
    for(j=1  ;j <= iCol ;j++ )
    {
      if(j == iCol - i + 1)     
      {
        printf("#\t");
      }
      else if(j <  iCol - i + 1)
      {
        printf("*\t");  
      }
      else
      {
        printf("@\t"); 
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
  
  if(iValue1 != iValue2)
  {
    printf("row and column should be same ");
    return 0;
  }
  Display(iValue1,iValue2);
  return 0;
}
//right to left diagonal satho condition j == iCol - i + 1
//ani right to left upper triangular sathi j < iCol - i + 1
//bakiche else madhe 