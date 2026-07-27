#include<iostream>
using namespace std;
#pragma pack(1)

class ArrayX
{
  private :
    int *Arr;
    int iSize;
    
  public :
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

  //function call
  

  delete aobj1;
   
    return 0;
}
    
