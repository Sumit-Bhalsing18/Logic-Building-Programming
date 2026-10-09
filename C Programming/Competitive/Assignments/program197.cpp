//Write generic program to find largest number from three numbers

//Generic program banvaycha ahe mhnun c++ use kar karan c madhe template nahi 

#include<iostream>
using namespace std;

template<class T>

T LargestNum(T iNo1,T iNo2,T iNo3)
{
   if(iNo1 > iNo2 && iNo1 > iNo3)
   {
     return iNo1;
   }
   else if(iNo2 > iNo1 && iNo2 > iNo3)
   {
    return iNo2;
   }
   else
   {
    return iNo3;
   }
}
int main()
{

    int iRet =LargestNum(5,7,8);
    cout<<iRet;

    float fRet =LargestNum(5.2,7.2,8.2);
    cout<<"\n"<<fRet;

    float dRet =LargestNum(50000,70000,80000);
    cout<<"\n"<<dRet;
    

    return 0;
}
