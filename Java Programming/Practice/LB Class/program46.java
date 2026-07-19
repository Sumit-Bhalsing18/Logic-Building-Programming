//error
import java.util.Scanner;

class NumberX 
{
    public void DisplayFactors(int iNo)
    {
       int iCnt=0;
       for(iCnt=1;iCnt<iNo;iCnt++)
       {
        if((iNo % iCnt)==0)
        {
            System.out.println(iCnt);
        }
       }
    }
    
}
class program46
{   
    
    public static void main(String A[])
    {
        Scanner sobj= new Scanner(System.in);
        
        int iValue=0;
        
        System.out.println("Enter number");
        iValue= sobj.nextInt();

        NumberX nobj = new NumberX();//call
        nobj.DisplayFactors(iValue);


        
        
    }
}
//Time complexity: O(N)
//where N >=0
