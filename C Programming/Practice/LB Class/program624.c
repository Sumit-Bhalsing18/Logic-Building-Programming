#include<stdio.h>
int main()
{
    char str[80] = {'\0'};

    printf("Enter command :\n");
    //scanf("%[^'\n']s" ,str);
    
    fgets(str,sizeof(str),stdin);//libaray function 
    printf("Entered command is :%s\n" ,str);
    return 0;
}