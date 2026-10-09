//Write generic program to multiplay two numbers

//Generic program banvaycha ahe mhnun c++ use kar karan c madhe template nahi 

#include<iostream>
using namespace std;

template<class T>
T Multiplay(T iNo1,T iNo2)
{
   T Ans ;
   Ans = iNo1 * iNo2;
   return Ans;
}
int main()
{

    int iRet =Multiplay(5,5);
    cout<<iRet;

    float fRet =Multiplay(5.2f,5.2f);
    cout<<"\n"<<fRet;
    

    return 0;
}
/*
27
27.04
*/