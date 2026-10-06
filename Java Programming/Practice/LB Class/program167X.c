//write a program check whether 5th and 8th bit is on or off
/*
5th sathi 32 + 8th sathi 2 raise to 8  = 256
Enter Number
288
5th and 8th bit is ON
*/
#include<stdio.h>
# define TRUE 1
#define FALSE 0

typedef int BOOL ;
typedef unsigned int UNIT;
BOOL CheckBit(UNIT iNo)
{
    UNIT iMask = (1 < 5) | (1 < 8) ;  //iMask = 288 karan 32 + 256
    return ((iNo & iMask) == iMask); //compiler check karto iNo & iMask != 0 ahe manje true mhnun iret madhe true value jate   //  256 & 288  != 288  below explanation 
}
int main()
{
    UNIT iValue = 0;
    BOOL iRet = 0;
    printf("Enter Number\n");
    scanf("%lu" ,&iValue);
    
    iRet = CheckBit(iValue);

    if(iRet == TRUE)
    {
        printf("5th and 8th bit is ON");
    }
    else
    {
         printf("5th and 8th bit is OFF");
    }
    return 0;
} 
/*
100000000
&
100100000
----------
100000000

Result = 256

आता

256 == 288

❌ False

कारण 5th bit OFF आहे.


2)
return (iNo & (1 << 5)); आणि return ((iNo & (1 << 5)) != 0); यापैकी कोणतं चांगलं?

योग्य उत्तर:

दुसरं (!= 0) चांगलं, कारण ते नेहमी स्पष्ट Boolean result (0 किंवा 1) return करतं. हे code अधिक readable आणि professional आहे.
*/

/*
BOOL CheckBit(UINT iNo)
{
    return (iNo & (1 << 5));
}

आणि input 32 असेल, तर return काय करेल?

0
1
32    OUTPUT = 32
*/