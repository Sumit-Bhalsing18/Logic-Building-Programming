#include<stdio.h>

float AddTwoNumbers(float fno1,float fno2) //dukan ahe //  dosa banavnara manus,function 
{
    float fAns =0.0f;
    fAns=fno1+fno2;
    return fAns; //pishvit result madhe  ghetla 

};
int main()     //dosa banavnara manus
{
    float fValue1=0.0f;         //to store first input, auto storage memory
    float fValue2=0.0f;         //to store second input
    float fResult=0.0f;         //to store the result
 
    printf("Enter first number\n");
    scanf("%f",&fValue1);

    printf("Enter Second number\n");
    scanf("%f",&fValue2);       //perfoem Addition

    fResult=AddTwoNumbers(fValue1,fValue2);//calling to function control 22 to 3
    printf("Addition is :%f\n",fResult);

    return 0;
}
//end user->main->function  //end user direct bolat nahi function sobath
