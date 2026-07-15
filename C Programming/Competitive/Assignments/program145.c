/*Accept division of student from user and depend on the division display exam timing there are 4 divisions in school as A, B,C,D
 Exam of division A at 7 AM ,B at 8 AM , C at 9 AM and D at 10 AM (Application should be case insensitive)*/
/*
Enter character :C
Exam of division C at 9 AM

Enter character :d
Exam of division D at 10 AM
*/
#include<stdio.h>

void  DisplaySchedule(char ch)
{
   if(ch == 'A' || ch == 'a')
   {
    printf("Exam of division A at 7 AM");
   }
   else if(ch == 'B' || ch == 'b')
   {
    printf("Exam of division B at 8 AM");
   }
   else if(ch == 'C' || ch == 'c')
   {
    printf("Exam of division C at 9 AM");
   }
    else if(ch == 'D' || ch == 'd')
   {
    printf("Exam of division D at 10 AM");
   }
   else
   {
    printf("Invalid input ");
   }
   
}
int main()
{

    char cValue ='\0';
   
    printf("Enter character :");
    scanf("%c",&cValue);
    
    DisplaySchedule(cValue);
    
    return 0;
}