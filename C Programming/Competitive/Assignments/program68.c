//Accept N numbers from user check whether that numbers contains 11 in it or not
//jar question ch answer ha ya nahi madhe deyche ahe tar boolean use kar 
/*
Entered elements are :3
Enter 1 elements:4
Enter 2 elements:5
Enter 3 elements:11
11 is present */

#include<stdio.h>
#include<stdlib.h> //he malloc sathi use kartat 
#define TRUE 1    //there is no in built bool data type so programmers define it themselves
#define FALSE 0
typedef int BOOL; //bool is just another name for int

//in modern c you do not need to write typedef int bool only include one header file #include<stdbool.h>

BOOL Check(int Arr[] ,int iLength)
{
    int iCnt =0 ;
   for(iCnt =0 ;iCnt < iLength ;iCnt++)
   {
    if((Arr[iCnt]) ==11)
    {
      return TRUE;
    }
   }
   
}
int main()
{
    int iSize =0,iCnt =0 ;
    BOOL bRet = FALSE;

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
    bRet =Check(p ,iSize);
    
    if(bRet == TRUE)
    {
      printf("11 is present");
    }
    else
    {
      printf("11 is not present");
    }
    free(p);
    return 0;
}