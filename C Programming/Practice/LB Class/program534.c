#include<stdio.h>
//571
void Display(int iNo)
{
     int iDigit = 0;  //static nahi lavaycha karan preserve karaychi garaj nahiye 

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        Display(iNo);
        printf("%d\n",iDigit);
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
