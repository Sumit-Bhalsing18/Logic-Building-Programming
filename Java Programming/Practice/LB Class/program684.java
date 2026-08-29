import java.io.*;
import java.util.*;

class program684
{
    public static void main(String A[])throws IOException
    {
        /*
        FnameSrc → source file चं नाव
        FnameDest → destination file चं नाव

        Source      = A.txt
        Destination = B.txt
    */
        String FnameSrc=null;
        String FnameDest=null;

        int iRet=0;   //read() किती bytes read करतो ते iRet मध्ये येतं.

        /*
        fobjSrc → Source file ला represent करतो
        fobjDest → Destination file ला represent करतो
        */
        File fobjSrc=null;
        File fobjDest=null;

        FileInputStream fiobj=null;    //read
        FileOutputStream foobj=null;   //write

        Scanner sobj =new Scanner(System.in);

        System.out.println("Enter Source File name");
        FnameSrc=sobj.nextLine();       //FnameSrc = "A.txt"

        System.out.println("Enter Destination File name");
        FnameDest=sobj.nextLine();     //FnameDest = "B.txt"

        //file object creation
        fobjSrc=new File(FnameSrc);
        fobjDest=new File(FnameDest);

        fiobj=new FileInputStream(fobjSrc); //A.txt मधून data read करण्यासाठी fiobj तयार झाला.
        foobj=new FileOutputStream(fobjDest);//B.txt मध्ये data write करण्यासाठी foobj तयार झाला.


        /*
        B.txt अस्तित्वात नसेल तर create करण्याचा प्रयत्न करतो.
        पण: FileOutputStream(fobjDest) आधीच file create करू शकतो,
        त्यामुळे या code मध्ये ही line redundant आहे. 
        */
        fobjDest.createNewFile();

        byte Buffer[]=new byte[50];

        if(fobjSrc.exists())
        {
            String str = null;

            while((iRet=fiobj.read(Buffer))!=-1)
            {
                /*
                Buffer मधून 0 position पासून iRet इतके bytes
                destination file मध्ये write कर.
                */
            
                foobj.write(Buffer,0,iRet);
                

            }
            fiobj.close();
            foobj.close();

            
        }
        else
        {
            System.out.println("thete is no such a file");
        }
          
    }    

}