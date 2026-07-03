//Write a program to find the smallest digit in a given number
//Smallest digit in a given number: 1
class Logic
{
    void SmallestDigit(int Num)
    {
      int iDigit =0 , iMin = Num;
  
      while(Num > 0)
      {
        iDigit = Num % 10;

        if(iDigit < iMin)
        {
          iMin = iDigit;
        }
        Num = Num /10;
      }
      System.out.println("Smallest digit in a given number:   "+iMin);
    }
}
class program100
{
  public static void main(String A[])
  {
      Logic obj = new Logic();
      obj.SmallestDigit(1234);
      
  }
}