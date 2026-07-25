#include<stdio.h>
#include<stdlib.h> 

int Summation(int Arr[],int iSize)
{
  int iCnt=0;
  int iSum=0;
  printf("Elements of the array are \n");

  for(iCnt=0;iCnt<iSize;iCnt++)
  {
    iSum=iSum+Arr[iCnt];
  }
  return iSum;
}
int main()
{
  int *Brr =NULL;//poniter null la lihi
  int iLength=0, iCnt=0,iRet=0;
  

  //Step 1 :- Accept elements from user
  printf("Enter number of elements :\n");
  scanf("%d",&iLength);

  //Step 2; allocate the memory
  Brr=(int*)malloc(iLength * sizeof(int));  //5 *4 =20 allocate memory on heap

//Step 3: Accept va;ues from user
printf("Enter the eloements\n");
   
for(iCnt=0;iCnt<iLength;iCnt++)
{
  scanf("%d",&Brr[iCnt]);
}
//Step 4 : use the memory(Logic)
iRet=Summation(Brr,iLength);
printf("Addition is :%d\n",iRet);

//Step 5: Deallocate the memory 

free(Brr);
  
  return 0;
}