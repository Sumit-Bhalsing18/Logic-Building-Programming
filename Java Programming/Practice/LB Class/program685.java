import java.io.*;
import java.util.Scanner;

class program685
{
    public static void main(String A[]) throws Exception
    {
       Scanner sobj = new Scanner(System.in);
       String FolderName = null;
       System.out.println("Enter folder name :");
       FolderName = sobj.nextLine();

       File fobj = new File(FolderName);

       if(fobj.exists())
       {
        System.out.println("Folder exists");
       }
       else
       {
         System.out.println("There is no such Folder");
       }
    }
}
/*
याचा अर्थ:

fobj ज्या नावाला represent करतो, ते अस्तित्वात आहे का?

इथे तो folder आहे की file आहे हे check केलेलं नाही. */