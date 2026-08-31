import java.io.*;
import java.util.*;


class program732
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        String PackFileName = null;
        File fPackobj = null;
        FileInputStream fiobj = null;
        byte Header[] = new byte[100];
        String strHeader = null;
        String Tokens[] = null;
        File NewFile = null;
        FileOutputStream foobj = null;
        FileInputStream fiobj = null;
        byte Buffer[] = null;


        System.out.println("Enter the name of paked file :");
        PackFileName = sobj.nextLine();

        fPackobj = new File(PackFileName);

        if(fPackobj.exists())
        {
            fiobj = new FileInputStream(fPackobj);

            //read header
            fiobj.read(Header,0,100);

            strHeader = new String(Header);

            System.out.println("Header is :"+strHeader);

            strHeader = strHeader.trim();
            strHeader = strHeader.replaceAll("\\s+"," " );

            Tokens = strHeader.split(" ");

            System.out.println("File Name :"+ Tokens[0]);
             System.out.println("File Name :"+ Tokens[1]);

             NewFile = new File(Tokens[0]);
             NewFile.createNewFile();

             foobj = new FileOutputStream(NewFile);

             Buffer = new byte[Integer.parseInt(Tokens[1])];

             //read data
             fiobj.read(Buffer,Integer.parseInt(Tokens[1]));

             //write the data
             foobj.write(Buffer,Integer.parseInt(Tokens[1]));


        }
        else
        {
            System.out.println("There is no such pack file");
        }

    }
}