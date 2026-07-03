//Accept N numbers from user and accept one another number as NO check whether NO is present or not
/*Enter number of input
6
Entered number is: 6
Enter 1 elements:85
Enter 2 elements:66
Enter 3 elements:3
Enter 4 elements:66
Enter 5 elements:93
Enter 6 elements:88
Enter NO66
TRUE

*/
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[] , int iLength , int iNO)
{
    int iCnt =0;
    for(iCnt =0 ;iCnt < iLength ;iCnt++)
    {
        if(Arr[iCnt] == iNO)
        {
            return TRUE;
        }
    }
}
int main()
{
    int iSize =0 ,iCnt =0 ,iNO =0;
    int *p = NULL;
    BOOL bRet = FALSE;
    printf("Enter number of input\n");
    scanf("%d",&iSize);

    printf("Entered number is: %d\n",iSize);

    p =(int *)malloc(iSize * sizeof(int));

    for(iCnt =0 ;iCnt <iSize ; iCnt++)
    {
        printf("Enter %d elements:",iCnt+1);
        scanf("%d" ,&p[iCnt]);

    }
    printf("Enter NO :");
    scanf("%d",&iNO);
    
    bRet =Check(p,iSize,iNO);
    if(bRet == TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    return 0;

}