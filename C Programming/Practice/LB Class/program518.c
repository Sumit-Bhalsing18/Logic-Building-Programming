#include<stdio.h>
//ha recursive code ahe 
void Display(int iNo)
{               
    if(iNo != 0)
    {
      printf("jay Ganesh ....%d\n", iNo);
       Display(iNo--);  //post aslya mule issue yeil post manje adhi value de nantar decrement kar mhnun 
    }
    

}
//without static pn hot fakt function la parameter pahije 

int main()
{
    int iValue = 0;
    printf("Enter frequency:\n");
    scanf("%d",&iValue);
    
    Display(iValue);
  
   printf("End of main");
    return 0;
}
