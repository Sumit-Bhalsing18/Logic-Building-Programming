import java.io.*;  //file chi consern gosti hyat ahe
import java.util.*;  //scanner sathi
class program679
{
    
    public static void main(String A[]) throws Exception
    {
      String Fname = null;
      File fobj = null;
      FileInputStream fiobj = null;

      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter file name :");
      Fname = sobj.nextLine();

      fobj = new File(Fname);

      fiobj = new  FileInputStream (fobj);

      

      byte Arr[] = new byte[50]; 
      if(fobj.exists())
      {
         fiobj.read(Arr);
         
         String str = new String(Arr); //इथे Arr मधला byte data String मध्ये convert केला.

         System.out.println(str);
      }
      else
      {
        System.out.println("THere is no such file");
      }
    }
}
/*
1. new FileInputStream(fobj)

इथे FileInputStream चा object तयार होतो.

हा object file मधून data READ करण्यासाठी आहे.

2. fiobj =

तयार झालेला FileInputStream object fiobj या reference मध्ये ठेवला जातो.

म्हणून:

new FileInputStream(fobj)
        ↓
FileInputStream object
        ↓
      fiobj
      
3)
getBytes() = String ला bytes मध्ये convert

new String(Arr) = bytes ला String मध्ये convert*/
