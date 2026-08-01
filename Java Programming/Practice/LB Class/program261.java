import java.util.*;

class program261
{
    public static void main(String A[])
    {
      Scanner sobj = new Scanner(System.in);
      String Arr = null;

      System.out.println("Enter string :");

      Arr = sobj.nextLine();

      //all below line are error directly apn asa access nahi karu shakat
      //Arr ha string ahe Apn tyala array sarkh access nahi karu shakat 
      System.out.println(Arr[0]);
      System.out.println(Arr[1]);
      System.out.println(Arr[2]);

    }
}