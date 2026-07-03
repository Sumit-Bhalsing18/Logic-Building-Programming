//Accept N numbers from user and return the smallest number
/*Enter number of input
5
Entered number is: 5
Enter 1 elements:1
Enter 2 elements:2
Enter 3 elements:3
Enter 4 elements:5
Enter 5 elements:6
smallest number is :1
*/
#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[] , int iLength )
{
    int iCnt =0;       // arr 1  2  3  4
    int iMin = Arr[0]; //array cha pahila element motha ahe ass gruhit dhara 
    for(iCnt =0 ;iCnt < iLength ;iCnt++)
    {
        if((Arr[iCnt]) < iMin) //2 > 1?
        {
           iMin = Arr[iCnt];  //if yess iMax = 2
        }   
    }
    return iMin;
   
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
    iRet =Maximum(p,iSize);

    printf("smallest number is :%d",iRet);
    return 0;

}