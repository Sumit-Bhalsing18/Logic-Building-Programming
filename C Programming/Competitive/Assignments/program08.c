//input: 12  5
//Output:12  12  12  12  12
//input: 5  4
//Output:4  4  4  4  4

#include<stdio.h>

int Display(int iNo,int iFrequency)
{
   int i=0;
    for(i=1;i<=iFrequency;i++)
    {
        printf("%d\t",iNo);
    }

}
int main()
{
   int iValue=0;
   int iCount=0;

   printf("Enter number");
   scanf("%d",&iValue);

   printf("Enter Frequency");
   scanf("%d",&iCount);

   Display(iValue,iCount);

    return 0;
}
