#include<stdio.h>
int main()
{
    char str[80] = {'\0'};

    char Command1[20] = {'\0'};
    char Command2[20] = {'\0'};
    char Command3[20] = {'\0'};

    printf("Enter command :\n");
    fgets(str,sizeof(str),stdin);//libaray function 

    printf("Entered command is :%s\n" ,str);

    sscanf(str,"%s %s %s",Command1,Command2,Command1);

    printf("first token : %s\n",Command1);
    printf("Second token : %s\n",Command2);
    printf("third token : %s\n",Command3);
   
    return 0;
}
    