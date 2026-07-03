//Write a program to find the largest digit in a given number
//largest digit in a given number4
class Logic
{
    void LargestDigit(int Num)
    {
      int iDigit =0 , iMax =0;
  
      while(Num > 0)
      {
        iDigit = Num % 10;

        if(iDigit > iMax)
        {
          iMax = iDigit;
        }
        Num = Num /10;
      }
      System.out.println("largest digit in a given number"+iMax);
    }
}
class program99
{
  public static void main(String A[])
  {
      Logic obj = new Logic();
      obj.LargestDigit(1234);
      
  }
}