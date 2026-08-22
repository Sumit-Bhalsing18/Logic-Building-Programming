#include<stdio.h>
#include<fcntl.h>
#include<string.h>  

#define BUFFER_SIZE 1024

int main()
{
    write(1, "Jay Ganesh...",13);// 0   1         2       he rakhiv khurchya 
                            //std in  , std out ,out error   , printf() internally call write()
    return 0;
}