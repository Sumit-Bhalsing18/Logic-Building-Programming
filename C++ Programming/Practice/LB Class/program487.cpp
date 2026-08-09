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

    void Accept()
    {
      int i =0;
      cout<<"Enter the elements : \n";
      
      for(i = 0 ; i< Size ;i++)
      {
        cin>>Arr[i];
      }
    }
    void Display()
    {
      int i =0;
      
      cout<<"Elements of the array are : \n";
      
      for(i = 0 ; i< Size ;i++)
      {
        cout<<Arr[i]<<"\n";
      }
    }
    int Summation()
    {
      int i =0;
      int Sum = 0;
      
      for(i = 0 ; i< Size ;i++)
      {
        Sum = Sum + Arr[i];
      }
      return Sum;
    }
};

int main()
{
  ArrayX aobj(5);

  aobj.Accept();
  aobj.Display();

  cout<<"Summation is :"<<aobj.Summation()<<"\n" ; 
  return 0;
}