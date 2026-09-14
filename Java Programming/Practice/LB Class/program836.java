import java.io.*;
import java.util.*;

class program836
{
    public static void main(String A[])
    {
       ArrayList <String>aobj = new ArrayList<String>();
       aobj.add("Pune");
       aobj.add("Mumbai");
       aobj.add("Satara");
       aobj.add("Nashik");
       aobj.add("Mumbai");  //duplicate 

       aobj.remove(4);

       for(String str : aobj)
       {
           System.out.println(str);
       }
       aobj.clear();//sampurn arraylist cha data gela 

       System.out.println(aobj);

    }
}
/*
Pune
Mumbai
Satara
Nashik
[]  he karun etkk kall arraylist heneric ahe karan adhi apn integer ani atta string  */



