//Write generic program to accept N values from user and return Smallest values

#include<iostream>
using namespace std;

template<class T>
T SmallestNum(T *Arr , int iSize)
{
  T iSmall = Arr[0];

    for(int i = 1 ; i < iSize ; i++)
    {
        if(Arr[i] < iSmall)
        {
          iSmall = Arr[i];
        }
    }
    return iSmall;
}
int main()
{
  
  int arr[] = {10,20,30,40,50};
  float brr[] = {10.0f,3.7f,9.8f,8.7f};

  int iRet = SmallestNum(arr,5);
  cout<<"Smallest value is"<<iRet;

  float fRet = SmallestNum(brr,4);
  cout<<"\nSmallest value is"<<fRet;

  return 0;
}
/*
Smallest value is 10
Smallest value is 3.7*/

