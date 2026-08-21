#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
    int fd = 0;

    fd = open("Marvellous.txt" ,O_RDWR);  //REDA PN KELI ANI WRITE PN 

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File gets successfully created with fd :%d\n",fd);

        write(fd,"Jay Ganesh...",13); //kashyat lihaych , kay lihaych ,kiti lihaych 
        close(fd);    
    }
    return 0;
}