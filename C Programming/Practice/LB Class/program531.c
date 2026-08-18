#include<stdio.h>
// 5678
//8  7  6  5
void Display(int iNo)
{
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}
int main()
{
    int iValue = 0 ;
    int iRet = 0;;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    
    Display(iValue);
   
    return 0;
}
