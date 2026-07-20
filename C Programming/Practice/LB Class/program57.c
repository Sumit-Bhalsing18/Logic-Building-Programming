//input 5
//output : 0  3 
#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt =1;iCnt < iNo;iCnt +=2 )//2 ni increment karayla iCnt +=2
    {
        printf("%d\t",iCnt);
        
    }
    printf("\n");
   
}
int main()
{
    int iValue =0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}