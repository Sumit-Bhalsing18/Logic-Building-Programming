//write aprogram which accept radius of circle from user and calculate its area.
//consider value of PI 3.14 (Area = PI * Radius *Radius)
//Input : 5.3
//output : 88.2026
//Input : 10.4
//output : 339.6224
//time complexity : O(1)
#include<stdio.h>
#define PI 3.14
double CircleArea(float fRadius)
{
  return PI*fRadius*fRadius ;
}
int main()
{
    float fValue =0.0f ;
    double dRet=0;
    printf("Enter the radius: ");
    scanf("%f",&fValue);
    dRet =CircleArea(fValue);
    printf("Area of cicle is :%lf:",dRet);
    return 0;
}