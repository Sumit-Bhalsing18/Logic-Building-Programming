//whether ahe mhnun yes or no
//takw input from user and check it is perfect 
//problem yrtoy
import java.util.Scanner;

class NumberX 
{
    public boolean CheckPerfect(int iNo)
    {
       int iCnt=0;
       int iSum=0;

       for(iCnt=1;iCnt<= (iNo / 2) ;iCnt++)
       {
        if((iNo % iCnt)==0)
        {
           iSum= iSum+iCnt;
        }
        if(iSum > iNo)//iteration kami karyasathi 
        {
            break;
        }
       }
       if(iCnt < iNo/2)//ad
       {
        return false;
       }
       else{
         return true;
       }

       
    }
    
}
class program66
{   
    
    
    public static void main(String A[])
    {
        Scanner sobj= new Scanner(System.in);
        
        int iValue=0;
        boolean bRet=false;
        
        System.out.println("Enter number");
        iValue= sobj.nextInt();

        NumberX nobj = new NumberX();//call
        bRet =nobj.CheckPerfect(iValue);
       
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
