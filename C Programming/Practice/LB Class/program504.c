#include<stdio.h>
 
void Display()
{

    printf("jay Ganesh ....\n");

    Display(); //recursion start zalay chukicha ahe pn recursion ahe 
 //ethe control nahich he mhnun infinite vela jay ganesh print hoil 
}
int main()
{
    Display();
    return 0;
}