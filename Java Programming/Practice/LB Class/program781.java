import java.util.*;

class program781

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

    ;
    for(String s : Tokens)
    {
      if(hobj.containsKey(s))
      {

        hobj.put(s,hobj.get(s)+1);
      }
      else
      {
        hobj.put(s,1);
      }
    }
    System.out.println("All Unique words are :"); //duplicate value 1 dach fakt 

    for(String sValue : hobj.keySet())
    {
       System.out.println(sValue);
    }
  }
}
/*
All Unique words are :
country
in
i
is
india
my
live */


