import java.util.Scanner;

class NumberX 
{
    public boolean CheckPerfect(int iNo)
    {
       int iCnt=0;
       boolean bFlag = false;//karan bydefault false aste 
       

       for(bFlag = true ,iCnt=2;iCnt<= (iNo / 2) ;iCnt++)
       {
        if((iNo % iCnt)==0)
        {
           bFlag = false; 
           break;

        }
        
       }
       return bFlag;
           
    }
    
}
class program69
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
