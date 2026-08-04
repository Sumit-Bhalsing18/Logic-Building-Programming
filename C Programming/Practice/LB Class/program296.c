#include<stdio.h>

int main()
{
    int i =11;
    int j= 21;

    int temp =0;
    temp =i;
    i= j;
    j= temp;

    printf("%d\n",i);
    
    printf("%d\n",j);
    return 0;
}