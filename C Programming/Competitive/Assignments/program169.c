//write a program check whether 7th and 8th and 9th bit is on or off
/*
Enter Number
896
7th and 8th and 9th bit is ON
C:\Users\user5\OneDrive\Desktop\LB\LB Assignment>myexe
Enter Number
855
7th and 8th and 9th bit is OFF

*/
#include<stdio.h>
# define TRUE 1
#define FALSE 0

typedef int BOOL ;
typedef unsigned int UNIT;
BOOL CheckBit(UNIT iNo)
{
   UNIT iMask = 0X80 | 0X100 | 0X200 ; //addition kas hot khali ahe
   return ((iNo & iMask) == iMask) != 0 ;
}
int main()
{
    UNIT iValue = 0;
    BOOL iRet = 0;
    printf("Enter Number\n");
    scanf("%u" ,&iValue);
    
    iRet = CheckBit(iValue);

    if(iRet == TRUE)
    {
        printf(" 7th and 8th and 9th bit is ON");
    }
    else
    {
         printf(" 7th and 8th and 9th bit is OFF");
    }
    return 0;
} 
/*
हो, बरोबर. Addition करताना carry येतो, पण OR मध्ये addition होत नाही
Addition (+) मध्ये 1 + 1 = 10 (carry येतो)
OR (|) मध्ये:
0 | 0 = 0
0 | 1 = 1
1 | 0 = 1
1 | 1 = 1 (carry येत नाही)

3 bit ch or karun hi value yete atta decimal karayche ahe mhnun + kar 
1110000000₂
= 512 + 256 + 128
= 896

Position 9 = 2⁹ = 512
Position 8 = 2⁸ = 256
Position 7 = 2⁷ = 128

*/