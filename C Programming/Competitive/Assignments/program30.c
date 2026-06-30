//write a program which accept number from user and display its table in reverse order
//Enter the number: -5
//50      45      40      35      30      25      20      15      10      5
//Enter the number: 2
//20      18      16      14      12      10      8       6       4       2
//time complexity O(1) karan iteration kiti honar he aplyala mahit ahe
#include<stdio.h>
void TableRev(int iNo)
{
  if(iNo <0)
  {
    iNo =-iNo; 
  }
  int iCnt =0 ,Tab =0 ;

  for(iCnt =10;iCnt > 0 ;iCnt--)
  {
    Tab = iNo * iCnt;
    printf("%d\t",Tab);
  }
  
}
    
int main()
{
    int iValue =0 , iRet =0;
    printf("Enter the number: ");
    scanf("%d",&iValue);

    TableRev(iValue);
    return 0;
}