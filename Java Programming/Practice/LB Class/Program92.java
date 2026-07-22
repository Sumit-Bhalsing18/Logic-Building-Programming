import java.util.*;

class DigitX
{
   public int ReverseNumber(int iNo)
   {
    int iDigit=0;
    int iRev =0;
    

      while(iNo!=0)
       {
        iDigit=iNo%10;

        iRev=(iRev*10)+iDigit;
        
         iNo=iNo/10; //kami karnyasathi
                       
       }
       return iRev;
   }
}
class program92

{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj= new DigitX();

        System.out.println("Enter number :");
        int iValue=0;
        int iRet=0;

        iValue= sobj.nextInt();//input ghetle
        iRet=dobj.ReverseNumber(iValue);
        System.out.println("Reverse number is  :"+iRet);
    }
}