#include<stdio.h>

int Display(int Arr[] , int iSize)
{
    static int i =0 , iSum = 0;
    if(i< iSize)
    {
        iSum = iSum + Arr[i];
        i++;
        Display(Arr,iSize);
    }
    return iSum;
}
int main()
{
    int Brr[] = {10,20,30,40,50};
    int iRet = 0;
    iRet =Display(Brr,5);
    printf("summation is : %d\n",iRet );

    return 0;
}
