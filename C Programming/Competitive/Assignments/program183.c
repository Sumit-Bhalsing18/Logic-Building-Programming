
/*
write a program which accept one number from user and check whether 9th or 12th bit is on or off
*/
/*

*/
#define TRUE 1
#define FALSE 0
#include<stdio.h>

typedef int BOOL;
typedef unsigned int UNIT; 

BOOL CheckBit(UNIT iNo1 )
{
    int iMask = (1 << 8) | (1 << 11);     //2304
    if((iNo1 & iMask) != 0)
    {
      return TRUE;
    }
    return TRUE;
    
                      
}                           
                            
int main()
{
    UNIT uValue1 = 0 ;
    BOOL bRet = FALSE;

    printf("Enter number  :");
    scanf("%u",&uValue1);
    
    bRet =CheckBit(uValue1);
    
    if(bRet == TRUE)
    {
      printf(" 9th or 12th bit is ON");
    }
    else
    {
      printf(" 9th or 12th bit is OFF");
    }

    return 0;
}
/*

1)म्हणजे लक्षात ठेव:

9th OR 12th  → (iNo & mask) != 0
9th AND 12th → (iNo & mask) == mask

2)1 << 8

म्हणजे:

00000000 00000000 00000001 00000000

Value = 256

12th bit → index 11

1 << 11

म्हणजे:

00000000 00000000 00001000 00000000

Value = 2048

आता दोन्ही mask ला OR |:

  00000000 00000000 00000001 00000000   = 256
| 00000000 00000000 00001000 00000000   = 2048
------------------------------------------------
  00000000 00000000 00001001 00000000   = 2304

म्हणून:

iMask = 2304;
Step 2: Input 257
257 = 00000000 00000000 00000001 00000001

आता:

iNo & iMask

म्हणजे:

  00000000 00000000 00000001 00000001   = 257
& 00000000 00000000 00001001 00000000   = 2304
------------------------------------------------
  00000000 00000000 00000001 00000000   = 256

Result:

iNo & iMask = 256

आता condition:

(iNo & iMask) != 0

म्हणजे:

256 != 0

✅ TRUE

असं का झालं?

257 मध्ये:

9th bit  = ON
12th bit = OFF

आपल्याला OR पाहिजे:

9th OR 12th

ON OR OFF = ON

म्हणून TRUE.
*/