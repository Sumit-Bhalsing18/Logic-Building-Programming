import java.io.*;
import java.util.Scanner;

class program686
{
    public static void main(String A[]) throws Exception
    {
       Scanner sobj = new Scanner(System.in);
       String FolderName = null;
       System.out.println("Enter folder name :");
       FolderName = sobj.nextLine();

       File fobj = new File(FolderName);

       ////= "हे अस्तित्वात आहे AND हे folder आहे का?"
       if((fobj.exists()) && (fobj.isDirectory()))
       {
        System.out.println("Folder exists");
       }
       else
       {
         System.out.println("There is no such Folder");
       }
    }
}