//Accept N numbers from user and return difference between summation of even elements and summation of odd elements
//Enter number of elements :6
//Enter 6 elements
//Enter elements 1 :85
//Enter elements 2 :66
//Enter elements 3 :3
//Enter elements 4 :80
//Enter elements 5 :93
//Enter elements 6 :88
//Result is 53
//Enter number of elements :5
//Enter 5 elements
//Enter elements 1 :1
//Enter elements 2 :2
//Enter elements 3 :3
//Enter elements 4 :4
//Enter elements 5 :5
//Result is -3
#include<stdio.h>
#include<stdlib.h>  // dynamic memory allocation sathi dyayla lagti 

int Difference(int Arr[] , int iLength)
{
    int iCnt =0 ,iSum1 =0 ,iSum2 =0;
    for(iCnt =0 ;iCnt <iLength;iCnt++)
    {
        if((Arr[iCnt]%2) ==0)
        {
            iSum1 = iSum1 +Arr[iCnt] ;
        }
        else
        {
            iSum2 = iSum2 + Arr[iCnt] ;
        }
    }
    return iSum1 - iSum2;

}
int main()
{
    int iSize = 0 ,iCnt =0 ,iRet =0 , iLength =0;
    int *p =NULL;                        //pointer (Array dynamically store karnar )

    printf("Enter number of elements :");
    scanf("%d",&iSize);                //user kiti numbers denar te gheto 

    p =(int *)malloc(iSize * sizeof(int)); // Dyanamic array create karto //memory allocation

    if(p ==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements \n",iSize);  //display karnyasathi screen var 
    
    for(iCnt =0 ;iCnt < iSize;iCnt++)
    {
        printf("Enter elements %d :",iCnt+1);   //jar iCnt lihil asta tar user la confusion hot manje iCnt ha ) ahe tar console var lihun yete enter elements
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);   // array ani size function la deto

    printf("Result is %d" ,iRet);
    free(p);   //allocated memory free karto 
    return 0;
}