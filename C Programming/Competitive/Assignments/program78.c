//Accept N numbers from user and return the difference between largest and smallest number 
/*Enter number of input
6
Entered number is: 6
Enter 1 elements:85
Enter 2 elements:66
Enter 3 elements:3
Enter 4 elements:66
Enter 5 elements:93
Enter 6 elements:88
the difference between largest and smallest number :90
*/
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[] , int iLength )
{
    int iCnt =0 ;       // arr 1  2  3  4
    int iMax = Arr[0]; //array cha pahila element motha ahe ass gruhit dhara 
    int iMin = Arr[0];
    for(iCnt =0 ;iCnt < iLength ;iCnt++)
    {
        if((Arr[iCnt]) > iMax) //2 > 1?
        {
           iMax = Arr[iCnt];  //if yess iMax = 2
        }   
        else if((Arr[iCnt]) < iMin)
        {
           iMin = Arr[iCnt];
        }
    }
    return iMax -iMin;
   
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
    iRet =Difference(p,iSize);

    printf("the difference between largest and smallest number :%d",iRet);
    return 0;

}