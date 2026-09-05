import java.util.*;

class program767
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        Hashtable <Character , Integer> hobj = new Hashtable<Character , Integer>();

        hobj.put('a',1);
        hobj.put('b',1);   //duplicate kel a ani  b
        hobj.put('a',2);
        hobj.put('b',2);

        System.out.println(hobj);

    }
}
/*{b=2, a=2} */