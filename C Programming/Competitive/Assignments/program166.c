//write a program which checks whether 15th bit is ON or OFF
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UNIT iNo)
{
    UNIT iMask = 0X8000; //  UINT iMask = 1 << 15; he pn lihu shakto //counting 1 pasn kar fakt 1 ghar pudh ghe manje counting tashi 0 pasn hoila pahije na mhnun 
    UNIT iAns = 0;
    
    iAns = iNo & iMask;
;    if(iAns == iMask)
    {
        return 1;
    }
    else
    {
        return 0;
    }
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
/*
Bit Position:
7   6   5   4   3   2   1   0

म्हणून:

0th bit → 1 << 0
1st bit → 1 << 1
2nd bit → 1 << 2
3rd bit → 1 << 3
...
15th bit → 1 << 15*/

/*
1. Bit CHECK करायचा असेल

"Check whether 15th bit is ON or OFF"

➡️ AND (&) वापरायचा.

2. Bit ON (Set) करायचा असेल

"Turn ON 15th bit"

➡️ OR (|) वापरायचा.

3. Bit Toggle करायचा असेल

"ON असेल तर OFF करा, OFF असेल तर ON करा"

➡️ XOR (^) वापरायचा.
*/