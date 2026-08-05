//Accept number and count number of bit 1 present in 151 we think answer is 2 this is wrong 
//bcoz we going to check number of 1 in binary format of  151
//apn binary madhe convert karto ahe it is not valid answer correct yeil pn apn directly decimal to binary madhe convert karto ahe 
//but it is against the company policy dont convert it into binary explicitly
#include<stdio.h>
int main()
{
    
  int iNo =0 ,iDigit =0 ,iCount =0;
  printf("Enter number :");
  scanf("%d",&iNo);

  while(iNo !=0)
  {                  //1 or 0  jar 0 ala tar tasach rahil ani 1 ala tar add hoil 
   iCount = iCount + (iNo % 2);
    iNo = iNo /2;
  }
  printf("1 present in number:%d",iCount);
  return 0;
}
