import java.io.*;
import java.util.Scanner;

class program684X
{
    public static void main(String A[]) throws Exception
    {
        String FnameSrc = null;
        String FnameDest = null;

        File fobjSrc = null;
        File fobjDest = null;

        FileInputStream fiobj = null;
        FileOutputStream foobj = null;

        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Source File name : ");
        FnameSrc = sobj.nextLine();

        System.out.println("Enter Destination File name : ");
        FnameDest = sobj.nextLine();

        fobjSrc = new File(FnameSrc);
        fobjDest = new File(FnameDest);

        if(fobjSrc.exists())
        {
            fiobj = new FileInputStream(fobjSrc);

            foobj = new FileOutputStream(fobjDest);

            byte Buffer[] = new byte[100];

            while((iRet = fiobj.read(Buffer)) != -1)
            {
                foobj.write(Buffer,0,iRet);
            }

            fiobj.close();
            foobj.close();

            System.out.println("File copied successfully");
        }
        else
        {
            System.out.println("There is no such File");
        }
    }
}