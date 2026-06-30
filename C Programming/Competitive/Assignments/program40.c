//write a program which Accept area in square feet and convert it into square meter (1 Square feet =0.0929 Square Meter)
//Enter the Area in Square feet:5
//Square feet to Square Meter is 0.464500
//Enter the Area in Square feet:7
//Square feet to Square Meter is 0.650300
//time complexity : O(1)
#include<stdio.h>
double SquareMeter(double iNo)
{
    return iNo * 0.0929 ;
}
int main()
{
    double iValue = 0 ;
    double  dRet= 0.0;

    printf("Enter the Area in Square feet:");
    scanf("%lf",&iValue);

    dRet =SquareMeter(iValue);
    printf("Square feet to Square Meter is %lf",dRet);
    return 0;
}