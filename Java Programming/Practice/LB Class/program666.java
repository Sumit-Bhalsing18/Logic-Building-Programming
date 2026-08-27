import java.io.*;  //file chi consern gosti hyat ahe
import java.util.*;  //scanner sathi
class program666
{
    
    public static void main(String A[]) 
    {
      FileReader frobj =null;

      try
      {
        frobj = new FileReader("Demo.txt");
         
        System.out.println(frobj.read());//ascii value print hoil ethe D first character chi 
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

