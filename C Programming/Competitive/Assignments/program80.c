//Accept N numbers from user and display summation of digit of number
/*
Enter number of input
6
Entered number is: 6
Enter 1 elements:8225
Enter 2 elements:665
Enter 3 elements:3
Enter 4 elements:76
Enter 5 elements:953
Enter 6 elements:858
Sum of digits = 17
Sum of digits = 17
Sum of digits = 3
Sum of digits = 13
Sum of digits = 17
Sum of digits = 21
*/
#include<stdio.h>
#include<stdlib.h>

int  DigtsSum(int Arr[] , int iLength )
{
    int iCnt =0 ,iSum =0 ,iDigit =0 ,iNo;      
   
    for(iCnt =0 ; iCnt < iLength ;iCnt++)
    {
        iNo = Arr[iCnt];  //array madhla first number manje 8225 dila
        
        iSum =0 ;  //pratek navin number sathi sum reset hoil
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            
            iNo = iNo /10;
        }
        printf("Sum of digits = %d\n",iSum);
    }
   
}
int main()
{
    int iSize =0 ,iCnt =0 ,iRet =0;
    int *p = NULL;
    
    printf("Enter number of input\n");
    scanf("%d",&iSize);

    printf("Entered number is: %d\n",iSize);

    p =(int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }
    for(iCnt =0 ;iCnt <iSize ; iCnt++)
    {
        printf("Enter %d elements:",iCnt+1);
        scanf("%d" ,&p[iCnt]);

    } 
    DigtsSum(p,iSize);
    free(p);
    return 0;

}