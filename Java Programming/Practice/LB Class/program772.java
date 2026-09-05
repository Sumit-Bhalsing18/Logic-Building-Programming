import java.util.*;

class program772
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

    System.out.println("Enter string");
    String str =sobj.nextLine();

    char Arr[] = str.toCharArray();

    for(char ch : Arr)   //it work likes  (for each) 
    {
        System.out.println(ch);
    }
     
    }
}
/*
Enter string
hello
h
e
l
l
o

drawback control nahiye ethe parat 2 2 ni pudh jaych asel tar nahi jata yet */
