//write a program which accept number from user and display its tabel
//input : 2
//output : 2 4 6 8 10 12 14 16 18 20 
//Enter the number: -5
//5       10      15      20      25      30      35      40      45      50
//time complexity O(1) bcoz loop always runs 10 times regaedless if the input number  eg (10,100) vela O(1)
#include<stdio.h>
void Table(int iNo)
{
  if(iNo <0)
  {
    iNo =-iNo; 
  }
  int iCnt =0 ,Tab =0 ;

  for(iCnt =1;iCnt <= 10 ;iCnt++)
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

    Table(iValue);
    return 0;
}