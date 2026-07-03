//Write a program to check whether number is divisible by 5 and 11 or not
//Number is Divisible

class Logic
{
    void CheckDivisible(int Num)
    {
      if((Num % 5) ==0 && (Num % 11) ==0)
      {
        System.out.println("Number is Divisible");
      }
      else
      {
         System.out.println("Number is Not Divisible");
      }
    }
}
class program93 
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CheckDivisible(55);
    }
}