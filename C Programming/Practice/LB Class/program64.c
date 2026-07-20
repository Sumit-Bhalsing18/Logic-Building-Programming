//input 5
//output : -5 -4 -3 -2 -1 0 1 2 3 4 5
#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt =-iNo;iCnt<=iNo;iCnt++ )//negative chya veles confusion hot postive la maghe maghe jat
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
//time complexity 2N bcoz double fort -5 to 0 and 0 to 5