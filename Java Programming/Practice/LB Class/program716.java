import java.util.*;

class StringX
{
   int CountWords(String str)
   {
      str = str.trim();

      str = str.replaceAll("\\s+"," ");//1ch space fakt second parameter

      String Tokens[] = str.split(" ");

      return Tokens.length;
   }

   void DisplayWords(String str)
   {
      str = str.trim();

      str = str.replaceAll("\\s+"," ");//1ch space fakt second parameter

      String Tokens[] = str.split(" ");

     for(int i = 0; i < Tokens.length;i++)
    {
        System.out.println(Tokens[i] +" : "+ Tokens[i].length());
    }
   }

   void LargestWord(String str)
   {
      int iMax = 0;
      str = str.trim();

      str = str.replaceAll("\\s+"," ");//1ch space fakt second parameter

      String Tokens[] = str.split(" ");



     for(int i = 0; i < Tokens.length;i++)
    {
      if( Tokens[i].length() > iMax)
      {
         iMax = Tokens[i].length();
         
      } 
    }
    System.out.println("max length is :"+iMax);
   }
}
class program716
{

    public static void main(String A[])
    {
      StringX strobj = new StringX();
      int iRet = 0;
      Scanner sobj = new Scanner(System.in);
      String str = null;

      System.out.println("Enter string :");
      str =sobj.nextLine();

      iRet = strobj.CountWords(str);

      System.out.println("Numbers of words are :"+iRet);

      strobj.DisplayWords(str);
      strobj.LargestWord(str);
    }
}
