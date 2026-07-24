#include<stdio.h>

int Summation(int Arr[],int iSize)  //function
{
  int iCnt=0;
  int iSum=0;
  for(iCnt =0;iCnt<iSize;iCnt++) 
  {
    iSum=iSum+Arr[iCnt];
  }
  return iSum;

}

int main()
{
  int iLength =4;

  int Brr[iLength]; //Error array legth should be constatnt 
  int iCnt =0;
  int iRet =0;

  printf("Enter input \n");
  
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
     scanf("%d",&Brr[iCnt]);
     
  }
  

  iRet=Summation(Brr,iLength); 

  printf("Addition of all elements %d\n",iRet);
  return 0;
}