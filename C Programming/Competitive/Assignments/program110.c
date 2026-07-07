//Accept number from user and display below pattern
/*
Input : 8
Output : 2  4  6  8  10  12  14  16
 */ 
#include<stdio.h>

 void Pattern(int iNo)
 {
    int iCnt2 =0 ,iCnt1 =0;
  
   for(iCnt1 =1 , iCnt2  =2;  iCnt1 <= iNo ; iCnt1++ ,iCnt2 = iCnt2 +2)
   {
     printf("%d\t",iCnt2);
   }
 }
 int main()
 {
    int iValue =0;

    printf("Enter input :");
    scanf("%d" ,&iValue);

    Pattern(iValue);
    return 0;
 }