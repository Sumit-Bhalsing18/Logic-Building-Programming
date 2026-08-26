import java.io.*;  //file chi consern gosti hyat ahe

class program656
{
    
    public static void main(String a[]) 
    {
        try
        {
          File fobj = new File("Demo.txt");   //filech name Demo 

          fobj.createNewFile();  
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
/*
1) File/Input-Output related error आला तर तो IOException मध्ये पकडला जाईल 
आणि System.out.println(iobj) तो error screen वर print करेल. 

2)                 main()
                   ↓
                 try
                   ↓
        File object तयार करा
                   ↓
          createNewFile()
                   ↓
             ┌─────┴─────┐
             ↓           ↓
          No Error      Error
             ↓           ↓
          पुढे जा    कोणता error?
                         ↓
                  ┌──────┴──────┐
                  ↓             ↓
             IOException    Other Exception
                  ↓             ↓
          catch(IOException) catch(Exception)
                  ↓             ↓
               print          print*/