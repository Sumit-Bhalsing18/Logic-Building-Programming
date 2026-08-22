#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 100   
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
        lseek(fd,5, 0); //kashat , kuthlya location la jaych , kuthun jaych //offset gheun 5 bit pudh ja

        iRet = read(fd,Data,10);

        printf("%d bytes gets successfully read\n" , iRet);

        printf("Data from file is %s\n", Data);

        close(fd);
    }
    return 0;
}
