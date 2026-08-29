import java.io.*;
import java.util.Scanner;

class program689
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

        File fArr[] = fobj.listFiles();


       System.out.println("Number of files in folder "+fArr.length);

       int i = 0;

       for( i= 0; i < fArr.length;i++)
       {
         System.out.println(fArr[i].getName());
         System.out.println(fArr[i].length());
       }
      }
       else
       {
         System.out.println("There is no such Folder");
       }
    }
}
/*
1)त्या file ची size bytes मध्ये देतो.

उदा. folder मध्ये:

abc.txt → 100 bytes
xyz.txt → 250 bytes

2)  fArr.length	Array ची size	Array असल्यामुळे length property
    fArr[i].length()	File ची size	File class मध्ये length() method असल्यामुळे*/