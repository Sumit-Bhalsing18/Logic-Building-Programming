//Write generic program to accept N values from user and return addition of that values

#include<iostream>
using namespace std;

template<class T>

T AddN(T *Arr , int iSize)
{
  T iSum = 0;
   for(int i = 0 ; i < iSize ;i++)
   {
     iSum = iSum + Arr[i] ;
   }
   return iSum;
}
int main()
{


  int arr[] = {10,20,30,40,50};
  double brr[] = {10.0,3.7,9.8,8.7};

  int iSum = AddN(arr,5);
  printf("%d",iSum);

  double fSum = AddN(brr,4);
  printf("\n%lf",fSum);

  return 0;
}
/*
150
32.200001
*/