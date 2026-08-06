
#include<iostream>
using namespace std;


template<class T>
T Maximum(T No1 ,T No2)
{
    T Ans ;
   if(No1 > No2)
   {
     Ans = No1;
   }
   else
   {
    Ans = No2;
   }
   return Ans;
}


int main()
{
    cout<<Maximum(20.5f,11.5f)<<"\n";
    cout<<Maximum(20.5,11.5)<<"\n";
    cout<<Maximum(20,11)<<"\n";

    return 0;
}