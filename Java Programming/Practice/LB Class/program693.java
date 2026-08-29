import java.io.*;
import java.util.*;

class program693
{
    public static void main(String A[])throws IOException
    {
        Scanner sobj = new Scanner(System.in);
        String FolderName=null;
        String PackFileName=null;

        FileOutputStream foobj=null;
        FileInputStream fiobj=null;

        System.out.println("Enter folder name:");
        FolderName=sobj.nextLine();

        System.out.println("Enter the name of packed file:");
        PackFileName=sobj.nextLine();


        File fobjFolder=new File(FolderName);
        if((fobjFolder.exists())&&(fobjFolder.isDirectory()))
        {
            System.out.println("folder is exists");

            File fobjpack=new File(PackFileName);
            fobjpack.createNewFile();     //pack file gets created

            foobj=new FileOutputStream(fobjpack);

            File fArr[]=fobjFolder.listFiles();     //file che objects miltat
            System.out.println("number of file in folder:"+fArr.length);

            for(int i=0; i<fArr.length; i++)
            {
                fiobj=new FileInputStream(fArr[i]);

                System.out.println("file name:"+fArr[i].getName());
                //write file name and size and data

                

                //loop to read from fiobj and write to foobj

                
                fiobj.close();
            }

            foobj.close();
            sobj.close();
        }
        else
        {
            System.out.println("there is no such folder");
        }

    }
}