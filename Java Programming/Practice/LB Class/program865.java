import java.util.*;

class program864
{
    public static void main(String A[])
    {
        //data sorted by key 
        TreeMap <Integer,String> hobj = new TreeMap <Integer,String>();

        hobj.put(20,"C programming");
        hobj.put(10,"C++ programming");
        hobj.put(30,"java programming");
        

        System.out.println(hobj);
        System.out.println(hobj.firstKey());
        System.out.println(hobj.lastKey());

        System.out.println(hobj.firstEntry());
        System.out.println(hobj.lastEntry());
    }
}