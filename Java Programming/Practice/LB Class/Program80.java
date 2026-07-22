import java.util.*;

class DigitX
{
   public void DisplayDigits(int iNo)
   {
    
      while(iNo!=0)
       {

    
        System.out.println(iNo%10);

        iNo=iNo/10;
        
      }
   }
}
class program80
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj= new DigitX();

        System.out.println("Enter number :");
        int iValue=0;

        iValue= sobj.nextInt();//input ghetle
        dobj.DisplayDigits(iValue);
    }
}