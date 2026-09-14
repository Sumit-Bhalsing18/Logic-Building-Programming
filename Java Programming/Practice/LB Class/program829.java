 
import java.io.*; //buffer ni input

class program829
{
    public static void main(String A[]) throws Exception  //karan buffered reader exception create karto
    {

       int iNo = 0 ;
       int iTemp = 0;
       int iSquare = 0;
       int iCount = 0 ;
       int iDen = 0; //khalcha 

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

        iDen = (int)Math.pow(10,iCount);

        if(iSquare % iDen == iTemp)
        {
            System.out.println("It is automorphic number");
        }
        else
        {
            System.out.println("It is not automorphic number");
        }

    }
}
/*
Enter Number  :
376
It is automorphic number

Enter Number  :
345
It is not automorphic number*/



