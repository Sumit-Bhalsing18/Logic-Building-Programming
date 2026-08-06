
#include<iostream>
using namespace std;


template<class X>
 X Maximum(X No1 ,X No2)
{
    X Ans ;
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