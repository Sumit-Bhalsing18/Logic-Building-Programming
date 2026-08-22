#include<stdio.h>
#include<fcntl.h>
#include<string.h>  //he memset sathi kel karan te tya header file madhe ahe

#define BUFFER_SIZE 1024

//change in parameter
//change in parameter
int CalculateFileSize(char Filename[]) 
{
    char Buffer [BUFFER_SIZE] = {'\0'}; //rikama array
    int iRet = 0 , fd = 0 , iSize = 0;; 

    fd =open(Filename,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1; 
    }

    while((iRet = read(fd ,Buffer,sizeof(Buffer))) != 0)   //data read kar jopyrnt 0 hot nahi topyrnt 
    {
        iSize = iSize + iRet;   
    }

    close(fd);
    return iSize;
}
int main()
{
    char Fname[30] = {'\0'};  //file ch name ghenyasathi 
    int iRet = 0;
    printf("Enter the file name : \n");
    scanf("%[^'\n']s" , Fname);  //space asel mhnun special function lihil

    iRet = CalculateFileSize(Fname); //function la file ch name pathavl 

    printf("file size is %d bytes\n:", iRet);
    return 0;
}