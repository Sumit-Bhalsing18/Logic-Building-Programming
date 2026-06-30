//write a program which Accept temperature in faherenheit and convert it into celsius (1 celsius = (Faherenheit -32) * (5/9))
//Enter the temperature in Fahrenheit:34              (34 -32) * (5/9)
//fahrenheit temperature in celsius is  1.111111
//Enter the temperature in Fahrenheit:10
//fahrenheit temperature in celsius is  -12.222222
//time complexity : O(1)
#include<stdio.h>
double KmToMeter(int iNo)
{
    double Celsius =0.0;
    Celsius = ((iNo - 32) * (5.0/9.0));
    return Celsius;
}
int main()
{
    int iValue = 0 ;
    double  iRet= 0.0;

    printf("Enter the temperature in Fahrenheit:");
    scanf("%d",&iValue);

    iRet =KmToMeter(iValue);
    printf("fahrenheit temperature in celsius is  %lf",iRet);
    return 0;
}