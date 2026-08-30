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
}
class program715
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
    }
}
/*
Enter string :
india is my country pune mh12 maharashtra
Numbers of words are :7
india : 5
is : 2
my : 2
country : 7
pune : 4
mh12 : 4
maharashtra : 11 */