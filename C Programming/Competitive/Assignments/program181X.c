
/*
write a program which accept one number from user count number of ON (1) 
bits in it without using % and / operator
*/
/*
Enter one number :60
number of ON (1)  bits is 4

C:\Users\user5\OneDrive\Desktop\LB\LB Assignment>myexe
Enter one number :11
number of ON (1)  bits is 3
*/
#include<stdio.h>

typedef unsigned int UNIT; 

UNIT CheckBit(UNIT iNo )
{
    int iCount = 0 ;
   while(iNo != 0)
   {
      int Ans = iNo % 2;
      if(Ans == 1)
      {
         iCount++;
      }
      iNo = iNo / 2;
   }  
   
   return iCount;
}
int main()
{
    UNIT uValue = 0 ;
    int iRet = 0;

    printf("Enter one number :");
    scanf("%u",&uValue);
    
    iRet = CheckBit(uValue);

    printf("number of ON (1)  bits is %d",iRet);

    return 0;
}


/*
1)iNo & 1 का?

आपल्याला प्रत्येक वेळी सगळ्यात उजवीकडचा bit check करायचा आहे.

10 = 1010
          ↑
       हा bit check करायचा

त्यासाठी:

iNo & 1

म्हणजे:

  1010
& 0001
------
  0000

Result 0 → last bit OFF.

Step 2: पुढचा bit कसा check करायचा?

आपण:

iNo = iNo >> 1;

करतो.

1010 ला right shift:

1010 >> 1

होते:

0101

आता पुन्हा last bit check:

  0101
& 0001
------
  0001

Result 1 → ON, म्हणून:

iCount++;

आता count = 1.

पूर्ण calculation
10 = 1010

1010 & 0001 = 0000 → 0 → Count = 0
1010 >> 1   = 0101

0101 & 0001 = 0001 → 1 → Count = 1
0101 >> 1   = 0010

0010 & 0001 = 0000 → 0 → Count = 1
0010 >> 1   = 0001

0001 & 0001 = 0001 → 1 → Count = 2
0001 >> 1   = 0000

iNo == 0 → Stop

Final:

Count = 2

2)example
12 = 1100
1100 >> 1

एक position right:

0110

म्हणजे:

12 >> 1 = 6

पुन्हा:

0110 >> 1 = 0011

म्हणजे:

6 >> 1 = 3

पुन्हा:

0011 >> 1 = 0001

म्हणजे:

3 >> 1 = 1

पुन्हा:

0001 >> 1 = 0000

म्हणजे:

1 >> 1 = 0
पण >> 1 का वापरतो?

आपल्या program मध्ये आपल्याला एक-एक bit check करायचा आहे.
*/