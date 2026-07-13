//Accept number of rows and number of columns from user and display below pattern
/*
Enter number of rows:4
Enter number of columns:4
1       2       3       4
        2       3       4
                3       4
                        4
                        
*/
#include<stdio.h>

void Display(int iRow ,int iCol)
{
  int i =0 , j =0;
  for(i = 1 ; i <= iRow ;i++)  //row
  {
    for(j=1  ;j <= iCol ;j++ )
    {
      if(j >= i)     
      {
        printf("%d\t" , j);
      }
      else
      {
        printf(" \t"); //baki thikani space print kar jar te kele nahi tar output veglach print hoil 
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