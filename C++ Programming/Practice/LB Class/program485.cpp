#include<iostream>
using namespace std;

class ArrayX
{
  public:
    int *Arr ;
    int Size;

    ArrayX(int No)  //kiti elemeent pahije user kadun ghenar
    {
      Size = No;
      Arr = new int[Size];   // 5 element sathi memory milel dynamic 
    }
    ~ArrayX()
    {
      delete []Arr;  //ass kelyane sagla array janar delete honar
    }
};

int main()
{
  ArrayX aobj(5);
  return 0;
}