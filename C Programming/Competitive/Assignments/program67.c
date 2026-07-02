//Accept N numbers from user and return difference between frequency of even numbers and odd numbers 

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[] ,int iLength)
{
    int iCnt =0 ,iCount1 =0 ,iCount2 =0;
   for(iCnt =0 ;iCnt < iLength ;iCnt++)
   {
    if((Arr[iCnt] %2) ==0)
    {
      iCount1++;
    }
    else
    {
      iCount2++;
    }
   }
   return iCount2 -iCount1;
}
int main()
{
    int iSize =0,iCnt =0 ,iRet =0;
    int *p = NULL;
    printf("Enter number of elements:");
    scanf("%d",&iSize);
    p =(int *)malloc(iSize * sizeof(int));//memoey milel *p la
    if(p == NULL)
    {
      printf("Unable to allocate memory");
      return -1;
    }

    printf("Entered elements are :%d\n",iSize);

    for(iCnt =0 ;iCnt < iSize ;iCnt++)
    {
      printf("Enter %d elements:",iCnt+1);
      scanf("%d",&p[iCnt]);
    }
    iRet =Frequency(p ,iSize);
    printf("Difference between frequency even and odd:%d",iRet);
    free(p);
    return 0;
}