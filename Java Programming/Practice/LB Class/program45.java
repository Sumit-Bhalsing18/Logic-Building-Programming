//Type 2
import java.util.Scanner;

class NumberX //x ka karan jar inbulit Number navach vlass asel tar conflict nko 
{
    public boolean CheckDivisible(int iNo)  
    {
       if((iNo% 3==0) && (iNo % 5 ==0))
        {
            return true;//java ahe true cha t  small
        }
        else
        {
            return false;
        }
}
class program45
{   
    
    }
    public static void main(String A[])
    {
        Scanner sobj= new Scanner(System.in);
        
        int iValue=0;
        boolean bRet=false;//rekami pishvi ani false manje 0 ast
        System.out.println("Enter number");
        iValue= sobj.nextInt();
        NumberX nobj = new NumberX();


        bRet= nobj.CheckDivisible(iValue);//varti call
        if(bRet==true)
        {
            System.out.println("Number is divisible by 3 and 5");
        }
        else
        {
           System.out.println("Number is not divisible by 3 and 5")  ;
        }
        
        
     //15 is divible by both 3 and 5
    
        
    }
}
