import java.util.*;

class DigitX
{
   public boolean Checkpallindrome(int iNo)
   {
    int iDigit=0;
    int iRev =0;
    int iTemp=0; //xerox kadhun thevli 

    iTemp =iNo;

      while(iNo!=0)
       {
        iDigit=iNo%10;

        iRev=(iRev*10)+iDigit;
        
         iNo=iNo/10; //kami karnyasathi
                       
       }
       if(iRev==iTemp) //jar iNo kele tar iNo 0 hoterror yeyil tar iTemp madhe iNo chi value store karto
       {
        return true;
       }
       else
       {
        return false;
       }
   }
}
class program93

{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj= new DigitX();

        System.out.println("Enter number :");
        int iValue=0;
        boolean bRet=false;

        iValue= sobj.nextInt();//input ghetle
        bRet=dobj.Checkpallindrome(iValue);
        
        if(bRet==true)
        {
            System.out.println("Number is pallindrome");
        }
        else
        {
            System.out.println("Number is  not pallindrome");
        }
    }
}