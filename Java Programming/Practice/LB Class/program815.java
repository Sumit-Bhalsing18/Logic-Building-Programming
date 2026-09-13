
// x =3 , y = 5
//output = 3 * 3 * 3 * 3 * 3 
import java.io.*; //buffer ni input

class program815
{
    public static void main(String A[]) throws Exception  //karan buffered reader exception create karto
    {

       int iNo = 0 ;
       int iCount = 0 ,iTemp = 0;
        
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter Number  :");
        iNo = Integer.parseInt(bobj.readLine());  //convert string to Integer
        
        iTemp = iNo;//backup ghetla 

        while(iNo != 0)
        {
            iCount++;
            iNo = iNo / 10;
        }

        System.out.println("Number of digits are : "+iCount);

    }
}

