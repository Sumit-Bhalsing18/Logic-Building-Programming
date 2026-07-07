//Write a program to count how many even odd numbers are present between 1 and n
//even number manje asse number jyala 2 ni purn bhag jato ani jyana 2 ni bhag jat nahi te odd
// Input  50
/*
Number of even numbers: 25
Number of odd number: 25
 */ 
class Logic
{
    void CountEvenOddRange(int Num)
    {
      int iCnt =0 ,iCount1 =0 , iCount2 =0;
  
      for(iCnt =1; iCnt <= Num ;iCnt++)
      {
        if((iCnt % 2) ==0 )
        {
          iCount1++;
        }
        else
        {
          iCount2++;
        }
      }
      System.out.println("Number of even numbers: "+iCount1);
      System.out.println("Number of odd number: "+iCount2);
    }
   
}
class program102
{
  public static void main(String A[])
  {
      Logic obj = new Logic();
      obj.CountEvenOddRange(50);
      
  }
}