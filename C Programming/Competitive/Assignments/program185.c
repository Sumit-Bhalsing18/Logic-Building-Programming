
/*
write a program which accept one number from user and range of position from user .
toggle all bits from that range
*/
/*
Enter one number  :10             1010
Enter range  : 1  3           
After toggle all bits from that range value is 13
*/

#include<stdio.h>
typedef unsigned int UNIT; 

int CheckBit(UNIT iNo,int iStart,int iDest)
{
  UNIT iMask = 0;
   int iCount = 0;
   for(iCount = iStart;iCount <= iDest;iCount++)
   {
      iMask = iMask | (1 << (iCount -1));
   }  
   
   return iNo ^ iMask;            //   1010
}                                //    0111
                                 //    1101  = 13
                            
int main()
{
    UNIT uValue1 = 0 ;
    int iStart = 0 , iDest = 0 , iRet = 0;
    

    printf("Enter one number  :");
    scanf("%u",&uValue1);

    printf("Enter range  :");
    scanf("%d %d",&iStart,&iDest);
    
    iRet =CheckBit(uValue1 ,iStart,iDest);
    
    printf("After toggle all bits from that range value is %d",iRet);

    return 0;
}
/*

1)समजा range आहे: 3 ते 6

म्हणजे आपल्याला 3rd, 4th, 5th, 6th bits ON करायचे आहेत.

आपण सुरुवातीला:

iMask = 0;

म्हणजे:

00000000

आता loop चालेल:

for(iCount = 3; iCount <= 6; iCount++)
पहिला round: iCount = 3
1 << (3 - 1)

म्हणजे:

1 << 2

1 ला 2 positions left shift:

00000001
      ↓
00000100

आता:

iMask = 0 | 00000100;

म्हणून:

iMask = 00000100
दुसरा round: iCount = 4
1 << (4 - 1)
= 1 << 3

मिळेल:

00001000

आता:

iMask = 00000100
       |00001000
       ----------
        00001100
तिसरा round: iCount = 5
1 << (5 - 1)
= 1 << 4
= 00010000

OR:

00001100
|00010000
---------
00011100
चौथा round: iCount = 6
1 << (6 - 1)
= 1 << 5
= 00100000

OR:

00011100
|00100000
---------
00111100

म्हणून final:

iMask = 00111100

यामध्ये 3rd ते 6th bits ON आहेत.

2)
iCount - 1 का?

कारण आपण positions 1 पासून मोजतो, पण shifting 0 पासून होते.

Position:  8 7 6 5 4 3 2 1
Bit index: 7 6 5 4 3 2 1 0

म्हणून:

1 << (iCount - 1)*/