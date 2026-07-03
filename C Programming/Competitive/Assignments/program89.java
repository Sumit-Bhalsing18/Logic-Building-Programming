//Write a program to find the sum of even and odd digit separately in a number
//input :   123456

/* Output
12
9

jevha pn Digit cha vishay yeil tevha while use kar tu
ka while karan aplyala mahit nahiye exact kuth thambnar ahe loop pn aplyala etk mahit ahe 0 ala ki band kar mhnun while 
*/
class Logic
{
    void SumEvenOddDigits(int Num)   
    {
        int iDigit =0 ,iSum1 =0 ,iSum2 =0;
        while(Num !=0)
        {
          iDigit = Num % 10;
          if((iDigit % 2)==0)
          {
            iSum1 = iSum1 + iDigit;
          
          }
          else
          {
            iSum2 = iSum2 + iDigit;
          }
           Num = Num /10;
        }
        System.out.println(iSum1);
        System.out.println(iSum2);
    }
}
class program89
{
    public static void main(String A[])
    {
        Logic obj = new Logic();  //class cha object
        obj.SumEvenOddDigits(123456);
    }
}

