//write generic program to accept N values and serach first occerence of any specific value

#include<iostream>
using namespace std;

template<class T>


int Occurence(T *arr,int iSize ,T iValue)                          
{
     int iCount = 1;
    for(int i = 0; i < iSize ; i++)
    {
      if(arr[i] == iValue)
      {
        return iCount;
      }
      iCount++;
    }
    cout<<endl;
    return -1;
 
}

int main()
{
  int arr[] = {10,30, 40,20,20,20,20,20};
  float brr[] = {20.2,30.2,40.2,11.2,10.2};
  int iRet = 0;

  iRet =Occurence(arr,8,20);
  cout << "First occurrence of 20: " << iRet << endl;

  iRet =Occurence(brr,5,10.2f);
  cout << "First occurrence of 10.2: " << iRet << endl;
  return 0;
}
/*
First occurrence of 20: 4
First occurrence of 10.2: 5
*/
