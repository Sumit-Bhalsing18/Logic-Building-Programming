#include<iostream>
using namespace std;
#pragma pack(1)

class ArrayX
{
  public :
    int *Arr;
    int iSize;
    
   
    ArrayX(int x)
    {
      cout<<"Inside constructor \n";
       iSize = x;             
       Arr = new int[iSize]; 
    }
           
    ~ArrayX()
    {
   
      delete []Arr; 
    }
};

int main()
{ 
   
  ArrayX *aobj1 =new ArrayX(5);

  //logic (function call)

  delete aobj1;
   
    return 0;
}
    
