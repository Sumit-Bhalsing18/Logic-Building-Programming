import java.io.*;  //file chi consern gosti hyat ahe

class program661
{
    
    public static void main(String A[]) 
    {
      File fobj = null;
      boolean bRet = false;

        try
        {
           fobj = new File("Demo.txt");   //file navachya class cha object banavto 
         

          bRet = fobj.exists();
          if(bRet == true)   //file exist ahe tar delete kar ani nasel tar sang file nahiye
          {
            fobj.delete();
            System.out.println("File gets deleted");
          }
          else
          {
             System.out.println("There is no such file");
          }

        }

        catch(Exception eobj)
        {
           System.out.println(eobj);
        }

    }
}

