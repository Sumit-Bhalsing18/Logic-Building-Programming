//write generic program to accept N values and reverse the contents

//Input  10 20 30 40 50 60 70
//Output 70 60 50 40 30 20 10

#include<iostream>
using namespace std;

template<class T>


void Reverse(T *arr,int iSize)                          
{
    int i = 0 , j = 0;
    //Actual Swapping         //stopping condition 
    for(i = 0 , j = iSize -1 ; i < j ; i++ , j-- )
    {
      T temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
    
}

int main()
{
  int arr[] = {10, 20, 30, 40, 50, 60, 70};
  
  for(int i =0 ; i < 7 ; i++)
  {
    cout<<"\t"<<arr[i];
  }
  cout<<endl;

  Reverse(arr,7);  //jevha reverse function la call kel tevha actual array
                    // che content reverse zale tyach arr array madhe
  for(int i =0 ; i < 7 ; i++)
  {
    cout<<"\t"<<arr[i];
  }
   
  return 0;
}
/*
i = 0 → सुरुवातीचा index
j = iSize - 1 → शेवटचा index
i < j → दोघे middle ला येईपर्यंत
i++ → पुढे जा
j-- → मागे जा


        10      20      30      40      50      60      70
        70      60      50      40      30      20      10
*/

