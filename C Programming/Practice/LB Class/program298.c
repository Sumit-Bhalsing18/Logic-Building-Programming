#include<stdio.h>

//call by address
void Swap(int *ptr1 ,int *ptr2)
{
   
     int temp =0;
     
    temp = *ptr1;
    *ptr1= *ptr2;
    *ptr2= temp;
}
int main()
{
    int i =11;
    int j= 21;
    
    Swap(&i ,&j);
    printf("%d\n",i);
    
    printf("%d\n",j);
    return 0;
}