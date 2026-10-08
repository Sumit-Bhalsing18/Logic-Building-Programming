
/*
write a program which accept two number from user and display position 
of common ON bits from that two numbers 
*/
/*
Enter first number and second number :10 14
 2 4
*/
#include<stdio.h>

typedef unsigned int UNIT; 

UNIT CheckBit(UNIT iNo1 ,UNIT iNo2)
{
    int iCount = 1 ;
    int iMask = 0X1;
    int iResult = iNo1 & iNo2;
                                     
    while(iResult != 0)                     
    {                                  
      if((iResult & iMask) == 1 )  
      {
        printf(" %d",iCount);
      }
      iResult = iResult >> 1; 
      iCount++;
    }                 
                     
}                           
                            
int main()
{
    UNIT uValue1 = 0 ,uValue2 = 0 ;
   

    printf("Enter first number and second number :");
    scanf("%u %u",&uValue1,&uValue2);
    
    CheckBit(uValue1,uValue2);


    return 0;
}
/*
iResult = 1010

आपण position 1 पासून सुरुवात करतो.

पहिली iteration:

iCount = 1
iResult = 1010

1010 & 0001
------------
0000

OFF → काही print नाही.

नंतर:

iResult >> 1 = 0101
iCount = 2

दुसरी iteration:

iCount = 2
iResult = 0101

0101 & 0001
------------
0001

ON → 2 print.

नंतर:

iResult >> 1 = 0010

0010 & 0001  = 0000

0010 >> 1   = 0001
iCount = 3


iteration 4

0001  & 0001 = 0001
iCount = 4

म्हणून पुढे position 4 वर 1 मिळेल आणि 4 print होईल.
*/

