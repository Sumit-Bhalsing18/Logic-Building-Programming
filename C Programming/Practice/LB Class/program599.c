#include<stdio.h>
#include<fcntl.h>
#include<string.h>  //he memset sathi kel karan te tya header file madhe ahe

#define BUFFER_SIZE 1024

//change in parameter
//change in parameter
void DisplayFile(char *Filename)  //[] kadhun * use kel
{
    char Buffer [BUFFER_SIZE] = {'\0'}; //rikama array
    int iRet = 0 , fd = 0; 

    fd =open(Filename,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return ; 
    }

    while((iRet = read(fd ,Buffer,sizeof(Buffer))) != 0)   //data read kar jopyrnt 0 hot nahi topyrnt 
    {
        write(1,Buffer,iRet);   //ka karan jitk 
        memset(Buffer,'\0',sizeof(Buffer)); 
    }
   
    close(fd);
}
int main()
{
    char Fname[30] = {'\0'};  //file ch name ghenyasathi 
    
    printf("Enter the file name : \n");
    scanf("%[^'\n']s" , Fname);  //space asel mhnun special function lihil

    DisplayFile(Fname); //function la file ch name pathavl 
    return 0;
}