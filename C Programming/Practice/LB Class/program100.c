#include<stdio.h>

int main()
{
    int Arr[5] ={0}; //sagle 5 element zero zale ahet
    int iCnt=0;

    printf("Enter the elements\n");
 
    scanf("%d",&Arr[0]);
    scanf("%d",&Arr[1]);
    scanf("%d",&Arr[2]);
    scanf("%d",&Arr[3]);
    scanf("%d",&Arr[4]);
    
    printf("Elements of array are \n");
    
    for(iCnt=0;iCnt<5;iCnt++)
    {
      printf("%d\n",Arr[iCnt]);
    }

    return 0;
}