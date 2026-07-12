//Accept number of rows and number of columns from user and display below pattern
/*
Enter number of rows:4
Enter number of columns:4
2       4       6       8
1       3       5       7
2       4       6       8
1       3       5       7
*/
#include<stdio.h>

void Display(int iRow ,int iCol)
{
  int i =0 , j =0;
   int Num =0;
  for(i = 1 ; i <= iRow ;i++)  //row
  {
   
    if((i % 2)!=0)
    {
      Num =2;
    }
    else
    {
      Num =1;
    }

    for(j=1 ;j <= iCol ;j++)
    {
      printf("%d\t" ,Num);
      Num = Num + 2;
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