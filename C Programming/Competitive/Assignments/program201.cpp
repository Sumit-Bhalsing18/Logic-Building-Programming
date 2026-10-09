//write generic program which accept one value and
// one number from user print that value that number of times on screen 

#include<iostream>
using namespace std;

template<class T>
void Display(T iValue,int iNum) //दोन्ही values चा datatype T आहे.
                            // पण iNum हा number of times आहे, त्यामुळे int ठेवणे better आहे.
{
    for(int i = 0; i < iNum ; i++)
    {
      cout<<iValue<< "\t";
    }
    cout << endl;   // पूर्ण function output झाल्यावर new line
}

int main()
{
  Display('M',7);
  Display(11,3);
  Display(3.7,6);
  return 0;
}
/*
M       M       M       M       M       M       M
11      11      11
3.7     3.7     3.7     3.7     3.7     3.7
*/

/*

  
    int iValue = 0 , iCount = 0;
  float fValue = 0.0f ;
  char cValue = '\0';


cout<<"Enter character and count";
 cin>>cValue>>iCount;
Display(cValue,iCount);

 cout<<"Enter integer and count";
 cin>>iValue>>iCount;
 Display(iValue,iCount);

 cout<<"Enter float and count";
 cin>>fValue>>iCount;
 Display(fValue,iCount);*/