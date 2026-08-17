#include<stdio.h>
//ha recursive code ahe 
void Display(int iNo)
{
    static int i =1;  
                 
    if(i <= iNo)
    {
      printf("jay Ganesh ....%d\n", i);
       i++;
       Display(iNo);  //display la pn parameter lagel 
    }
    

}


int main()
{
    int iValue = 0;
    printf("Enter frequency:\n");
    scanf("%d",&iValue);
    
    Display(iValue);
  
    return 0;
}
