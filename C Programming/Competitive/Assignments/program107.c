//Accept number from user and display below pattern
/*
Input  : 5
Output :  5 # 4 # 3 # 2 # 1 # 
 */ 
#include<stdio.h>

 void Pattern(int iNo)
 {
    int iCnt =0;
  
   for(iCnt =5;iCnt > 0 ;iCnt--)
   {
     printf("%d\t#\t",iCnt);
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