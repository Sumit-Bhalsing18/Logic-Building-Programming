//input 24
//output 1 2 3 4 6 8 12
#include<stdio.h>

void DisplayFactor(int iNo)
    {
        int i=0;
        if(iNo<=0)
        {
            iNo= -iNo;
        }
        int iCnt=0;
        for(iCnt=1;iCnt<=iNo/2;iCnt++)// iNo/2 to reduce the iteration 
        {
            if((iNo%iCnt)==0)
            {
                printf("\n%d",iCnt);
            }
        }
    }
int main()
{ 
    int iValue=0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);
    
    return 0;
}