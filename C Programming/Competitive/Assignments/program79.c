//Accept N numbers from user and display all such numbers which contains 3 digits in it 
/*Enter number of input
5
Entered number is: 5
Enter 1 elements:111
Enter 2 elements:582
Enter 3 elements:4458
Enter 4 elements:1
Enter 5 elements:558
111     582     558
*/
#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[] , int iLength )
{
    int iCnt =0 ;      
   
    for(iCnt =0 ;iCnt < iLength ;iCnt++)
    {
      if(Arr[iCnt] >= 100 && Arr[iCnt] <= 999)
      {
        printf("%d\t",Arr[iCnt]);
      }
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
    Digits(p,iSize);

    return 0;

}