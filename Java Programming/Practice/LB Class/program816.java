
// x =3 , y = 5
//output = 3 * 3 * 3 * 3 * 3 
import java.io.*; //buffer ni input

class program816
{
    public static void main(String A[]) throws Exception  //karan buffered reader exception create karto
    {

       int iNo = 0 ;
       int iCount = 0 ,iTemp = 0;
        
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter Number  :");
        iNo = Integer.parseInt(bobj.readLine());  //convert string to Integer
        
        String str = String.valueOf(iNo);

        System.out.println("Number of digits are : "+str.length());

    }
}

