//Accept number of rows and number of columns from user and display below pattern
/*
Enter number of rows:4
Enter number of columns:4
1       2       3       4
2       3       4       5    
3       4       5       6
4       5       6       7

Num =i ka kela karan jevha row change hoil tevha i ha 2 hoil jevha row 3 hoil tevha i chi value pn 3 hoil mhnun te kele ahe 
*/
#include<stdio.h>

void Display(int iRow ,int iCol)
{
  int i =0 , j =0;
  for(i = 1 ; i <= iRow ;i++)  //row
  {
    int Num = i;
    for(j=1  ;j <= iCol ;j++ )
    {
      printf("%d \t" ,Num);
      Num++;
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