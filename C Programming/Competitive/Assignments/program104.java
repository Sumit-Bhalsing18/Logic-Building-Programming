//Write a program to count total number of factors of a given number

/*
Input 20
Output : 6
 */ 
class Logic
{
    void CountFactors(int Num)
    {
      int iCnt =0 ,iCount =0;
  
      for(iCnt =1; iCnt <= Num ;iCnt++)
      {
        if((Num % iCnt) ==0 )
        {
          iCount++;
        }
      }
      System.out.println(iCount);
    }  
}
class program104
{
  public static void main(String A[])
  {
      Logic obj = new Logic();
      obj.CountFactors(20);
      
  }
}