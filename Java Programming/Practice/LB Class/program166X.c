//write a program which checks whether 15th bit is ON or OFF
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UNIT iNo)
{
   return (iNo & (1 << 15)) != 0;// return (iNo & (OX8000)) != 0;
}
int main()
{
    int iNo = 0 ; BOOL iRet = 0;
    printf("Enter number");
    scanf("%d",&iNo);

    iRet = CheckBit(iNo);

    if(iRet == TRUE)
    {
        printf("15 th bit is ON ");
    }
    else
    {
          printf("15 th bit is OFF ");
    }
}
