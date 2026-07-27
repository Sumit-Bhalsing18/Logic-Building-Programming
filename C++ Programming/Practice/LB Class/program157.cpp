#include<iostream>
using namespace std;
#pragma pack(1)

class ArrayX
{
  public :
    int *Arr;
    int iSize;
    
    //Default constructor
    ArrayX()
    {

    }

    //parametrised constructor
    ArrayX(int x)
    {
      
    }
};

int main()
{
    
   ArrayX aobj1;  //default la jail
   ArrayX aobj2(5); //parameretrised 
  cout<<sizeof(aobj1)<<endl; //16  padding 
   
    return 0;
}
    
