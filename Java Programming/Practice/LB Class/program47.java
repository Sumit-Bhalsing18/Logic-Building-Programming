//nko tya iteration kami kelya manje aplyala mahiti ahe ki factor yenar nahi mh iterate kartoy 
import java.util.Scanner;

class NumberX 
{
    public void DisplayFactors(int iNo)
    {
       int iCnt=0;
       for(iCnt=1;iCnt<= (iNo / 2) ;iCnt++)
       {
        if((iNo % iCnt)==0)
        {
            System.out.println(iCnt);
        }
       }
    }
    
}
class program47
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
//Time complexity: O(N/2)
//where N >=0
