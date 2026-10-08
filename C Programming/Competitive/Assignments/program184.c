
/*
write a program which accept one number and two positons from user and 
check whether bit at first or bit at second position is on or off
*/
/*
Enter one number  :10
Enter two positions :3 7
Bit at first or Bit at second position is ON

Enter one number  :3
Enter two positions :1 2                     (int iMask = 1 << (iPos1 -1) | 1  << (iPos2 -1);) 
Bit at first and Bit at second position is ON

Enter one number  :5
Enter two positions :1 2
bit at first and bit at second position is OFF
*/
#define TRUE 1
#define FALSE 0
#include<stdio.h>

typedef int BOOL;
typedef unsigned int UNIT; 

BOOL CheckBit(UNIT iNo1,int iPos1,int iPos2)
{
    int iMask = 1 << (iPos1) | 1  << (iPos2);   //hyach answer zero ahe 7 kel ahe mhnun 
  
    return (iNo1 & iMask) != 0;                    
}                           
                            
int main()
{
    UNIT uValue1 = 0 ;
    int iPos1 = 0 , iPos2 = 0;
    BOOL bRet = FALSE;

    printf("Enter one number  :");
    scanf("%u",&uValue1);

    printf("Enter two positions :");
    scanf("%d %d",&iPos1,&iPos2);
    
    bRet =CheckBit(uValue1 ,iPos1,iPos2);
    
    if(bRet == TRUE)
    {
      printf("Bit at first or Bit at second position is ON");
    }
    else
    {
      printf("bit at first or bit at second position is OFF");
    }

    return 0;
}
/*
1. Number 10 घे
10 = 1010

आता उजवीकडून position 1 पासून मोजायची:

             ↓   ↓   ↓   ↓
Position     4   3   2   1
             1   0   1   0

म्हणजे:

1st bit = 0 → OFF
2nd bit = 1 → ON
3rd bit = 0 → OFF
4th bit = 1 → ON

बस! Question मध्ये "3rd bit" म्हटलं तर या table मधला 3rd bit घ्यायचा.

2. मग iPos - 1 का?

C मध्ये 1 << something करताना आपण index 0 पासून सुरुवात करतो.

Question position:    4    3    2    1
C index:              3    2    1    0
                       ↑    ↑    ↑    ↑

म्हणून:

Question ची 1st position → C index 0
Question ची 2nd position → C index 1
Question ची 3rd position → C index 2
Question ची 4th position → C index 3

त्यामुळे formula:

1 << (iPos - 1)
*/