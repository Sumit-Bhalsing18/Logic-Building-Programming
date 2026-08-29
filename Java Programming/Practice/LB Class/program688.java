import java.io.*;
import java.util.Scanner;

class program688
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
       }
      }
       else
       {
         System.out.println("There is no such Folder");
       }
    }
}
/*
हा loop folder मधल्या प्रत्येक file चं नाव एक-एक करून print करतो.
fArr[i] मधल्या File object चं नाव देतो. */