#include<stdio.h>
#include<fcntl.h>//file control .h  he header file file sathi ahe
#include<unistd.h> //only linus based OS
int main()
{
    int fd = 0; //fd stand for file descripter  

    fd = creat("Marvellous.txt" ,0777);  //file ch name  , 

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File gets successfully created with fd :%d\n",fd);

        close(fd);   //file open hoil tevha tar close hoil na mhnun else madhe lihil fakt 
    }
    return 0;
}