import java.io.*;  //file chi consern gosti hyat ahe
import java.util.*;  //scanner sathi
class program681
{
    
    public static void main(String A[]) throws Exception
    {
      String Fname = null;
      int iRet = 0;
      File fobj = null;
      FileInputStream fiobj = null;

      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter file name :");
      Fname = sobj.nextLine();

      fobj = new File(Fname);

      fiobj = new  FileInputStream (fobj);

      

      byte Buffer[] = new byte[50]; //bhand banvaych rikam data gheyla janar read the data
      if(fobj.exists())
      {
         String str = null;

         while((iRet = fiobj.read(Buffer)) != -1)
         {
           str = new String(Buffer); //इथे new String(Buffer) नवीन String object तयार करतो.
           System.out.println(str);

           str = null;
         }
      }
      else
      {
        System.out.println("THere is no such file");
      }
    }
}
/*
 */
