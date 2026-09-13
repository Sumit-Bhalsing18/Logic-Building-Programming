
import java.io.*; //buffer ni input
//miising 1 line
class program809
{
    public static void main(String A[]) throws Exception  //karan buffered reader exception create karto
    {
        int iNo = 0;
        long iFact = 0;
        int i = 0;
        
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter Number :");
        iNo = Integer.parseInt(bobj.readLine());  //convert string to Integer

        iFact = 1;
        
        int iTemp = 0 ,iDigit = 0;
        long  iSum = 0;
        
        iTemp = iNo;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

           while(iDigit != 0)
           {
            iFact = iFact * iDigit ;
            iDigit--;
           }
           iSum = iSum + iFact;
           iNo = iNo /10;
        
        }

        if(iSum == iTemp)
        {
            System.out.println("It is strong number");
        }
        else
        {
            System.out.println("It is not a strong number");
        }
         

    }
}
