//Write a program to print each digit of number separately

/*
step1 : number madhe kiti digit ahe te paha jar 4 digit asel tar
step 2 : 10 ^(digits -1)
example Number 1234
step1 : 4 Digit
step 2: 10^(4-1)  = 10^3 = 1000
step 3: atta pratek digit kadha 1234 / 1000 = 1  print 1
                                1234 % 1000 = 234
                                234 / 100 =  2 print 2
                                234 % 100 = 34
                                34 / 10 = 3
                                34 % 10 = 4
                                4 / 1 = 4
                                4 % 1 =0

*/
class Logic
{
    void PrintDigitStraight(int Num)
    {
      int iDigit =0 , temp =Num;
      
      //count digit
      while(temp !=0)
      {
        iDigit++;
        temp = temp / 10;
      }

      //find divisor (10^(iDigit -1))

      int divisor =1;

      for(int i=1 ; i< iDigit ;i++)
      {
        divisor = divisor * 10;
      }
      while(Num != 0)
      {
         System.out.print( Num / divisor +"\t");
         Num = Num % divisor;
         divisor = divisor / 10;  //zero kami karnyasathi 
      }
    }
}
class program94X
{
public static void main(String A[])
{
    Logic obj = new Logic();
    obj.PrintDigitStraight(1234);
}
} 
