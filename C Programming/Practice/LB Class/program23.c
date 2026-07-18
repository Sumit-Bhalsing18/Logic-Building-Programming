#include<stdio.h>

//user defined macro
#define AGE_INVAID -1

int CalculateTicketPrice(int iAge)
{   
    if(iAge<0)         //Input filter (asel tar tyala return asto tyane problem hoto te lihi tu)
    {
        
        return AGE_INVAID;//-1 ka lihilay 
    }
    if(iAge>=0 && iAge<=5)
    {
        return 0;
    }
    else if(iAge>=6 && iAge<=18)
    {
        return 500;
    }
    else if(iAge>=19 && iAge<=50)
    {
        return 900;
    }
    else
    {
        return 400;
    }

      
}
int main()
{
    int iValue =0;
    int iRet=0;
    printf("Please enter your age to calculate ticket price :");
    scanf("%d",&iValue);
    
    iRet=CalculateTicketPrice(iValue);

    if(iRet==AGE_INVAID)
    {
        printf("Please Enter positive Age\n");
    }
    else
    {
      printf("your tickrt price will be %d rupees :",iRet);
    }  
    return 0;
}