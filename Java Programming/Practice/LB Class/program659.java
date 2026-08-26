import java.io.*;  //file chi consern gosti hyat ahe

class program658
{
    
    public static void main(String A[]) 
    {
        try
        {
          File fobj = new File("Demo.txt");   //filech name Demo 
          boolean bRet = false;

          bRet = fobj.exists();
          if(bRet == true)
          {
            System.out.println("File alraedy present");
          }
          else
          {
            fobj.createNewFile();
             System.out.println("File gets succesfully created");
          }
        }
        catch(IOException iobj)
        {
           System.out.println(iobj);
        }
        catch(Exception eobj)
        {
           System.out.println(eobj);
        }

    }
}

