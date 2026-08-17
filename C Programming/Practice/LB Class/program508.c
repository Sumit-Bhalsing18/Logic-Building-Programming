#include<stdio.h>

void Display()
{
    auto int i =0;  
                 
    i =1;
    if(i <= 4)
    {
      printf("jay Ganesh ....\n");
       i++;
       Display();//recusrion pn without static ahe ethe infinite jay ganesh print karel karan auto ha varti jaun parat reset hotay i =0 
    }
    

}


int main()
{
    Display();
    return 0;
}
//recursive code jar correct lihaych ahe while use kar for nko karu 