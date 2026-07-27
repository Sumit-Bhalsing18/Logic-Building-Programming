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
  //static memory allocation for object 
  // ArrayX aobj1(5); 
   
  ArrayX *aobj1 =new ArrayX(5);

  delete aobj1;

  cout<<"End of Main \n";
   
    return 0;
}
    
