//Write a program to find the sum of all even numbers up to n
//Output  sum of all even numbers :12
class Logic
{
    void SumEvenNumbers(int Num)
    {
      int iCnt =0 ,iSum =0;
      for(iCnt =2 ;iCnt <= Num ;iCnt = iCnt +2)
      {
      
          iSum = iSum + iCnt ; 
      }
      System.out.println(" sum of all even numbers :"+iSum);
    }
}
class program96 
{
  public static void main(String A[])
  {
      Logic obj = new Logic();
      obj.SumEvenNumbers(10);
  }
}