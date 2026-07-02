//Accept N numbers from user and display all such elements which are divisible by 3 & 5
/*Enter number of elements:6
Entered elements are :6
Enter 1 elements:85
Enter 2 elements:66
Enter 3 elements:3
Enter 4 elements:15
Enter 5 elements:93
Enter 6 elements:88
  15*/

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[] ,int iLength)
{
    int iCnt =0 ;
   for(iCnt =0 ;iCnt < iLength ;iCnt++)
   {
    if((Arr[iCnt] %3) ==0 && (Arr[iCnt] %5) ==0)
    {
      printf("  %d" ,Arr[iCnt]);
    }
   }
}
int main()
{
    int iSize =0,iCnt =0;
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
    Display(p ,iSize);
    
    free(p);
    return 0;
}