#include<stdio.h>
#include<fcntl.h>//file control .h  he header file file sathi ahe
int main()
{
    int fd = 0; 

    fd = open("Marvellous.txt" ,O_RDONLY);  //read only

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets successfully opened with fd :%d\n",fd);
    }
    return 0;
}
/*
C:\Users\user5\OneDrive\Desktop\LB\CVFS>myexe  ethe marvellous hoti 
File gets successfully opened with fd :3

C:\Users\user5\OneDrive\Desktop\LB\CVFS>myexe ethe manually delete keli 
Unable to open file */