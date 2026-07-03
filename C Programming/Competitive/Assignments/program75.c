//Accept N numbers from user and return product of all odd elements
/*Enter number of input
6
Entered number is: 6
Enter 1 elements:15
Enter 2 elements:66
Enter 3 elements:3
Enter 4 elements:70
Enter 5 elements:10
Enter 6 elements:88
product of all odd elements :45

Enter number of input
6
Entered number is: 6
Enter 1 elements:44
Enter 2 elements:66
Enter 3 elements:72
Enter 4 elements:70
Enter 5 elements:10
Enter 6 elements:88
product of all odd elements :0
*/
#include<stdio.h>
#include<stdlib.h>


int Product(int Arr[] , int iLength )
{
    int iCnt =0 ,iMul =1;
    for(iCnt =0 ;iCnt < iLength ;iCnt++)
    {
        if((Arr[iCnt]%2) != 0)
        {
           iMul = iMul * Arr[iCnt];
        }
        
    }
   if(iMul ==1)
   {
     return 0;
   }
   else
   {
     return iMul;
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
    
    iRet =Product(p,iSize);

    printf("product of all odd elements :%d",iRet);
    return 0;

}