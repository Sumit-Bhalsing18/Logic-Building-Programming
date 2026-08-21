#include<stdio.h>
#include<fcntl.h>//file control .h  he header file file sathi ahe
int main()
{
    int fd = 0; //fd stand for file descripter  //fd manje ufdt chi index ti manje fd aste jith 3 khurchya rakhic hotya ani 3 la ast tee

    fd = creat("Marvellous.txt" ,0777);  //file ch name  , 

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File gets successfully created with fd :%d\n",fd);
    }
    return 0;
}