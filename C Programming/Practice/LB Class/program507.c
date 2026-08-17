#include<stdio.h>
//ha program terminate honar nahi karan controller nahich he 

//iteration aslya mule 2 ch stack frame bantat pn recursion madhe multiple stack frame bantat tar mhnun stacj overflow hoto ani segmentation fault error yeto 
void Display()
{
    int i =1;
    while(1)
    {
         printf("jay Ganesh .... %d\n",i);
         i++;
    }

}
int main()
{
    Display();
    return 0;
}
