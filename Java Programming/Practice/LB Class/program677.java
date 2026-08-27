import java.io.*;  //file chi consern gosti hyat ahe
import java.util.*;  //scanner sathi
class program677
{
    
    public static void main(String A[]) throws Exception
    {
      String Fname = null;
      File fobj = null;
      FileInputStream fiobj = null;  //FileInputStream हा class आहे जो file मधून data READ करण्यासाठी वापरतो.

      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter file name :");
      Fname = sobj.nextLine();

      fobj = new File(Fname);

      fiobj = new  FileInputStream (fobj);

      String Data = "";

      byte Arr[] = new byte[50]; //bhand banvaych rikam data gheyla janar read the data
      if(fobj.exists())
      {
         fiobj.read(Arr);   
         System.out.println(Arr);
      }
      else
      {
        System.out.println("THere is no such file");
      }
    }
}
/*1)
    Demo.txt
                ↑
        ┌───────┴───────┐
        │               │
      fiobj           foobj
        │               │
      READ            WRITE
एकदम सोपं:

fobj = File ची ओळख

fiobj = File मधून घेण्यासाठी (Input = आत)

foobj = File मध्ये टाकण्यासाठी (Output = बाहेर)

2)इथे fiobj ला एका FileInputStream object शी जोडले.

समजा:

fobj = new File("Demo.txt");

मग:

fobj
 ↓
Demo.txt

आणि:

fiobj = new FileInputStream(fobj);

म्हणजे:

fiobj
 ↓
Demo.txt मधून DATA READ करण्याचा मार्ग

म्हणून fiobj स्वतः data नाही.

fiobj = file मधून data वाचण्यासाठी वापरणारा object.

उदा.:

int iRet = fiobj.read();

इथे fiobj.read() म्हणजे:

"fiobj, तू ज्या file शी connected आहेस, तिथून data read कर."
 */

