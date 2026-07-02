//Accept N numbers from user and display all such elements which are divisible by 5
//Enter number of elements 6
//Enter 6 elements
//Enter 1 elements85
//Enter 2 elements66
//Enter 3 elements3
//Enter 4 elements80
//Enter 5 elements93
//Enter 6 elements88
 //85  80  
#include<stdio.h>
#include<stdlib.h>

int DivisibleBy5(int Arr[] ,int iLength)
{
    int iCnt =0;
   for(iCnt =1 ;iCnt <= iLength;iCnt++)
   {
     if((Arr[iCnt]%5) == 0)
     {
        printf("%d",Arr[iCnt]);
     } 
   }
}
int main()
{
    int iSize =0 ,iCnt =0; 
    int *p = NULL ; //pointer ahe mhnun null

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    p = (int *) malloc(iSize * sizeof(int));  //p madhe malloc use karun dynamic memory allocation kel 

    if(p == NULL)
    {
        printf("Unable to allocate memory ");
        return -1;
    }
    
    printf("Enter %d elements\n",iSize);

    for(iCnt =1 ; iCnt <= iSize ;iCnt++) // iCnt =1 is not allowed 
    {
        printf("Enter %d elements :",iCnt);
        scanf("%d" ,&p[iCnt]);

    }
    DivisibleBy5(p ,iSize);
    free(p); //p la dynamic memory allocation ahe mhnun use karun zalyavr free karaychi it is good programming practice 



}