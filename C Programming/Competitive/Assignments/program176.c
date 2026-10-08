/*complete below code snippet it contains only service provider function*/
/*write entry point function to call below helper function separately*/

/*
write a program which accept one number and position from user and 
check whether bit at that position is ON or OFF .if it is ON return true otherwise return
false*/

/*
Enter one number and positin :10  2
Given Bit is ON
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned int UNIT;

BOOL CheckBit(UNIT iNo1 ,int iNo2)
{
    UNIT iMask = (1<< (iNo2 - 1));
    UNIT Ans = iNo1 & iMask;            /*iNo1 & iMask चा result 0 किंवा non-zero आहे हे check करायचं असेल तर:
                                                     return ((iNo1 & iMask) != 0);  0 nahiye manje bit on ahe true return hoil      */

    if(Ans == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE ;
    }
    
}
int main()
{
    UNIT uValue = 0;
    int  iValue = 0;
    BOOL bRet = FALSE ;

    printf("Enter one number and positin :");
    scanf("%u %d",&uValue,&iValue);
    
    bRet = CheckBit(uValue,iValue);

    if(bRet == TRUE)
    {
        printf("Given Bit is ON");
    }
    else
    {
        printf("Given Bit is OFF");
    }

    return 0;
}
/*
1)जर तुला 10 आणि 2 input दिल्यावर TRUE / ON answer हवा असेल, तर position मोजण्याची पद्धत बदलावी लागेल.
जर position 2 म्हणजे right side पासून दुसरा bit असेल, तर 10 मध्ये तो 1 आहे:

10 = 1010
        ↑
      2nd bit = 1

त्यासाठी code मध्ये:

UNIT iMask = (1 << (iNo2 - 1));

2)UNIT iMask = (1<<iNo2); he pn correct ahe pn input 10 ani 2 la he false det ahe
 pn jar 12 ani 2 input dile tar hech correct ahe varti apn 1 pasn mojl ahe
  pn start tar 0 pasn hot mhnun iNo - 1 kel pn hyamadhe 0 pasnch start kela ahe 
  


  Position उजवीकडून 0 पासून:

Position:  7 6 5 4 3 2 1 0
Binary:    0 0 0 0 1 1 0 0
                     ↑
                   pos 2

म्हणून position 2 वर bit = 1 आहे. ✅

Step 2: Mask
iMask = 1 << 2;
00000001 << 2
= 00000100

म्हणजे:

iMask = 4
Step 3: AND
  12 = 00001100
   4 = 00000100
----------------
        00000100

म्हणून:

Ans = 4
Step 4: Compare
if(Ans == iMask)
4 == 4

✅ TRUE

म्हणून output:

Given Bit is ON
*/