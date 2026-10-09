//Write generic program to accept N values from user and return largest values
//Write generic program to accept N values from user and return largest values

#include<iostream>
using namespace std;

template<class T>

T LargestNum(T *Arr , int iSize)
{
  T iSum = 0;
  T iLarge = Arr[0];

   for(int i = 1 ; i <= iSize ;i++)
   {
     if(Arr[i] > iLarge)
     {
       iLarge = Arr[i];
     }
   }
   return iLarge;
}
int main()
{


  int arr[] = {10,20,30,40,50};
  float brr[] = {10.0,3.7,9.8,8.7};

  int iSum = LargestNum(arr,5);
  printf("Largest value is %d",iSum);

  float fSum = LargestNum(brr,4);
  printf("\n Largest value is %f",fSum);

  return 0;
}
/*
Largest value is 50
 Largest value is 10.000000*/