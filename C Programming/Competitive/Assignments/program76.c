//Accept N numbers from user and return the largest number
/*Enter number of input
5
Entered number is: 5
Enter 1 elements:1
Enter 2 elements:2
Enter 3 elements:3
Enter 4 elements:4
Enter 5 elements:5
largest number is :5
*/
#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[] , int iLength )
{
    int iCnt =0;       // arr 1  2  3  4
    int iMax = Arr[0]; //array cha pahila element motha ahe ass gruhit dhara 
    for(iCnt =0 ;iCnt < iLength ;iCnt++)
    {
        if((Arr[iCnt])> iMax) //2 > 1?
        {
           iMax = Arr[iCnt];  //if yess iMax = 2
        }   
    }
    return iMax;
   
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
    iRet = Minimum(p,iSize);

    printf("largest number is :%d",iRet);
    return 0;

}