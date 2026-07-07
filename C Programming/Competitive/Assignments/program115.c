//Accept number of rows and number of columns from user and display below pattern
/*
Enter number of rows:3
Enter number of columns:4
1       1       1       1
2       2       2       2
3       3       3       3
4       4       4       4   //input jari 3 dile asel tari i <= iCol ahe mhnun jopyrnt i chi value 4 hot nahi topyrnt loop thambnar nahi 
*/
#include<stdio.h>

void Display(int iRow ,int iCol)
{
  int i =1 , j =1;
  for(i =1 ; i <= iCol ;i++)  //row
   {
    for(j=1 ;j <= iCol ;j++)  //column
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