//input : 5
//output :1 * 2 * 3 * 4 * 5 *
import java.util.*;

class program172
{

    static public void Display(int iNo)
    {
       int iCnt =0;
       for(iCnt =1;iCnt <=iNo ;iCnt++)
       {
        System.out.print(iCnt+"\t*\t"); //aplyala ekach line madhe karaych ahe print mhnun println nahi use kela only print
       }
    }
    public static void main(String A[])
    {
        int iValue =0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number of elements ");
        iValue= sobj.nextInt();

        Display(iValue);

    } 
}