import java.util.*;

class program766
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        HashMap <Character , Integer> hobj = new HashMap<Character , Integer>();

        hobj.put('a',1);
        hobj.put('b',1);   //duplicate kel a ani  b
        hobj.put('a',2);
        hobj.put('b',2);

        System.out.println(hobj);

    }
}
/*
{a=2, b=2} juni ki chi value nighun jate jevha duplicate key hote tevha  */