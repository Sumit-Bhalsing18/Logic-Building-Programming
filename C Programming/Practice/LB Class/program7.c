#include<stdio.h>
int main()
{
    float fValue1=0.0f;         //to store first input
    float fValue2=0.0f;         //to store second input
    float fResult=0.0f;         //to store the result
 
    printf("Enter first number\n");
    scanf("%f",&fValue1);

    printf("Enter Second number\n");
    scanf("%f",&fValue2);       //perfoem Addition

    fResult=fValue1+fValue2;
    printf("Addition is :%f\n",fResult);

    return 0;
}