#include<stdio.h>
#include<stdlib.h>


//time complexity O(N)
int Minimum(int Arr[],int iSize)
{
    int iCnt =0;
    int iMin = 0;   
    
    iMin = Arr[0] ;
    for(iCnt =0;iCnt < iSize;iCnt ++)

    {
        if(Arr[iCnt] < iMin)
        {
          
           iMin = Arr[iCnt];
          
        }
       
    }
    return iMin;
}
int main()
{
    int *Brr=NULL;
    int iLength=0,iCnt =0 ,iRet =0;
  

    printf("Enter the number of elements\n");
    scanf("%d",&iLength);
    Brr= (int *) malloc (sizeof(int) * iLength);

    printf("Enter the Elements ");

    for(iCnt=0;iCnt < iLength;iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }
    printf("Enter the element that you want to search \n");
    scanf("%d",&iLength);
    iRet = Minimum(Brr,iLength);

    printf("Minimum element is %d",iRet);
    
    free(Brr);

    return 0;
}