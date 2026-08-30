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
    System.out.println("max length is"+iMax);
    System.out.println("largest world  is"+temp);
   }
}
class program717
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
/*
Enter string :
india country pune maharashtra mh 12 lb ppa
Numbers of words are :8
india : 5
country : 7
pune : 4
maharashtra : 11
mh : 2
12 : 2
lb : 2
ppa : 3
max length is 11
largest world  is maharashtra */