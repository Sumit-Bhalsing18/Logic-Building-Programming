//Write a program to calculate the power of number using loops
//2^5 manjech 2 * 2 * 2 * 2 * 2
class Logic
{
    void CalculatePower(int base ,int power)
    {
      int iCnt =0, iMul =1;
    
      for(iCnt =1 ;iCnt <= power ;iCnt++)
      {
        iMul = iMul * base ;
      }
      System.out.println(iMul);
    
    }
}
class program95 
{
  public static void main(String A[])
  {
      Logic obj = new Logic();
      obj. CalculatePower(2 , 5);
  }
}