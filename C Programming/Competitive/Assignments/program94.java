//Write a program to print each digit of number separately
//output in reverse order like  6       7       8       9
class Logic
{
    void PrintDigit(int Num)
    {
      int iDigit =0;

      while(Num != 0)
      {
        iDigit = Num % 10;
        System.out.print(iDigit+"\t");
        Num = Num /10;
      }
    }
}
class program94 
{
  public static void main(String A[])
  {
      Logic obj = new Logic();
      obj.PrintDigit(9876);
  }
}