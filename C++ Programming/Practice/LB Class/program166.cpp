#include<iostream>
using namespace std;
#pragma pack(1)

class ArrayX
{
  private :
    int *Arr;
    int iSize;
    
  public :
  
    ArrayX( )
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
};

int main()
{ 
   
  ArrayX *aobj1 =new ArrayX(5);

  //function call
  ArrayX *aobj1 = new ArrayX();
  ArrayX *aobj2 = new ArrayX(5);

  delete aobj1;
  delete aobj2;
   
    return 0;
}
 //no   
