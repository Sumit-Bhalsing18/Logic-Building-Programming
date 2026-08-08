
#include<iostream>
using namespace std;


float Maximum(float No1 , float No2)
{
    float Ans;
           //if       //else
   No1 > No2 ? Ans = No1 : Ans = No2;
   
   return Ans;
}


int main()
{
    cout<<Maximum(20.5f,11.5f)<<"\n";

    return 0;
}