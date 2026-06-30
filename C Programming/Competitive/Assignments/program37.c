//write a program which Accept width and height of rectangle from user and calculate its area (Area = Width *height)
//Enter the Width:5.3
//Enter the height:9.78
//Area of rectangle is 51.834000
//time complexity : O(1)
#include<stdio.h>
double RectangleArea(float fWidth,float fHeight)
{
    
   return fWidth * fHeight;
   
}
int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet= 0;

    printf("Enter the Width of Rectangle:");
    scanf("%f",&fValue1);

    printf("Enter the height of Rectangle:");
    scanf("%f",&fValue2);
    dRet =RectangleArea(fValue1,fValue2);
    printf("Area of rectangle is %lf",dRet);
    return 0;
}