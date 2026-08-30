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
}
class program713
{

    public static void main(String A[])
    {
      StringX strobj = new StringX(); //varchya class cha object banla 
      int iRet = 0;
      Scanner sobj = new Scanner(System.in);
      String str = null;

      System.out.println("Enter string :");
      str =sobj.nextLine();

      iRet = strobj.CountWords(str);

      System.out.println("Numbers of words are :" +iRet);
    }
}
/*
Enter string :
    india   is   my    country
Numbers of words are :4
 */
/*
2) इथे आपण String चा array बनवला आहे.

सोपं समज:

String → data type
Tokens[] → array
म्हणजे:

String Array = अनेक Strings store करणारा array.

3)त्यामध्ये 1, 2, 3, 4 हे numbers store होत नाहीत, तर words store होतात.

Conceptually:

Tokens[0] = "India"
Tokens[1] = "is"
Tokens[2] = "my"
Tokens[3] = "country"

म्हणजे:

Tokens
  ↓
+---------+---------+-------+----------+
| "India" |  "is"   | "my"  | "country"|
+---------+---------+-------+----------+
    0         1        2         3

4)
StringDemo → class
strobj     → त्या class चा object

2. Method call

strobj.CountWords(str);

याचा अर्थ:

    strobj object च्या CountWords() method ला call कर.

आणि str हा method ला argument म्हणून pass केला आहे.

strobj
  |
  ↓
CountWords(str)
          ↑
       हा str pass केला
 */