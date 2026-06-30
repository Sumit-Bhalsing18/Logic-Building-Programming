//write a program which Accept distance in kilometer and convert it into meter (1 kilometer = 1000 meter)
//Enter distance in kilometer:12
//Kilometer to meter is 12000
//Enter distance in kilometer:5
//Kilometer to meter is 5000
#include<stdio.h>
//time complexity : O(1)
int KmToMeter(int iNo)
{
   return iNo * 1000;
}
int main()
{
    int iValue = 0 ;
    int  iRet= 0;

    printf("Enter distance in kilometer:");
    scanf("%d",&iValue);

    iRet =KmToMeter(iValue);
    printf("Kilometer to meter Conversion is %d",iRet);
    return 0;
}