import java.io.*;
import java.util.*;

class program835
{
    public static void main(String A[])
    {
       ArrayList <Integer>aobj = new ArrayList<Integer>();
       aobj.add(11);
       aobj.add(21);
       aobj.add(51);
       aobj.add(101);
       aobj.add(51);

       aobj.remove(4);

       for(int no : aobj)
       {
           System.out.println(no);
       }
       aobj.clear();//sampurn arraylist cha data gela 

       System.out.println(aobj);

    }
}
/* sarkh output ahe 
11
21
51
101
[]  //claear mule rikami zali arraylist 
 */


