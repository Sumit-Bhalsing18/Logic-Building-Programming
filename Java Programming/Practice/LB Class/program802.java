import java.io.*; //buffer ni input

class program802
{
    public static void main(String A[]) //throws Exception  //karan buffered reader exception create karto
    {
        int iNo = 0;
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter Number :");
        iNo = Integer.parseInt(bobj.readLine());  //convert string to Integer


        System.out.println("Input value is :"+iNo);

    }
}