import java.io.*;  //file chi consern gosti hyat ahe
import java.util.*;  //scanner sathi
class program663
{
    
    public static void main(String A[]) throws IOException
    {
      FileWriter fwobj = new FileWriter("Demo.txt");//FileWriter navin file createe kart

      fwobj.write("Jay Ganesh...");

         fwobj.close();

    }
}

