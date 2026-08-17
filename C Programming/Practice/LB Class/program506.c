#include<stdio.h>

void Display()
{
    static int i =1; //auto mule issue ahe 
    printf("jay Ganesh .... %d\n",i);
    i++;

    Display(); 

}
int main()
{
    Display();
    return 0;
}
