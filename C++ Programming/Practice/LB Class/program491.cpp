#include<iostream>
using namespace std;

template<class T>
class ArrayX
{
  public:
    T  *Arr ;
    int Size;

    ArrayX(int No) ;
    ~ArrayX();
  

    void Accept();
    void Display();
    T Summation();
};
template<class T>            //हे compiler ला सांगतं  "मी template च्या function ची definition लिहित आहे."                         
ArrayX<T>:: ArrayX(int No)  
{
  Size = No;
  Arr = new T[Size];  
}
template<class T>
ArrayX<T> :: ~ArrayX()
{
  delete []Arr;  //ass kelyane sagla array janar delete honar
}
template<class T>
void ArrayX<T> :: Accept()    //fakt jar ArraayX asta tar error yetoy <T>  he lihil karan aplyala sangayla lagel ki te generic ahe mhnun kahitari specific notation lagelm mhnun <T> 
{                             ////"ही Accept() function ArrayX<T> या template class ची आहे."
  int i =0;
  cout<<"Enter the elements : \n";
  
  for(i = 0 ; i< Size ;i++)
  {
    cin>>Arr[i];
  }
}
template<class T>
void ArrayX<T>  :: Display()
{
  int i =0;
  
  cout<<"Elements of the array are: \n";
  
  for(i = 0 ; i< Size ;i++)
  {
    cout<<Arr[i]<<"\n";
  }
}
template<class T>
T ArrayX<T>  :: Summation()
{
  int i =0;
  T Sum = 0;
  
  for(i = 0 ; i< Size ;i++)
  {
    Sum = Sum + Arr[i];
  }
    return Sum;
}
int main()
{
  ArrayX <float>aobj(5);

  aobj.Accept();
  aobj.Display();

  cout<<"Summation is :"<<aobj.Summation()<<"\n";
  return 0;
}
/*
लक्षात ठेवण्याचा नियम (Exam Trick):

Class च्या आत function लिहिली → ArrayX<T> लिहायची गरज नाही.
Class च्या बाहेर function लिहिली → प्रत्येक function आधी template<class T> आणि class नाव ArrayX<T> असेच लिहायचे.*/