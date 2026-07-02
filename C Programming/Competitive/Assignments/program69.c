//Accept N numbers from user and return frequency of 11 form it

/*Enter number of elements:4
Entered elements are :4
Enter 1 elements:58
Enter 2 elements:54
Enter 3 elements:11
Enter 4 elements:11
frequency of 11 form it is :2
*/
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[] ,int iLength)
{
    int iCnt =0 ,iCount =0;
   for(iCnt =0 ;iCnt < iLength ;iCnt++)
   {
    if((Arr[iCnt]) ==11)
    {
      iCount++;
    }
   }
   return iCount;
   
}
int main()
{
    int iSize =0,iCnt =0,iRet =0 ;
    

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
    printf("frequency of 11 form it is :%d",iRet);
 
    free(p);
    return 0;
}