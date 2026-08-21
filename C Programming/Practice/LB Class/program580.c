#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int fd = 0;
    int iRet = 0 ;
    char Data [] = "Marvellous Infosystem";

    fd = open("Marvellous.txt" ,O_RDWR | O_APPEND);  

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File gets successfully created with fd :%d\n",fd);

        iRet = write(fd,Data,strlen(Data));  //atta purn string print karaychi ahe tar strlen manje purn data string print hoil 

        printf("%d bytes gets successfully written \n",iRet) ;
        close(fd);    
    }
    return 0;
}
