//Accept number from user and display below pattern
/*
Input : 8
Output : 2  4  6  8  10  12  14  16
 */ 
#include<stdio.h>

 void Pattern(int iNo)
 {
  int iCnt =0;
  int i =2;
  
  for(iCnt=1 ;iCnt <=iNo ;iCnt++)
  {
    printf("%d \t",i);
    i = i + 2;
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