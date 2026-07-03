//Write a program to print numbers from N  down to 1 in reverse order
/*
10
9
8
7
6
5
4
3
2
1 */
class Logic
{
    void PrintReverse(int Num)
    {
      int iCnt =0;
      for(iCnt =Num ; iCnt > 0 ;iCnt--)
      {
         System.out.println(iCnt);
      }
    
    }
}
class program97
{
  public static void main(String A[])
  {
      Logic obj = new Logic();
      obj.PrintReverse(10);
      
  }
}