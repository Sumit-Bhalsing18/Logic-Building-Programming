#include<stdio.h>

void Display()
{
    static int i =0;  
                 
    i =1;  //ISSUE yeil karan he reset houn parat i =1 hoto
    if(i <= 4)
    {
      printf("jay Ganesh ....\n");
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