import java.io.*;
import java.util.*;

class program692
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

            File fArr[]=fobjFolder.listFiles();
            System.out.println("number of file in folder:"+fArr.length);

            for(int i=0; i<fArr.length; i++)
            {
                fiobj=new FileInputStream(fArr[i]);

                //write file name and size and data

                String Fname=fArr[i].getName();
                long FileSize=fArr[i].length();

                DataOutputStream dobj=new DataOutputStream(foobj);

                dobj.writeUTF(Fname);  //writeUTF() हा DataOutputStream चा method आहे.
                dobj.writeLong(FileSize);//writeLong() हा long datatype ची value binary form मध्ये write करतो.

                //loop to read from fiobj and write to foobj

                int iRet=0;

                while((iRet=fiobj.read())!=-1)
                {
                    foobj.write(iRet);
                }

                fiobj.close();
            }

            foobj.close();
        }
        else
        {
            System.out.println("there is no such folder");
        }

    }
}
/*
  DataOutputStream dobj = new DataOutputStream(foobj);

foobj आधीच packed file मध्ये bytes write करत आहे.

DataOutputStream मुळे आपण String आणि long सारखा structured data सहज packed file मध्ये
 write करू शकतो.

म्हणजे:

dobj
 ↓
foobj
 ↓
Packed File

2)File name packed file मध्ये write
dobj.writeUTF(Fname);

उदा.:

A.txt

packed file मध्ये store होते.

14. File size packed file मध्ये write
dobj.writeLong(FileSize);

उदा.:

150

ही size packed file मध्ये store होते.

3)C.txt चा data

म्हणजे packed file चा structure roughly:

┌──────────────────────────┐
│ File Name: A.txt         │
│ File Size: 100           │
│ A.txt Data               │
├──────────────────────────┤
│ File Name: B.txt         │
│ File Size: 250           │
│ B.txt Data               │
├──────────────────────────┤
│ File Name: C.txt         │
│ File Size: 80            │
│ C.txt Data               │
└──────────────────────────┘
आणि FileSize का store केली?

हा खूप important point आहे.

नंतर unpack करताना program ला कळलं पाहिजे:

"A.txt चा data कुठपर्यंत आहे?"

म्हणून:
 */