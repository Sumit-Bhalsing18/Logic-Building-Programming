#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;
    iCnt=1;
    while(iNo>=iCnt)
    {
        printf("*\n");
        iNo--;
        
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