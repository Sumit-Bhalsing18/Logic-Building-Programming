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
      String temp = null;
      str = str.trim();

      str = str.replaceAll("\\s+"," ");//1ch space fakt second parameter

      String Tokens[] = str.split(" ");



     for(int i = 0; i < Tokens.length;i++)
    {
      if( Tokens[i].length() > iMax)
      {
         iMax = Tokens[i].length();
         temp = Tokens[i];
      }
       
    }
    System.out.println("max lebgth is"+iMax);
   System.out.println("largest world  is"+temp);
   }

   int PatternMatching(String str ,String word)
   {
      int iCount = 0;
      str = str.trim();

      str = str.replaceAll("\\s+"," ");//1ch space fakt second parameter

      String Tokens[] = str.split(" ");

     for(int i = 0; i < Tokens.length;i++)
    {
        if(word.equals(Tokens[i]) )
        {
         iCount++;
        }
    }
    return iCount;
   }
}
class program718
{

    public static void main(String A[])
    {
      StringX strobj = new StringX();
      int iRet = 0;
      Scanner sobj = new Scanner(System.in);
      String str = null;

      System.out.println("Enter string :");
      str =sobj.nextLine();

      iRet = strobj.PatternMatching(str , "are");

      System.out.println("Frequency of the word is"+iRet);
     
    }
}
