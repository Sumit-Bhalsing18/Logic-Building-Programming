 
import java.io.*; //buffer ni input

class program821
{
    public static void main(String A[]) throws Exception  //karan buffered reader exception create karto
    {

       int iNo = 0 ;
       int iDigit = 0;
       int iTemp = 0;
       int iRev = 0;

        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter Number  :");
        iNo = Integer.parseInt(bobj.readLine());  //convert string to Integer
        
        while(iNo != 0)
        {
           iDigit = iNo % 10;

           
        }

    }
}



