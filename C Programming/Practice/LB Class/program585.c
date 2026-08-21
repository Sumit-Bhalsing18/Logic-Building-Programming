#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int fd = 0;
    int iRet = 0 ;
    char Data [100] = {'\0'} ; //ha data read karaycha ahe mhnun 

    fd = open("Marvellous.txt" ,O_RDONLY);  //vachaych ahe tar append chi kay garaj na

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

        memset(Data,'\0',sizeof(100)); //karan hardcoded lihine yogya nast 

        iRet = read(fd,Data,3); 

        printf("%d bytes gets successfully read \n",iRet) ; 

        printf("data from file is : %s\n" , Data);

        close(fd);    
    }
    return 0;
}
//