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

    bool LinearSearch(int iNo);

    bool BiDirectionalSearch(int iNo);
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
    cout<<Arr[i]<<"\n";
   }  
}
bool Searching :: LinearSearch(int iNo)
{
    bool bFlag = false;

    int i = 0;
    for(i = 0 ; i< iSize ; i++)
    {
       if(iNo == Arr[i])
       {
        bFlag = true;
        break;
       }
     
    }
    return bFlag;
}
bool  Searching :: BiDirectionalSearch(int iNo)
{
    int iStart = 0 , iEnd = 0 ;
    bool bFlag = false;

    iStart = 0;
    iEnd = iSize - 1; //-1 ka 

    while(iStart <= iEnd)  
    {

        if(Arr[iStart] == iNo || Arr[iEnd] == iNo)
        {
            bFlag = true;
            break;
        }
        iStart++;
        iEnd--;
    }
    return bFlag;


}
int main()
{
    int iRet  = 0;
    Searching sobj(5);
    sobj.Accept();
    sobj.Display();
    if(sobj.BiDirectionalSearch(30) == true)
    {
        cout<<"Element is present\n";
    }
    else
    {
        cout<<"There is no such Element\n";
    }

    if(sobj.LinearSearch(30) == true)
    {
        cout<<"Element is present\n";
    }
    else
    {
        cout<<"There is no such Element\n";
    }
    return 0;
}