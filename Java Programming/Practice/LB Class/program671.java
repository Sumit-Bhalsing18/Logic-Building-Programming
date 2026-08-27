import java.io.*;  //file chi consern gosti hyat ahe
import java.util.*;  //scanner sathi
class program671
{
    
    public static void main(String A[]) 
    {
      String Fname = null;
      File fobj = null;
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter file name :");
      Fname = sobj.nextLine();

      fobj = new File(Fname);

      if(fobj.exists())
      {
           System.out.println("File name :"+fobj.getName());
            System.out.println("Absolute path :"+fobj.getAbsolutePath());
             System.out.println("File size:"+fobj.length());

      }
      else
      {
        System.out.println("THere is no such file");
      }
    }
}

