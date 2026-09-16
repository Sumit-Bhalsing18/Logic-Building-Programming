import java.util.*;

class program866
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

        System.out.println(hobj.firstEntry());//key ani value doni print 
        System.out.println(hobj.lastEntry());

        System.out.println(hobj.higherKey(20));
        System.out.println(hobj.lowerKey(20));
    }
}
/*
{10=C++ programming, 20=C programming, 30=java programming}
10
30
10=C++ programming
30=java programming
30
10 */