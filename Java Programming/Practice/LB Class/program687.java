import java.io.*;
import java.util.Scanner;

class program687
{
    public static void main(String A[]) throws Exception
    {
       Scanner sobj = new Scanner(System.in);
       String FolderName = null;
       System.out.println("Enter folder name :");
       FolderName = sobj.nextLine();

       File fobj = new File(FolderName);

       if((fobj.exists()) && (fobj.isDirectory()))
       {
        System.out.println("Folder exists");

        File fArr[] = fobj.listFiles();//listFiles() method ahe ani ti tya folder madhli sagli mahiti dete


       System.out.println("Number of files in folder "+fArr.length);
       }
       else
       {
         System.out.println("There is no such Folder");
       }
    }
}
/*
File fArr[] = fobj.listFiles();

केल्यावर fArr मध्ये त्या entries चे File objects येतात.

fArr
 ↓
┌──────────────┐
│ abc.txt      │
│ xyz.txt      │
│ Test.java    │
│ Images       │
└──────────────┘

2)fArr मध्ये actual file चा data येत नाही.

उदा. abc.txt मध्ये "Hello" लिहिलं असेल, तरी fArr मध्ये "Hello" येणार नाही.

fArr मध्ये त्या file ला represent करणारा File object येतो.

3)fArr array मध्ये किती File objects आहेत? te kalt
*/