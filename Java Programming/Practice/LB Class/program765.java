import java.util.*;

class program765
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        HashMap <Character , Integer> hobj = new HashMap<Character , Integer>();

        hobj.put('a',1);
        hobj.put('b',1);   //duplicate kel a ani  b
        hobj.put('a',1);
        hobj.put('b',1);

        System.out.println(hobj);

    }
}
/*
{a=1, b=1} */