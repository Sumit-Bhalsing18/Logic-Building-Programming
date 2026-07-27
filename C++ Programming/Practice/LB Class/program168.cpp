#include<iostream>
using namespace std;
#pragma pack(1)

class ArrayX
{
  private :
    int *Arr;
    int iSize;
    
  public :
  //parametrised constructor with default 
    ArrayX( int x=5)
    {
       iSize = 5;             
       Arr = new int[iSize]; 
    }

    ArrayX(int x)
    {
      
       iSize = x;             
       Arr = new int[iSize]; 
    }
           
    ~ArrayX()
    {
      delete []Arr; 
    }
    void Accept()
    {
      cout<<"Enter the"
    }
};

int main()
{ 
   
  ArrayX *aobj1 =new ArrayX(5);

  //function call
  ArrayX *aobj1 = new ArrayX();  //parametrised 
  ArrayX *aobj2 = new ArrayX(5); //parametrised 

  delete aobj1;
  delete aobj2;
   
    return 0;
}
    
