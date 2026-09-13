
// x =3 , y = 5
//output = 3 * 3 * 3 * 3 * 3 
import java.io.*; //buffer ni input

class program814
{
    public static void main(String A[]) throws Exception  //karan buffered reader exception create karto
    {
        int iFact[] = {1,1,2,6,24,120,720,5040,40320,362880};

        int x = 0 , y = 0 , i =0;
        int iPower = 0;
        
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter Number as a base :");
        x = Integer.parseInt(bobj.readLine());  //convert string to Integer

        System.out.println("Enter Number as a Power :");
        y= Integer.parseInt(bobj.readLine()); 

        iPower = 1;

        iPower = (int)Math.pow(x,y);
    
        System.out.println("Resulit is "+iPower);

        
      
         

    }
}

