#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int fd = 0;
    int iRet = 0 ;
    char Data [100] = {'\0'} ; //ha data read karaycha ahe mhnun 
    char DataX[100] = {'\0'};

    fd = open("Marvellous.txt" ,O_RDONLY);  //vachaych ahe tar append chi kay garaj na

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File gets successfully opened with fd :%d\n",fd);

        iRet = read(fd,Data , 13);  

        printf("%d bytes gets successfully read \n",iRet) ;  //manje vachlya 

        printf("data from file is : %s\n" , Data);

        iRet = read(fd,DataX,3); //jay ganesh... he adhich hot hya madhe jay ajun yeil output la
                                 //offset asto file table madhe 
        printf("%d bytes gets successfully read \n",iRet) ;  //manje vachlya 

        printf("data from file is : %s\n" , DataX);

        close(fd);    
    }
    return 0;
}
//hya madhe data read file madhn kela ahe mhnun mokla bhand dile 