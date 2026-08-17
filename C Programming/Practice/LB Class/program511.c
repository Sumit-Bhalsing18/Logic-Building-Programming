#include<stdio.h>
//ha recursive code ahe 
void Display()
{
    static int i =1;  
                 
    if(i <= 4)
    {
      printf("jay Ganesh ....%d\n", i);
       i++;
       Display();
    }
    

}


int main()
{
    Display();
    return 0;
}
//recursive code jar correct lihaych ahe while use kar for nko karu 