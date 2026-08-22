#include<stdio.h>
#include<fcntl.h>
#include<string.h>  
#include<sys/stat.h>

#define BUFFER_SIZE 1024

//change in parameter
//change in parameter
void DisplayFileInformation(char Filename[]) 
{
   struct stat sobj;  

   stat(Filename ,&sobj);//rkama form de te bharun detil 

   printf("File name : %s\n",Filename);
   printf("Inode Number : %llu \n" , sobj.st_ino);
   printf("File size is : %d\n",sobj.st_size);
}
int main()
{
    char Fname[30] = {'\0'};  //file ch name ghenyasathi 
   
    printf("Enter the file name : \n");
    scanf("%[^'\n']s" , Fname);  //space asel mhnun special function lihil

    DisplayFileInformation(Fname); //function la file ch name pathavl 

    return 0;
}