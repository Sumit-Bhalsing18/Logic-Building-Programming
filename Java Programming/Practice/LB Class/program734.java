import java.util.*;

class program734
{

    public static void main()
    {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter string :");
      String str = sobj.nextLine();

      str = str.trim();

      str =str.replaceAll("\\s+", " ");

      String Tokens[] = str.split(" ");

      System.out.println("Number of word present :"+Tokens.length);

      for(int i =0 ; i < Tokens.length ;i++)
      {
        System.out.println("String are : "+Tokens[i] +" String length :"+ Tokens[i].length());
      }
    }




}