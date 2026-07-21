//whether ahe mhnun yes or no
//takw input from user and check it is perfect 
import java.util.Scanner;

class NumberX 
{
    public boolean CheckPerfect(int iNo)
    {
       int iCnt=0;
       

       for(iCnt=2;iCnt<= (iNo / 2) ;iCnt++)
       {
        if((iNo % iCnt)==0)
        {
           return false;//bad programming bcoz return not write in for allowed only in pettern 
                        //boz jar 20 line cha program ahe return word 5 la asel tar toh code baher fhekel false tar tya pudhchya code kivha line padun rahtat tyamule
        }
        
       }
       return true;
           
    }
    
}
class program67
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
