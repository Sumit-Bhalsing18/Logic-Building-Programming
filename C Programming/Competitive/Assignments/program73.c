//Accept N numbers from user and accept one another number as NO return index of last occurrence of that NO
/*Enter number of input
6
Entered number is: 6
Enter 1 elements:85
Enter 2 elements:66
Enter 3 elements:3
Enter 4 elements:66
Enter 5 elements:93
Enter 6 elements:88
Enter NO :66
index of last occurrence of that NO :3
*/
#include<stdio.h>
#include<stdlib.h>


int LastOcc(int Arr[] , int iLength , int iNO)
{
    int iCnt =0;
    for(iCnt =iLength ;iCnt > 0 ;iCnt--)
    {
        if(Arr[iCnt] == iNO)
        {
           return iCnt;
        }
        
    }
    return -1;
}
int main()
{
    int iSize =0 ,iCnt =0 ,iNO =0 ,iRet =0;
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
    printf("Enter NO :");
    scanf("%d",&iNO);
    
    iRet =LastOcc(p,iSize,iNO);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
       printf("index of last occurrence of that NO :%d",iRet);
    }
    
    return 0;

}