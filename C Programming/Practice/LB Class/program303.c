  //decimal to binary display
/*Enter number
97
1000011 hyala kahiparyay nahi  (direct ulti ali khari tar he 1100001 ass pahije tevha 97 hoil )
*/
#include<stdio.h>
int main()
{
    int iNo = 0;
    int iDigit =0;
    printf("Enter number\n"); 
    scanf("%d",&iNo);
    
    while(iNo != 0)
    {
       iDigit = iNo % 2; //2 for binary
       printf("%d",iDigit);

       iNo = iNo /2;
    }
    printf("\n");    
    return 0;
}