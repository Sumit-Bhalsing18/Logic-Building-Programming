#include<stdio.h>//check
#include<stdbool.h> 

int CalculateTicketPrice(int iAge)
{   
    if(iAge<0)         //Input updater
    {
        iAge = -iAge; // suppose you enter -3 then it will come inside and -(-3) become +
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

    printf("your tickrt price will be %d rupees :",iRet);
       
    return 0;
}