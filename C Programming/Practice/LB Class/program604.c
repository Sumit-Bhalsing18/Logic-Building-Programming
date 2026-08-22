#include<stdio.h>
#include<fcntl.h>
#include<string.h>  //he memset sathi kel karan te tya header file madhe ahe

#define BUFFER_SIZE 1024

//change in parameter
//change in parameter
void FileCopy(char FilenameSrc[] , char FilenameDest[]) 
{
    char Buffer [BUFFER_SIZE] = {'\0'}; //aplyala 1 mug lagel
    int iRet = 0 , fdSrc = 0 , fdDest = 0; 

    fdSrc =open(FilenameSrc,O_RDONLY);
    if(fdSrc == -1)
    {
        printf("Unable to open Source file\n");
        return; 
    }

    fdDest = creat(FilenameDest , 0777);  //destination file create 
    if(fdDest == -1)
    {
        printf("Unable to create Destination  file\n");
        return; 
    }

    while((iRet = read(fdSrc ,Buffer,sizeof(Buffer))) != 0)   //data read kar jopyrnt 0 hot nahi topyrnt 
    {
        write(fdDest , Buffer,iRet);//ethe file madhe lihil jail
        memset(Buffer,'\0',sizeof(Buffer));

    }

    close(fdSrc);
    close(fdDest);
}
int main()
{
    char FnameSrc[30] = {'\0'};  //file ch name ghenyasathi 
    char FnameDest[30] = {'\0'}; 
   
    printf("Enter the Source filename : \n"); //astitvat asleli file
    scanf("%[^'\n']s" , FnameSrc);

    printf("Enter the Destination filename : \n");  //kori vahi
    scanf(" %[^'\n']s" , FnameDest);


    FileCopy(FnameSrc , FnameDest); //function la file ch name pathavl 

    return 0;
}