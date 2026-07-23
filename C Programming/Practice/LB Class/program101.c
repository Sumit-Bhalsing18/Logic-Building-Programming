#include<stdio.h>

int main()
{
    int Arr[5] ={0}; //sagle 5 element zero zale ahet
    int iCnt=0;

    printf("Enter the elements\n");
    
    for(iCnt=0;iCnt<5;iCnt++)
    {
      scanf("%d",&Arr[iCnt]);
    }
   
    
    printf("Elements of array are \n");
    
    for(iCnt=0;iCnt<5;iCnt++)
    {
      printf("%d\n",Arr[iCnt]);
    }

    return 0;
}//time complexity of 2n bcoz there is 2 ffor loop and n is 5 for this code 