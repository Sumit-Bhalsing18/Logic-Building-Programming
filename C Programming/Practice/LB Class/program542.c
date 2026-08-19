#include<stdio.h>

int Display(int Arr[] , int iSize)
{
    int i =0 , iSum = 0;
    while(i< iSize)
    {
        iSum = iSum + Arr[i];
        i++;
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
