//whether ahe mhnun yes or no
//takw input from user and check it is perfect 
import java.util.Scanner;

class NumberX 
{
    public boolean CheckPerfect(int iNo)
    {
       int iCnt=0;
       boolean bFlag = true;
       

       for(iCnt=2;iCnt<= (iNo / 2) ;iCnt++)
       {
        if((iNo % iCnt)==0)
        {
           bFlag = false; //mobile chi light chalu 1 and band manje 0
           break;

        }
        
       }
       return bFlag;
           
    }
    
}
class program68
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
