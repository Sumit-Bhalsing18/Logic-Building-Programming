import java.util.*;

class program141
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt =0;
        
        System.out.println("Enter the number of elements");

        int iLength =sobj.nextInt();

        int Brr[] = new int[iLength];   //dynamic memory allocation

        System.out.println("Enter the  elements");
        for(iCnt=0; iCnt < Brr.length; iCnt++)
        {
            Brr[iCnt] = sobj.nextInt();
        }
        System.out.println("elements of array are");

        for(iCnt=0; iCnt<Brr.length; iCnt ++)
        {
            System.out.println(Brr[iCnt]); 
        }

        Brr = null;
        System.gc(); //sangitl

    }
}
