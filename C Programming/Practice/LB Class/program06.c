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
    float i=0.0f,j=0.0f,k=0.0f; //variable creation or intialize with default values bcoz it is good programming practice
    printf("Enter first number\n");
    scanf("%f",&i);

    printf("Enter Second number\n");
    scanf("%f",&j);

    k=i+j;
    printf("Addition is :%f\n",k);

    return 0;
}
