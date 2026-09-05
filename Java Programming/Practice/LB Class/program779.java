import java.util.*;

class program779

{
  public static void main(String A[])
  {
    HashMap <String ,Integer>hobj = new HashMap<String ,Integer>(); //Hashmap cha object

    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter string :");

    String str = sobj.nextLine();

    str = str.trim();
    str= str.replaceAll("\\s+", " ");

    String Tokens[] = str.split(" ");

    int iCount = 0;
    for(String s : Tokens)
    {
      if(hobj.containsKey(s))
      {
        iCount = hobj.get(s);
        hobj.put(s,iCount+1);
      }
      else
      {
        hobj.put(s,1);
      }
    }
    System.out.println(hobj);
  }
}
/*
Enter string :
india is my country i live in india
{country=1, in=1, i=1, is=1, india=2, my=1, live=1} */

