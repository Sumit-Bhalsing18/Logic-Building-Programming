#include<stdio.h>
//SEQUENCE 
void Display()
{
    auto int i =0;  //atta apn explicitly sangto ahe variable auto ahe mhnun 
                    //kadhi kadhi error yeto karan kahi lihile nasle tari auto asto apn parat lihil tar 1 storage class 2 vela lihu shakat nahi 
    i =1;
    while(i <= 4)
    {
      printf("jay Ganesh ....\n");
       i++;
    }
    

}
int main()
{
    Display();
    return 0;
}