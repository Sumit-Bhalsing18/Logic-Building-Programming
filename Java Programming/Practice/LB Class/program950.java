import java.util.*;

//java program949.java 10 11

class program950
{
    public static void main(String A[])
    {
      int Ans = 0;
      if(A.length != 2)
      {
        System.out.println("Invalis number of argument");
        return ;
      }

      Ans =Integer.parseInt(A[0] ) + Integer.parseInt(A[1]);

      System.out.println("Addition is :"+Ans);

    }
}