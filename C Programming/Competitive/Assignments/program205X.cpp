//write generic program to accept N values and reverse the contents

//Input  10 20 30 40 50 60 70
//Output 70 60 50 40 30 20 10

#include<iostream>
using namespace std;

template<class T>


void Reverse(T *arr,int iSize)                          
{
    //karan array ahe start 0 pasn hoto jar input 7 asel tar 6 size asel   
    for(int i = iSize - 1; i >= 0 ; i--)
    {
      cout<<"\t"<<arr[i];
    }
    cout<<endl;
 
}

int main()
{
  int arr[] = {10, 20, 30, 40, 50, 60, 70};
  float brr[] = {20.2,30.2,40.2,50.2,60.2,70.2};
  

  Reverse(arr,7);
  
  Reverse(brr,6);
  
  return 0;
}

