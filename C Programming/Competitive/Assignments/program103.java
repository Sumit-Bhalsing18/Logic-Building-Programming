//Write a program to display all factors of given number

/*
1
2
3
4
6
12
 */ 
class Logic
{
    void DisplayFactors(int Num)
    {
      int iCnt =0;
  
      for(iCnt =1; iCnt <= Num ;iCnt++)
      {
        if((Num % iCnt) ==0 )
        {
          System.out.println(iCnt +"\t");
        }
       
      }
    }  
}
class program103
{
  public static void main(String A[])
  {
      Logic obj = new Logic();
      obj.DisplayFactors(12);
      
  }
}