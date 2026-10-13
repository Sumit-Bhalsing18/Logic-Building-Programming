//write a program which accept file name from user and count number of White Spaces from that file

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int CountSmall(char FName[])
{
  int fd = 0 , iRet = 0;
  int iCnt = 0;
  char Data[100] = {'\0'};

  //open file
  fd =open(FName,O_RDONLY);
  
  if(fd == -1)     //आपल्याला fd ची value -1 आहे का हे तपासायचे आहे. त्यासाठी == वापरायचे.
  {
    printf("Unable to open file");
    close(fd);
    return -1;
  }
  
  //read from file

//file location/Actual data store/ kiti store karaycha
  iRet =read(fd,Data,sizeof(Data)); //kiti byte data store zala hyachi value iRet madhe yeil

  if(iRet == -1)
  {
    printf("Unable to read from file");
    close(fd);
    return -1;
  }

  //count white spaces
  for(int i =0 ; i < iRet;i++)
  {
    if(Data[i] == ' ')
    {
      iCnt++;
    }
  }

  //file close
  close(fd);

  return iCnt;
  
}
int main()
{
  int iRet = 0;
  char FName[100];

  printf("Enter File Name :");
  scanf("%[^'\n']s",FName);

  iRet = CountSmall(FName);

  if(iRet != -1)
  {
      printf("Number of white spaces are %d",iRet);
  }
  return 0;

}
/*
Enter File Name :Sumit.txt
Number of white spaces are 7
*/