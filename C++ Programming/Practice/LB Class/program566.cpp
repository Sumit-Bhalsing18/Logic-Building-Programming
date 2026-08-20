#include<iostream>
using namespace std;

class Searching
{
    private:
     int *Arr;
     int iSize;
    
    public:
    Searching(int iNo);
    ~Searching();
    void Accept();
    void Display();
};

Searching :: Searching(int iNo)
{
    iSize = iNo;
    Arr = new int[iSize];

}
Searching :: ~Searching()
{
    delete []Arr; 
}
void Searching :: Accept()
{
   cout<<"Enter the Elements\n";

   for(int i = 0; i < iSize ; i++)
   {
    cin>>Arr[i];
   }
}
void Searching :: Display()
{
    cout<<"Elements of the array are : \n";
    for(int i = 0; i < iSize ; i++)
   {
    cout<<Arr[i];
   }  
}
int main()
{
    Searching sobj(5);
    sobj.Accept();
    sobj.Display();
    return 0;
}