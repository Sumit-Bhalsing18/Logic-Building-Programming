#include<stdio.h>
#include<fcntl.h>
#include<string.h>  //he memset sathi kel karan te tya header file madhe ahe

#define BUFFER_SIZE 1024

#define ERR_OPEN -1

int CountCapital(char *Filename)  //[] kadhun * use kel
{
    char Buffer [BUFFER_SIZE] = {'\0'}; //rikama array
    int iRet = 0 , fd = 0 , iCount = 0 , i = 0; 

    fd =open(Filename,O_RDONLY);
    if(fd == -1)
    {
        return ERR_OPEN; 
    }

    while((iRet = read(fd ,Buffer,sizeof(Buffer))) != 0)   //data read kar jopyrnt 0 hot nahi topyrnt 
    {
        for( i =0 ; i < iRet ; i++)
        {
            if(Buffer[i] >= 'A'  && Buffer[i] <= 'Z' )
            {
                iCount++;  
            }
        }
        memset(Buffer,'\0',sizeof(Buffer)); 
        
    }
   
    return iCount;
}
int main()
{
    char Fname[30] = {'\0'};  //file ch name ghenyasathi 
    int iRet = 0;
    printf("Enter the file name : \n");
    scanf("%[^'\n']s" , Fname);  //space asel mhnun special function lihil

    iRet = CountCapital(Fname); //function la file ch name pathavl

    if(iRet == ERR_OPEN)
    {
        printf("Unable to open file");
    }
    else
    {
         printf("number of Capital charcter are %d\n",iRet); 
    }
   
    return 0;
}