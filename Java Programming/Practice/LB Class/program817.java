 
import java.io.*; //buffer ni input

class program817
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

        iNo = iTemp;
        int iDigit = 0;
        int iSum = 0;

        //153 -> 3^3 + 5 ^3 + 1^ 3
        while(iNo != 0)
        {
           iDigit = iNo % 10;

           iSum =  iSum + (int)Math.pow(iDigit,iCount);
           iNo = iNo / 10;

        }

        if(iSum == iTemp)
        {
            System.out.println("It is Armstrong number");
        }
        else
        {
            System.out.println("It is not Armstrong number");
        }

    }
}
/*
Enter Number  :
153
Number of digits are : 3
It is Armstrong number */

