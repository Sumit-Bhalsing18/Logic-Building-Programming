import java.io.*;
import java.util.*;

class program832
{
    public static void main(String A[])
    {
       ArrayList <Integer>aobj = new ArrayList<Integer>();
       aobj.add(11);
       aobj.add(21);
       aobj.add(51);
       aobj.add(101);
       aobj.add(51);

       for(int i = 0; i< aobj.size();i++)
       {
           System.out.println(aobj.get(i));
       }

    }
}
/*
11
21
51
101
51
 */


