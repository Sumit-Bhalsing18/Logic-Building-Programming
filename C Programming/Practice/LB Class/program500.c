#include<stdio.h>
//SEQUENCE 
void Display()
{
    auto int i =0;  //atta apn explicitly sangto ahe variable auto ahe mhnun 
                    //kadhi kadhi error yeto karan kahi lihile nasle tari auto asto apn parat lihil tar 1 storage class 2 vela lihu shakat nahi 
    for(i = 1; i<= 4 ; i++)
    {
      printf("jay Ganesh ....\n");
    }
    

}
int main()
{
    Display();
    return 0;
}