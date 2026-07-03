//Write a program to check whether a number is perfect number or not
// perfect number is a number that is equal to the sum of its factors (Excluding itself) 
// 6 number ahe tyache = factors = 1 + 2 + 3 addition is 6  if  (factors addition == Number ) then it is perfect number 
class Logic
{
    void CheckPerfect(int Num)
    {
      int iCnt =0 ,iSum =0;
      for(iCnt =1 ; iCnt <= Num /2 ;iCnt++)
      {
        if((Num % iCnt) ==0)
        {
          iSum = iSum + iCnt;
        }
      }
      if(Num == iSum)
      {
        System.out.println("Number is perfect number");
      }
      else
      {
         System.out.println("Number is Not perfect number");
      }
    
    }
}
class program98
{
  public static void main(String A[])
  {
      Logic obj = new Logic();
      obj.CheckPerfect(6);
      
  }
}