/*
Algorithm which is used to perform addition of two number
START
   accept first number as no1
   accept second number as no2
   perform addition of no1 and no2
   display the reult
STOP
*/
#include<stdio.h>
int main()
{
    float i,j,k;
    printf("Enter first number\n");
    scanf("%f",&i);

    printf("Enter Second number\n");
    scanf("%f",&j);

    k=i+j;
    printf("Addition is :%f\n",k);

    return 0;
}