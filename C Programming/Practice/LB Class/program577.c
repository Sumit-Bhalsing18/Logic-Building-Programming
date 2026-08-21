#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
    int fd = 0;
    int iRet = 0 ;

    fd = open("Marvellous.txt" ,O_RDWR);  //REDA PN KELI ANI WRITE PN 

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File gets successfully created with fd :%d\n",fd);

        iRet = write(fd,"Jay Ganesh...",13); //kashyat lihaych , kay lihaych ,kiti lihaych 

        printf("%d bytes gets successfully written \n",iRet) ;//iret madhe kiti bytes lihilya gelya te kalt
        close(fd);    
    }
    return 0;
}