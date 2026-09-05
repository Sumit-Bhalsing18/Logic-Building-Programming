import java.util.*;

class program780

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
    System.out.println(hobj);
  }
}
/*
Enter string :
india is my country
{country=1, is=1, india=1, my=1} */


