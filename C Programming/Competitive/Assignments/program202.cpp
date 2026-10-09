//write generic program to accept N values and count frequency of any specific value

#include<iostream>
using namespace std;

template<class T>


int CountFreq(T *arr,int iSize ,T iValue)                          
{
     int iCount = 0;
    for(int i = 0; i < iSize ; i++)
    {
      if(arr[i] == iValue)
      {
        iCount++;
      }
    }
    cout<<endl;
    return iCount;   
}

int main()
{
  int arr[] = {10,20,30, 40,20,20,20,20,20};
  float brr[] = {10.2,20.2,30.2,40.2,10.2,11.2,10.2};
  int iRet = 0;

  iRet =CountFreq(arr,9,20);
  cout<<iRet;

  iRet = CountFreq(brr,7,10.2f);
  cout<<iRet;
  return 0;
}
/*
6
3
*/
