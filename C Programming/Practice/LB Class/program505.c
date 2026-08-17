#include<stdio.h>
 //recursion madhe multiple stack frame tayar hotat manje 
void Display()
{
    auto int i =1; //auto mule issue ahe 
    printf("jay Ganesh .... %d\n",i);
    i++;

    Display(); 

}
int main()
{
    Display();
    return 0;
}
/*
jay Ganesh .... 1
jay Ganesh .... 1
jay Ganesh .... 1
jay Ganesh .... 1
jay Ganesh .... 1
jay Ganesh .... 1
*/