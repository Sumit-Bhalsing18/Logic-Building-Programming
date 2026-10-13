//write a program which accept file name from user and count number of capital characters from that file 

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int CountCapital(char FName[])
{
  int fd = 0 , iCnt = 0;
  int iRet = 0;
  char Data[100] = {'\0'};//100 byte data read karu shakto 

  //open file in read mode
  fd =open(FName,O_RDONLY);
  if(fd == -1)
  {
    printf("Unable to create file");
    return -1;
  }
  
  //read the data  into local array 
  //read from file 
  iRet =read(fd,Data,sizeof(Data));  //kiti data read zala he iret madhe yeil 

  if(iRet == -1)
  {
    printf("Unable to read from file");
    close(fd);
    return -1;
  }
  
  //Count capital character
  for(int i =0 ; i < iRet;i++)
  {
    if(Data[i] >= 'A' && Data[i] <= 'Z')
    {
      iCnt++;
    }
  }

  //close file
  close(fd);

  return iCnt;
  
  
    

}
int main()
{
  char fileName[30];
  int iRet = 0;

  printf("Enter file name:");
  scanf("%[^'\n']s",fileName);

  iRet = CountCapital(fileName);

  if(iRet != -1)
  {
      printf("Number of capital character are %d",iRet);
  }
 

  return 0;
}
/*
iRet = read(fd, Data, sizeof(Data));

read()

फाइलमधून data वाचणारे function.

fd

फाइलचा file descriptor. open() केल्यानंतर मिळतो.

Data

वाचलेला data जिथे साठवायचा तो character array.

sizeof(Data)

Data array ची size. इथे Data[100] असल्यामुळे 100 bytes.

iRet =

read() ने किती bytes वाचले ते iRet मध्ये ठेवतो.*/