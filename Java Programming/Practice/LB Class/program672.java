import java.io.*;  //file chi consern gosti hyat ahe
import java.util.*;  //scanner sathi
class program672
{
    
    public static void main(String A[]) 
    {
      String Fname = null;
      File fobj = null;
      FileOutputStream foobj = null;  //OutputStream मध्ये Output म्हणजे program मधून बाहेर जाणारा data, म्हणून तो file मध्ये write करतो.

      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter file name :");
      Fname = sobj.nextLine();

      fobj = new File(Fname);

      foobj = new  FileOutputStream (fobj);  //fobj madhun data gheychay ani foobj madhe write karaycha 

      String Data = "Marvellous Infosystems";
      if(fobj.exists())
      {
         foobj.write(Data);   //Error
      }
      else
      {
        System.out.println("THere is no such file");
      }
    }
}
/*
String Data = "Marvellous Infosystems";

म्हणजे Data चा type आहे:
String

पण तू लिहितोस:

foobj.write(Data);

इथे foobj हा FileOutputStream चा object आहे.

FileOutputStream.write() ला String थेट देता येत नाही.

त्याला byte data पाहिजे. */
