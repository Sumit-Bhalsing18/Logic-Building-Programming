import java.io.*; //buffer ni input

class program803
{
    public static void main(String A[]) throws Exception  //karan buffered reader exception create karto
    {
        int iNo = 0;
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter Number :");
        iNo = Integer.parseInt(bobj.readLine());  //convert string to Integer

        int iDigit = 0;
        while(iNo != 0)
        {
            iDigit = (iDigit % 10);
            System.out.println(iDigit);
            iNo = iNo /10;
        }

    }
}