//write a program which accept number from user and print that number of  $ and * on screen
//calculate time complexity
//input: -3
// $       *       $       *       $       *
////input: 3
// $       *       $       *       $       *
//Enter the number: 6
//$       *       $       *       $       *       $       *       $       *       $       *
//time complexity O(n)
#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt =0;
   
    if(iNo <0)
    {
       iNo = -iNo;
    }
    for(iCnt =1; iCnt<=iNo ;iCnt++)
    {
     printf("$\t*\t");
    }
      
}
int main()
{
    int iValue =0;
    printf("Enter the number: ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}