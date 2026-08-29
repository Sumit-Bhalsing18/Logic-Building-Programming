import java.io.*;
import java.util.*;

class program690
{
    public static void main(String A[]) throws IOException
    {
        Scanner sobj = new Scanner(System.in);

        String FolderName = null;
        String PackFileName = null;

        FileOutputStream foobj = null;
        FileInputStream fiobj = null;

        System.out.println("Enter folder name:");
        FolderName = sobj.nextLine();

        System.out.println("Enter the name of packed file:");
        PackFileName = sobj.nextLine();

        File fobjFolder = new File(FolderName);

        if((fobjFolder.exists()) && (fobjFolder.isDirectory()))
        {
            System.out.println("Folder exists");

            File fobjPack = new File(PackFileName);
            fobjPack.createNewFile();

            // Open packed file for writing
            foobj = new FileOutputStream(fobjPack);

            // Get all files from folder
            File fArr[] = fobjFolder.listFiles();

            System.out.println("Number of files in folder: " + fArr.length);

            for(int i = 0; i < fArr.length; i++)
            {
                // Only process files, not sub-folders
                if(fArr[i].isFile())
                {
                    fiobj = new FileInputStream(fArr[i]);

                    int iRet = 0;

                    // Read source file and write into packed file
                    while((iRet = fiobj.read()) != -1)
                    {
                        foobj.write(iRet);
                    }

                    fiobj.close();
                }
            }

            foobj.close();

            System.out.println("Files packed successfully");
        }
        else
        {
            System.out.println("There is no such folder");
        }

        sobj.close();
    }
}