
#include<iostream>
using namespace std;


template<class X>
X Maximum(X No1 ,X No2 ,X No3)
{
    X Ans ;
   if(No1 > No2 && No1 > No3)
   {
     return No1;
   }
   else if(No2 > No1 && No2 > No3)
   {
     return No2;
   }
   else
   {
     return No3;
   }
}


int main()
{
    cout<<Maximum(10.5f,21.5f,31.5f)<<"\n";
    cout<<Maximum(10.5,25.5,3.5)<<"\n";
    cout<<Maximum(20,51,31)<<"\n";

    return 0;
}