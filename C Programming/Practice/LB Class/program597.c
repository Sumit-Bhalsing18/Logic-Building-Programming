#include<stdio.h>
#include<fcntl.h>
#include<string.h>  //he memset sathi kel karan te tya header file madhe ahe

#define BUFFER_SIZE 1024

int main()
{
    char Buffer [BUFFER_SIZE] = {'\0'}; //rikama array
    char Fname[30] = {'\0'};  //file ch name ghenyasathi 

    int iRet = 0 , fd = 0; 
    
    printf("Enter the file name : \n");
    scanf("%[^'\n']s" , Fname);  //space asel mhnun special function lihil

    fd =open(Fname,O_RDONLY);//fakt read kel

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1; // main pasn os la challay return -1
    }

    while((iRet = read(fd ,Buffer,sizeof(Buffer))) != 0)   //data read kar jopyrnt 0 hot nahi topyrnt 
    {
        write(1,Buffer,iRet);   //ka karan jitk 
        memset(Buffer,'\0',sizeof(Buffer)); 
    }
    close(fd);
    return 0;
}