 
import java.io.*; //buffer ni input

class program819
{
    public static void main(String A[]) throws Exception  //karan buffered reader exception create karto
    {

       int iNo = 0 ;
       int iSum = 0;
       int iDigit = 0;
       int iTemp = 0;

        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter Number  :");
        iNo = Integer.parseInt(bobj.readLine());  //convert string to Integer
        
        iTemp = iNo ;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        System.out.println("Summation is :"+iSum);

        if(iTemp % iSum == 0)
        {
            System.out.println("It is Harshad number");
        }  
        else
        {
            System.out.println("It is not  Harshad number");
        }     

    }
}
/*
Enter Number  :
12
Summation is :3
It is Harshad number

Enter Number  :
18
Summation is :9
It is Harshad number*/


