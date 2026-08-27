import java.io.*;  //file chi consern gosti hyat ahe
import java.util.*;  //scanner sathi
class program680
{
    
    public static void main(String A[]) throws Exception
    {
      String Fname = null;
      int iRet = 0;
      File fobj = null;
      FileInputStream fiobj = null;

      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter file name :");
      Fname = sobj.nextLine();

      fobj = new File(Fname);

      fiobj = new  FileInputStream (fobj);

      

      byte Buffer[] = new byte[50]; //bhand banvaych rikam data gheyla janar read the data
      if(fobj.exists())
      {
         String str = null;

         while((iRet = fiobj.read(Buffer)) != -1)  //karan file chya last la -1 ast 
         {
           str = new String(Buffer);
           System.out.println(str);
         }
      }
      else
      {
        System.out.println("THere is no such file");
      }
    }
}
/*
"1)File कितीही मोठी असली तरी ती पूर्ण file छोटे-छोटे chunks (50 bytes) मध्ये read करून display करणे. 

2)while((iRet = fiobj.read(Buffer)) != -1)

ही line सर्वात important आहे.

ती असे समज:

File मधून Buffer मध्ये data read कर. किती bytes read झाले ते iRet मध्ये ठेव. जोपर्यंत -1 मिळत नाही तोपर्यंत पुन्हा पुन्हा read कर.

iRet काय ठेवतो?

उदाहरण file मध्ये 120 bytes आहेत.

पहिल्यांदा:

read(Buffer)
↓
50 bytes
↓
iRet = 50

दुसऱ्यांदा:

read(Buffer)
↓
50 bytes
↓
iRet = 50

तिसऱ्यांदा:

read(Buffer)
↓
20 bytes
↓
iRet = 20

पुन्हा read:

read(Buffer)
↓
file मध्ये काही उरले नाही
↓
iRet = -1

मग while बंद.

3)Buffer size = एका वेळेस maximum किती bytes fetch करायचे
👉 iRet = त्या वेळेस actual किती bytes मिळाले
*/