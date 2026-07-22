import java.util.*;

class DigitX
{
   public int CountDigits(int iNo)
   {
    
    int iCount =0;
      while(iNo!=0)
       {
         
        iCount++;

        iNo=iNo/10;
         
              
       }
       return iCount;
   }
}
class program84
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj= new DigitX();

        System.out.println("Enter number :");
        int iValue=0;
        int iRet=0;

        iValue= sobj.nextInt();//input ghetle
        iRet=dobj.CountDigits(iValue);
        System.out.println("NUmber of digits are :"+iRet);
    }
}