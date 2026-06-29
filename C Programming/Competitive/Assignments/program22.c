//write a program which accept number from user and print number till that number
//Enter the number: 8
//1       2       3       4       5       6       7       8
//Enter the number: -8
//1       2       3       4       5       6       7       8
//time complexity O(n)
#include<stdio.h>
void Display(int iNo)
{
    int iCnt =0;
   
    if(iNo <0)
    {
       iNo = -iNo;
    }
    for(iCnt =1; iCnt <=iNo ;iCnt++)
    {
     printf("%d \t",iCnt);
    }
      
}
int main()
{
    int iValue =0;
    printf("Enter the number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}