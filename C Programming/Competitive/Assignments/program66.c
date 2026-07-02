//Accept N numbers from user and return fequency of even numbers
/*Enter number of elements:6
Entered elements are :6
Enter 1 elements:85
Enter 2 elements:66
Enter 3 elements:3
Enter 4 elements:80
Enter 5 elements:93
Enter 6 elements:88
fequency of even numbers are 3:
*/
#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[] ,int iLength)
{
    int iCnt =0 ,iCount =0;
   for(iCnt =0 ;iCnt < iLength ;iCnt++)
   {
    if((Arr[iCnt] %2) ==0)
    {
      iCount++;
    }
   }
   return iCount;
}
int main()
{
    int iSize =0,iCnt =0 ,iRet =0;
    int *p = NULL;
    printf("Enter number of elements:");
    scanf("%d",&iSize);

    p =(int *)malloc(iSize * sizeof(int));//memoey milel *p la

    printf("Entered elements are :%d\n",iSize);

    for(iCnt =0 ;iCnt < iSize ;iCnt++)
    {
      printf("Enter %d elements:",iCnt+1);
      scanf("%d",&p[iCnt]);
    }
    iRet =CountEven(p ,iSize);
    printf("fequency of even numbers are :%d",iRet);
    free(p);
    return 0;
}