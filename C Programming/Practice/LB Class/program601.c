#include<stdio.h>
#include<fcntl.h>
#include<string.h>  //he memset sathi kel karan te tya header file madhe ahe
#include<sys/stat.h>

#define BUFFER_SIZE 1024

//change in parameter
//change in parameter
int CalculateFileSize(char Filename[]) 
{
   struct stat sobj;  

   stat(Filename ,&sobj);//rkama form de te bharun detil 

   return sobj.st_size;
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