//Accept N numbers from user and accept one another number as NO return frequency if NO form it

/*Enter number of elements:6
Entered elements are :6
Enter 1 elements:85
Enter 2 elements:66
Enter 3 elements:3
Enter 4 elements:66
Enter 5 elements:93
Enter 6 elements:88
Enter NO
66
frequency if NO form input:2

Enter number of elements:6
Entered elements are :6
Enter 1 elements:85
Enter 2 elements:11
Enter 3 elements:3
Enter 4 elements:15
Enter 5 elements:11
Enter 6 elements:111
Enter NO
12
frequency if NO form input:0
*/
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[] ,int iLength ,int iNO)
{
    int iCnt =0 ,iCount =0;
   for(iCnt =0 ;iCnt < iLength ;iCnt++)
   {
    if((Arr[iCnt]) == iNO)
    {
      iCount++;
    }
   }
   return iCount;
   
}
int main()
{
    int iSize =0,iCnt =0 ,iRet =0 ,iNO =0;
    

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

    printf("Enter NO \n");
    scanf("%d",&iNO);

    iRet =Frequency(p,iSize,iNO); //pointer name with its size and iNO
    
    printf("frequency if NO form input:%d",iRet);
    free(p);
    return 0;
}