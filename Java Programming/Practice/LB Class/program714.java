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
        System.out.println(Tokens[i]);
    }
   }
}
class program714
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
Memory Layout
                STACK
        ┌─────────────────────┐
        │ strobj              │
        │ 0x100               │────────────┐
        │                     │            │
        │ str                 │───┐        │
        │ 0x500               │   │        │
        └─────────────────────┘   │        │
                                  │        │
                                  ↓        ↓
                              HEAP / OBJECT AREA

                         ┌─────────────────────┐
0x100 ────────────────→  │ StringX Object      │
                         │                     │
                         │ CountWords()        │
                         └─────────────────────┘


                         ┌─────────────────────┐
0x500 ────────────────→  │ "India is my country"│
                         └─────────────────────┘

म्हणजे:

strobj.CountWords(str);

याचा flow:

strobj
  ↓
StringX object
  ↓
CountWords()
  ↑
  str
सर्वात महत्त्वाचं

strobj मध्ये पूर्ण StringX object नसतो.

तो फक्त StringX object चा reference/address ठेवतो.

म्हणून:

StringX strobj = new StringX();

याचा अर्थ:

new StringX() → Heap मध्ये object तयार कर
strobj → त्या object चा reference ठेव
 */