//write a program which accept number from user and print numbers line
//Enter the number: 4
//-4      -3      -2      -1      0       1       2       3       4
#include<stdio.h>
//time complexity O(n)
void Display(int iNo)
{
    int iCnt =0;
   
    for(iCnt = -iNo; iCnt <=iNo ;iCnt++)
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