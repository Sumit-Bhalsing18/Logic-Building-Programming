import java.util.*;

class program768
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        HashMap <Character , Integer> hobj = new HashMap<Character , Integer>();

        hobj.put('a',1);
        hobj.put('b',1);   //duplicate kel a ani  b
        hobj.put('a',2);
        hobj.put('b',2);   //chappal satnd example 

        System.out.println(hobj);
        System.out.println(hobj.get('b'));

    }
}
/*
{a=2, b=2}
2
  */