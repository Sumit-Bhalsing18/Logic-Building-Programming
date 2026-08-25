#include<stdio.h>
int main()
{
    char str[80] = {'\0'};

    /*char Command1[20] = {'\0'};
    char Command2[20] = {'\0'};
    char Command3[20] = {'\0'};*/

    char Command[4] [20] = {{'\0'}};  //2d ARRAY

    printf("Enter command :\n");
    fgets(str,sizeof(str),stdin);//libaray function //flushing karnyasathi 

    printf("Entered command is :%s\n" ,str);

    sscanf(str,"%s %s %s",Command[0],Command[1],Command[2]); //string accept karaychi ahe mhnun s 
                                                             /* String मधून data वाचणे.
                                                                scanf() keyboard मधून वाचतो.
                                                                 sscanf() string मधून वाचतो.
                                                             */

    printf("first token : %s\n",Command[0]);
    printf("Second token : %s\n",Command[1]);
    printf("third token : %s\n",Command[2]);
   
    return 0;
}
/*
scanf()                                                      	fgets()
Keyboard वरून input घेतो	                                  Keyboard वरून input घेतो
Space आल्यावर input थांबतो	                                पूर्ण line (Enter पर्यंत) घेतो
String मध्ये space असेल तर पूर्ण वाचू शकत नाही                	Space सहित पूर्ण string वाचतो
Buffer overflow होण्याची शक्यता जास्त	                       sizeof() मुळे सुरक्षित आहे*/