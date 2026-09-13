//INput ; 5!
//Output 5 * 4 * 3 * 2 * 1
//output 1 * 2 * 3 * 4 * 5
import java.io.*; //buffer ni input

class program807
{
    public static void main(String A[]) throws Exception  //karan buffered reader exception create karto
    {
        int iNo = 0;
        int iFact = 0;
        int i = 0;
        
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter Number :");
        iNo = Integer.parseInt(bobj.readLine());  //convert string to Integer

        iFact = 1;

        while(iNo != 0)
        {
            iFact = iFact * iNo ;
            iNo--;
        }
        System.out.println("Factorial is :"+iFact);
       

         

    }
}
/*
Enter Number :
5
Factorial is :120 */