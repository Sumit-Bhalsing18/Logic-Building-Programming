#include<iostream>
using namespace std;
#pragma pack(1)

class ArrayX
{
  public :
    int *Arr;
    int iSize;
    
   

    //parametrised constructor
    ArrayX(int x)
    {
      cout<<"Inside constructor \n";
       iSize = x;              //charactristic initialisation
       Arr = new int[iSize]; //resurce alloaction
    }
    //destructor         
    ~ArrayX()
    {
      cout<<"Inside destructor \n";
      delete []Arr; // resource deallocation 
    }
};

int main()
{
    
   ArrayX aobj1(5); 
   
 
   
    return 0;
}
    
