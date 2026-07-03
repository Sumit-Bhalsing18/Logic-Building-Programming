//Write a program to print the multiplication table of a number
//Output minimum number is 2
class Logic                         
{
    void PrintTable(int Num) 
    {
      int iCnt =0;
      for(iCnt =1 ;iCnt <= 10 ;iCnt++)
      {
        System.out.println("5 x " + iCnt + " = "+ (5 * iCnt));
      }
    }  
}
class program85
{
    public static void main(String A[])
    {
      Logic obj = new Logic();
      obj.PrintTable(5);
      
    }
}