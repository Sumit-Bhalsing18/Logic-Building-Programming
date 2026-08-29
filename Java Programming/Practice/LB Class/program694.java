//3 Assignment kar very imp 
import java.io.*;
import java.util.Scanner;

class program694
{
    public static void main(String A[]) throws Exception
    {
      int iRet = 0;
       Scanner sobj = new Scanner(System.in);
       String FolderName = null;
       String  PackFileName = null;

       FileOutputStream foobj = null;
       FileInputStream fiobj = null;

       System.out.println("Enter folder name :");
       FolderName = sobj.nextLine();

       System.out.println("Enter the name of packed name :");
       PackFileName = sobj.nextLine();
       File fobjfolder = new File(FolderName);

       if((fobjfolder.exists()) && (fobjfolder.isDirectory()))
       {
        System.out.println("Folder exists");

        File fobjpack = new File(PackFileName);

        fobjpack.createNewFile();  //pack file gets created

        foobj = new FileOutputStream(fobjpack);

        File fArr[] = fobjfolder.listFiles();


       System.out.println("Number of files in folder "+fArr.length);

       int i = 0;

       byte Buffer[] = new byte[1024];//jay byte capital madhe lihil tevha toh treat hoto wrapper class madhun 

    for( i= 0; i < fArr.length;i++)
    {
        fiobj = new FileInputStream(fArr[i]);

        //write filname and size 
      
        //loop to read from fiobj and write to foobj
        fiobj = new FileInputStream(fArr[i]);

      while((iRet = fiobj.read(Buffer)) != -1)
      {
           foobj.write(Buffer,0,iRet);
      }
     
      fiobj.close();
    }
     foobj.close();
     sobj.close();
      }
       else
       {
         System.out.println("There is no such Folder");
       }
    }
}