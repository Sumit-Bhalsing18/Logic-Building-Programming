import java.util.*;

class DigitX
{
   public void CountEvenOddDigits(int iNo)
   {
    int iDigit=0;
    int iCountEven =0,iCountOdd=0;

      while(iNo!=0)
      {
        iDigit=iNo%10;
        if(iDigit%2!=0)
        {
          iCountOdd++;
        }
        else
        {
          iCountEven++;
        }
         iNo=iNo/10; //kami karnyasathi
                       
      }
      System.out.println("NUmber of even digits "+iCountEven++);
      System.out.println("NUmber of even digits " +iCountOdd++);

       
   }
}
class program88

{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj= new DigitX();

        System.out.println("Enter number :");
        int iValue=0;
        

        iValue= sobj.nextInt();//input ghetle
        dobj.CountEvenOddDigits(iValue);
        
    }
}