//write a program which accept number from user and if number is less than 50 then print small
//if is is greater than 50 and less than 100 then print medium if is is greater than 100 then print large
//Enter the number: 75
//medium
//Enter the number: 7
//small
//Time complexity = 0(1)
#include<stdio.h>
void Numbers(int iNo)
{
   
    if(iNo < 50)
    {
      printf("Small");
    }
    else if(iNo>=50 && iNo<100)
    {
      printf("medium");
    }
    else
    {
      printf("large");
    }
    
      
}
int main()
{
    int iValue =0;
    printf("Enter the number: ");
    scanf("%d",&iValue);

    Numbers(iValue);
    return 0;
}