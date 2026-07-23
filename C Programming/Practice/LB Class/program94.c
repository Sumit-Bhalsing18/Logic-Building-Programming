#include<stdio.h>
int main()
{
    int Arr[]={10,20,30,40,50}; //static array allocation 

    printf("%d\n",Arr); //first element  address of array 
    printf("%d\n",&Arr);//Address of whole array
    printf("%d\n",Arr[0]);//10

    return 0;
}