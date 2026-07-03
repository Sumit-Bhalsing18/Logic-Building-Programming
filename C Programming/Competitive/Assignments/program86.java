//Write a program to check whether a number is prime or not
//prime number is number that is divisible only by 1 and itself     (example 11) 
class Logic                         
{
    void CheckPrime(int Num) 
    {
      int iCnt =0 ,iCount;
      for(iCnt =2 ;iCnt < Num;iCnt++)   //fakt ethe condition madhe 2 pasn start kar ani num chya adhi payrnt chi condition lav 
      {
        if((Num % iCnt)==0)
        {
          System.out.println("Number is not prime");
          return ;//karan jar pahila ==0 yet asel tar te dusryakade pn jail toh jaila nahi pahije mhnun return lihi 
        }
      }
      System.out.println("Number is prime");
    }  
}
class program86
{
    public static void main(String A[])
    {
      Logic obj = new Logic();
      obj.CheckPrime(11);
      
    }
}
//aplyala mahiti ahe prime manje asa number jyala fakt 1 ani svhtane bhag jato mhnun 2 pasn ani svhta peksha kami a 