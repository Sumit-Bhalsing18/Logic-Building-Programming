//Write a program to print all numbers from 1 to N that are divisble by both 2 and 3

/*
Input  : 30
Output : 
6
12
18
24
30
 */ 
class Logic
{
    void PrintDivisibleBy2and3(int Num)
    {
      int iCnt =0 ,iCount =0;
  
      for(iCnt =1; iCnt <= Num ;iCnt++)
      {
        if((iCnt % 2) ==0 && (iCnt % 3) ==0)
        {
          System.out.println(iCnt);
        }
      }
    }  
}
class program105
{
  public static void main(String A[])
  {
      Logic obj = new Logic();
      obj.PrintDivisibleBy2and3(30);
      
  }
}