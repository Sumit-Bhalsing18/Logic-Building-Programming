#include<iostream>
using namespace std;

class ArrayX
{
  public:
    int *Arr; //he pointer declaration ahe pointer sathi survatila memory allocate karava lagat nahi 
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

    void Accept()
    {
      int i =0;
      cout<<"Enter the elements :";
      
      for(i = 0 ; i< Size ;i++)
      {
        cin>>Arr[i];
      }
    }
    void Display()
    {
      int i =0;
      cout<<"Elements of the array are :";
      
      for(i = 0 ; i< Size ;i++)
      {
        cout<<Arr[i]<<"\n";
      }
    }
};

int main()
{
  ArrayX aobj(5);

  aobj.Accept();
  aobj.Display();
  return 0;
}