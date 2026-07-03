//Write a program to find the sum of digits of number
/*
C:\Users\user5\OneDrive\Desktop\LB\LB Assignment>java program81.java
sum of digits of number :10  (1 +2+ 3+ 4)
 */
class Logic     //class banavla java madhe sagl class madhe lihitat
{
    void SumofDigits(int Num)
    {
       int iDigit =0 ,iSum =0;
       while(Num !=0)
       {
         iDigit = Num %10;
         iSum = iSum + iDigit;
         Num = Num /10;
       }
       System.out.println("sum of digits of number :"+iSum);
    }
}
class program81
{
    public static void main(String A[])
    {
        Logic lobj = new Logic(); //logic class cha object banavla
        lobj.SumofDigits(1234);       //ani tya object no class chya method la call kel
    }
}