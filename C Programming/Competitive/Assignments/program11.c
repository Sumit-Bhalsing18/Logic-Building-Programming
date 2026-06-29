#include<stdio.h>

int Display(int iNo)
{
    if(iNo<10)
    {
        printf("hello");
    }
    else
    {
        printf("Demo");
    }
}
int main()
{
    int iValue;
    printf("Enter number\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}