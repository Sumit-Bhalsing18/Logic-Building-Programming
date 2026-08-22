#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 100   //jar samja 4 lakh line cha code ahe ani jar aplyala size change karaychi asel tar fakt 100 chya jagyavr change kara toh baki saglya code madhe hoil autimatic 

int main()
{
    int fd = 0;
    int iRet = 0 ;
    char Data [BUFFER_SIZE] = {'\0'} ; 

    fd = open("Marvellous.txt" ,O_RDONLY); 

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File gets successfully opened with fd :%d\n",fd);

        iRet = read(fd,Data , 13);  

        printf("%d bytes gets successfully read \n",iRet) ; 

        printf("data from file is : %s\n" , Data);

        memset(Data,'\0',sizeof(100)); 

        iRet = read(fd,Data,3); 

        printf("%d bytes gets successfully read \n",iRet) ; 

        printf("data from file is : %s\n" , Data);

        close(fd);    
    }
    return 0;
}
//