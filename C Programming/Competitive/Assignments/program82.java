//write a program to check whether a number is palindrome or not  ( check whether ahe Boolean use kar)
/*
Palindrome = (original number == Reverse number)  pudh read kar kivha maghun read kar sarkhach number yeil tyala palindrome mhntat 
 */

//Output Number is palindrome
class Logic                         //Class
{
    void CheckPalindrome(int Num)   //Function
    {
      int iReverse =0 , iDigit =0;
      int Original = Num;
      while(Num !=0)
      {
        iDigit = Num % 10;
        iReverse = iReverse * 10 + iDigit;
        Num = Num /10;
      }

      if(Original == iReverse)
      {
        System.out.println("Number is palindrome");
      }
      else
      {
        System.out.println("Number is not palindrome");
      }
    }
}
class program82
{
    public static void main(String A[])
    {
      Logic obj = new Logic();
      obj.CheckPalindrome(121);
    }
}