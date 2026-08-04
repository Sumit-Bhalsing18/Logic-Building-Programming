
#include<stdio.h>
int main()
{
    
  int No1 =0 ,No2 =0,Ans =0;
  
  printf("Enter first number\n");
  scanf("%d",&No1);

  printf("Enter Second number\n");
  scanf("%d",&No2);

  Ans = No1 & No2 ; //binary &
  printf("AND %d\n",Ans);

  Ans = No1 | No2 ; //binary ||
  printf("OR %d\n",Ans);

  Ans = No1 ^ No2 ; //binary XOR
  printf("XOR %d\n",Ans);
  return 0;
}
//ithe apn data binary madhe convert kel anahiye AND, OR, XOR he decimal numbers var apn operation kartat
//apn data la binary madhe display karto ahe pn data binary madhe convert kela nahi toh internally binary var operation karto 
//apn binary madhe convert kel nahi 
//we are working on binary data but we are not converting data into binary data
//apn ekda convert kel pn answer ultya sequence ni ale tar mg ka kartoy tu convert karu nko 