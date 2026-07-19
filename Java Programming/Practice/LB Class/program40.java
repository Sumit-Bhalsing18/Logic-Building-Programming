//Type 2
import java.util.Scanner;
class program40
{   
    void ChechDivisible(int iNo)
    {
       if((iNo% 3==0) && (iNo % 5 ==0))
        {
            System.out.println("Number is divisible by 3 and 5");
        }
        else
        {
            System.out.println("Number is not divible by 3 and 5");
        }
    }
    public static void main(String A[])
    {
        Scanner sobj= new Scanner(System.in);
        
        int iValue=0;
        System.out.println("Enter number");
        iValue= sobj.nextInt();

        CheckDivisible(iValue);//error karan apn static ni non static method la call kartoy
        
        
     //15 is divible by both 3 and 5
    
        
    }
}