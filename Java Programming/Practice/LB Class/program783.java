import java.util.*;

class program783

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
    

    int iMax =0;
    String temp = null;

    for(String sValue : hobj.keySet())
    {
       if(hobj.get(sValue) > iMax)
       {
        iMax = hobj.get(sValue);
        temp = sValue;
       }
    }
    System.out.println(temp+" occurs maximum number of times"+iMax);
  }
}
/*
Enter string :
india is india my country
india occurs maximum number of times2 */


