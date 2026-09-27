import java.util.*;

//java program949.java 10 11

class program949
{
    public static void main(String A[])
    {
      int Ans = 0;
      if(A.length != 2)
      {
        System.out.println("Invalis number of argument");
        return ;
      }

     // Ans = A[0] + A[1]; //karan ethr myexe parameter ghrt nahi //Error

      System.out.println("Addition is :"+( A[0] + A[1]));

    }
}