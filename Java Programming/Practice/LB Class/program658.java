import java.io.*;  //file chi consern gosti hyat ahe

class program658
{
    
    public static void main(String A[]) 
    {
        try
        {
          File fobj = new File("Demo.txt");   //filech name Demo 

          if(fobj.exists())
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

/*1)हा code नीट समजून घे. यामध्ये पहिले file आहे का check करतो, नसेल तर create करतो.

2)                 File Object
                      ↓
              Demo.txt आहे का?
                 ↙          ↘
              YES            NO
               ↓              ↓
      "File already       createNewFile()
         present"              ↓
                          "File gets
                       successfully created"
                       
3)exists() → check करते

*/
//C:\Users\user5\OneDrive\Desktop\LB\Packer_Unpacker>java program658.java
//File gets succesfully created

//C:\Users\user5\OneDrive\Desktop\LB\Packer_Unpacker>java program658.java
//File alraedy present */