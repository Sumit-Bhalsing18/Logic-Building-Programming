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

      int iMax = 0;
      String temp = null;
      for(int i =0 ; i < Tokens.length ;i++)
      {
         if(Tokens[i].length() > iMax)
         {
            iMax = Tokens[i].length();
            temp =Tokens[i];
         }
      }
      System.out.println("Maximum length is "+iMax+" Maximum string is : "+temp);
    }
}