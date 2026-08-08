#include<iostream>
using namespace std;

float Addition(float No1 , float No2)
{
    float Ans;

    Ans = No1 + No2;
    return Ans;
}
int main()
{
    float Value1 = 10.5f , Value2 = 11.2f ,Ret =0.0f ; //main kadhi generic nast value initialize kelya tari chaltat
    Ret = Addition(Value1 , Value2);
    cout<<"Addition is :"<<Ret <<"\n";
    return 0;
}