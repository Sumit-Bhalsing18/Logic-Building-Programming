 
import java.io.*; //buffer ni input

class program823
{
    public static void main(String A[]) throws Exception  //karan buffered reader exception create karto
    {

       int iNo = 0 ;
       int iDigit = 0;
       int iTemp = 0;
       int iSquare = 0;
       int iCount = 0 ;

        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter Number  :");
        iNo = Integer.parseInt(bobj.readLine());  //convert string to Integer
        
        iTemp = iNo;

        iSquare = iNo * iNo;//25 * 25 = 625

        while(iNo != 0)
        {
            iCount++;
            iNo = iNo / 10;
        }

    }
}




