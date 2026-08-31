import java.io.*;
import java.util.*;


class program729
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        String PackFileName = null;
        File fPackobj = null;
        FileInputStream fiobj = null;
        byte Header[] = new byte[100];
        String strHeader = null;

        System.out.println("Enter the name of paked file :");
        PackFileName = sobj.nextLine();

        fPackobj = new File(PackFileName);

        if(fPackobj.exists())
        {
            fiobj = new FileInputStream(fpackobj);

            fiobj.read(Header,0,100);

            strHeader = new String(Header);

            System.out.println("Header is :"+strHeader);
        }
        else
        {
            System.out.println("There is no such pack file");
        }

    }
}