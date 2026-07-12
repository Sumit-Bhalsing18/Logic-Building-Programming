//Accept number of rows and number of columns from user and display below pattern
/*
Enter number of rows:4
Enter number of columns:4
1       2       3       4
5       6       7       8
9       1       2       3
4       5       6       7
*/
#include<stdio.h>

void Display(int iRow ,int iCol)
{
  int i =0 , j =0;
  int iNum =1 ;
  for(i = 1 ; i <= iRow ;i++)  //row
  {
    for(j=1  ;j <= iCol ;j++)  //column
    {
      printf("%d\t",iNum);

      iNum++;
      if(iNum > 9)   //jar iNum ha 9 peksha motha zala tar parat iNum 1 la set kar 
      {
        iNum = 1;
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