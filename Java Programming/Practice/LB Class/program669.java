import java.io.*;  //file chi consern gosti hyat ahe
import java.util.*;  //scanner sathi
class program669
{
    
    public static void main(String A[]) 
    {
      FileReader frobj =null;
      int iRet = 0;
      char Buffer[] = new char[10];

      try
      {
        frobj = new FileReader("Demo.txt");
         
        frobj.read(Buffer);

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

