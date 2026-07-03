//Accept N numbers from user and accept range display all elements from that range
/*Enter number of input
6
Entered number is: 6
Enter 1 elements:85
Enter 2 elements:66
Enter 3 elements:3
Enter 4 elements:76
Enter 5 elements:93
Enter 6 elements:88
Enter range :Enter start :60
Enter end :90
66      76      88
*/
#include<stdio.h>
#include<stdlib.h>


void Range(int Arr[] , int iLength , int start,int end)
{
    int iCnt =0;
    for(iCnt =1 ;iCnt < iLength ;iCnt++)
    {
        if(Arr[iCnt] >= start && Arr[iCnt] <= end)
        {
           printf("%d\t",Arr[iCnt]);
        }
        
    }
    
}
int main()
{
    int iSize =0 ,iCnt =0 ,iNO1 =0 ,iNO2 =0;
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

    

    printf("Enter range :");
    printf("Enter start :");
    scanf("%d",&iNO1);

    printf("Enter end :");
    scanf("%d",&iNO2);
    
    Range(p,iSize,iNO1,iNO2);

    
    return 0;

}