/*Accept division of student from user and depend on the division display exam timing there are 4 divisions in school as A, B,C,D
 Exam of division A at 7 AM ,B at 8 AM , C at 9 AM and D at 10 AM (Application should be case insensitive)*/
/*
Enter character :B
Exam of division B at 8 Am

Enter character :c  // small character dile tari output ale karan ch = toupper use kel mhnun 
Exam of division C at 9 Am

Enter character :z
Invalid Division
*/
#include<stdio.h>
#include<ctype.h> // he header file uppercase kivha lowercase la convert karnyasthi ahe

void  DisplaySchedule(char ch)
{
    ch = toupper(ch); //he c madhe inbuilt ahe jari small charcter dila tar te upper madhe convert karel 
   switch(ch)
   {
    case 'A' : printf("Exam of division A at 7 Am");break;
    case 'B' : printf("Exam of division B at 8 Am");break;  
    case 'C' : printf("Exam of division C at 9 Am");break;     
    case 'D' : printf("Exam of division D at 10 Am");break;   
    default  : printf("Invalid Division");
    
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