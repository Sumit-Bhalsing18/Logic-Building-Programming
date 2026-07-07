//Accept number from user and display below pattern
/*
Input  : 5
Output :  A  B  C  D  E 
 */ 
#include<stdio.h>

 void Pattern(int iNo)
 {
    int iCnt =0;
    char ch = '\0';
   for(iCnt =1 ,ch = 'A' ;iCnt <= iNo ;iCnt++ ,ch++)
   {
    // printf("%c" ,ch+"\t");  ass dilyavr garbage value yete karan %c la ekach character ghrycha asto pn + "\t" madhe tu character ani string jodat ahes
     printf("%c\t" ,ch);
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