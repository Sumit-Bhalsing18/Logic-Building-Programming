//Accept single digit number from user and print it into word 
//Enter the number: 10
//Invalid input please enter single digit (0-9)
//Enter the number: 8
//Eight
//Enter the number: -3
//Three
//we can use else if also but program become large and Multiple condition is there  
//Time complexity = 0(1)

#include<stdio.h>
void Numbers(int iNo)
{
  if(iNo <0)
  {
    iNo =-iNo; 
  }
  switch(iNo)
  {
    case 0: printf("Zero");break;
    case 1: printf("One");break;
    case 2: printf("Two");break;
    case 3: printf("Three");break;
    case 4: printf("four");break;
    case 5: printf("Five");break;
    case 6: printf("Six");break;
    case 7: printf("Seven");break;
    case 8: printf("Eight");break;
    case 9: printf("Nine");break;
    default: printf("Invalid input please enter single digit (0-9)");break;
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