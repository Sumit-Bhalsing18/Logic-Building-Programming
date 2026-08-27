import java.io.*; //java.io package मध्ये FileReader, FileWriter, FileInputStream, IOException असे file handling संबंधित classes आहेत.
import java.util.*;  //scanner sathi
class program670
{
    
    public static void main(String A[]) 
    { //class    //reference variable
      FileReader frobj =null; //इथे frobj नावाचा FileReader type चा reference variable तयार केला.
      
      char Buffer[] = new char[20];//Buffer मध्ये maximum 20 characters ठेवता येतील.


      try   //risky code asto 
      {
        frobj = new FileReader("Demo.txt");//ही line Demo.txt file open करण्यासाठी FileReader object तयार करते.
                                                     //आता frobj हा Demo.txt file शी connected आहे.
        frobj.read(Buffer,3,10);

        System.out.println(Buffer);
      }
      catch(IOException iobj)     //
      {
          System.out.println(iobj);
      }
      finally
      {

      }


    }
}
/*
1)read() चा हा form:

read(Buffer, offset, length)

इथे:

Buffer = कुठे data ठेवायचा
3      = Buffer मध्ये कुठल्या position पासून ठेवायचा
10     = किती characters read करायचे

2)3 म्हणजे file मधून 3rd character पासून read करायचे नाही.

तो Buffer चा starting index आहे.

2)FileReader frobj = null;
);

3)Memory मध्ये:

Stack Memory

frobj
 └── null

म्हणजे frobj सध्या कुठल्याही FileReader object कडे point करत नाही.

Step 2 — आता ही line execute होते
frobj = new FileReader("Demo.txt");

यात दोन गोष्टी होतात.

new FileReader("Demo.txt")

new वापरल्यामुळे FileReader चा object Heap मध्ये तयार होतो.

Heap Memory

┌──────────────────────────┐
│   FileReader Object      │
│                          │
│   Demo.txt शी संबंधित    │
│   file-reading माहिती    │
└──────────────────────────┘

आता frobj त्या object चा reference ठेवतो.

Stack Memory                 Heap Memory

frobj ────────────────────► ┌─────────────────────┐
                            │ FileReader Object   │
                            │                     │
                            │ Demo.txt related    │
                            │ information         │
                            └─────────────────────┘

4)FileReader → class
new → त्या class चा object तयार करतो
frobj → त्या object चा reference
"Demo.txt" → FileReader ला कोणती file read करायची ते सांगतो.

म्हणून interview मध्ये विचारलं:

5)What is FileReader?"
FileReader is a class from the java.io package used to read character data from a file.
 */
