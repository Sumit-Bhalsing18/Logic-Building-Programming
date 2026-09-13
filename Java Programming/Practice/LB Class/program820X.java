 
import java.io.*; //buffer ni input

class program819
{
    public static void main(String A[]) throws Exception  //karan buffered reader exception create karto
    {

       int iNo = 0 ;
       int iSum = 0;
       int iDigit = 0;
       int iTemp = 0;

       int iStart = 0,iEnd = 0 , i =0;

        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter Starting point :");
        iStart = Integer.parseInt(bobj.readLine());  //convert string to Integer

        System.out.println("Enter Ending point :");
        iEnd = Integer.parseInt(bobj.readLine());
        
        System.out.println("Harshad number are :");
        for(iStart = 0 ; iStart <= iEnd ;iStart++)
        {
            iNo = i ;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        System.out.println("Summation is :"+iSum);

        if(i % iSum == 0)
        {
            System.out.println(i);
        }  
    
        iSum = 0 ;
        }


    }
}



