//Write a program to the product of digits of a number
// Input  1234
// output  product of digits of a number:   24 
class Logic
{
    void SmallestDigit(int Num)
    {
      int iDigit =0 , iMul =1;
  
      while(Num != 0)
      {
        iDigit = Num % 10;
        iMul = iMul * iDigit ;
        Num = Num /10;
      }
      System.out.println("product of digits of a number:   "+iMul);
    }
}
class program101
{
  public static void main(String A[])
  {
      Logic obj = new Logic();
      obj.SmallestDigit(234);
      
  }
}