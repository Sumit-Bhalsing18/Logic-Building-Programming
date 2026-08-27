import java.io.*;  //file chi consern gosti hyat ahe
import java.util.*;  //scanner sathi
class program678
{
    
    public static void main(String A[]) throws Exception
    {
      String Fname = null;
      File fobj = null;
      FileInputStream fiobj = null;

      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter file name :");
      Fname = sobj.nextLine();

      fobj = new File(Fname);

      fiobj = new  FileInputStream (fobj);

      

      byte Arr[] = new byte[50]; //bhand banvaych rikam data gheyla janar read the data
      if(fobj.exists())
      {
         fiobj.read(Arr);   
         System.out.println(new String (Arr));
      }
      else
      {
        System.out.println("THere is no such file");
      }
    }
}
/*
Program 1
File
 ↓
FileInputStream
 ↓
read()
 ↓
byte Arr[]
 ↓
println(Arr)
 ↓
❌ Actual text नाही

Program 2
File
 ↓
FileInputStream
 ↓
read()
 ↓
byte Arr[]
 ↓
new String(Arr)
 ↓
String
 ↓
println()
 ↓
✅ Actual text

3)तुला वाटेल:

Arr मध्ये "Marvellous Infosystems" आहे, मग तेच print होईल.

पण तसं होत नाही.

कारण Arr हा:

byte array

आहे.

Java मध्ये array object ला direct println() केल्यावर त्यातील bytes चे actual characters print होत नाहीत.

त्याऐवजी array चा object representation/reference type output येतो, साधारण:

[B@5e91993f

4)System.out.println(new String(Arr));

इथे आपण Arr मधले bytes परत String मध्ये convert केले.

 */
