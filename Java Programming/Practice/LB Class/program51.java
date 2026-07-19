//prime not divisible by any number or there is no factor for that number
import java.util.Scanner;

class NumberX 
{
    public boolean CheckPrime(int iNo)
    {
       int iCnt=0;
      

       for(iCnt=2;iCnt<= (iNo / 2) ;iCnt++)
        if((iNo % iCnt)==0)  //factor milala ki thamb 
        {
           break;
        }
       
       if(iCnt>=(iNo/2)+1)
       {
         return true;
       }
       else
    {
        return false;
    }
       

       
    }
    
}
class program65
{   
    
    
    public static void main(String A[])
    {
        Scanner sobj= new Scanner(System.in);
        
        int iValue=0;
        boolean bRet=false;
        
        System.out.println("Enter number");
        iValue= sobj.nextInt();

        NumberX nobj = new NumberX();//call
        bRet =nobj.CheckPrime(iValue);
       
        if(bRet==true)
        {
            System.out.println("Number is prime");
        }
        else
        {
            System.out.println("Number is not prime"); 
        }


        
        
    }
}
