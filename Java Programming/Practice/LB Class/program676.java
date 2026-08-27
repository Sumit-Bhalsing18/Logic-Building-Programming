import java.io.*;  //file chi consern gosti hyat ahe
import java.util.*;  //scanner sathi
class program676
{
    
    public static void main(String A[]) throws Exception
    {
      String Fname = null;
      File fobj = null;
      FileOutputStream foobj = null;

      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter file name :");
      Fname = sobj.nextLine();

      fobj = new File(Fname);

      foobj = new  FileOutputStream (fobj);

      String Data = "Marvellous Infosystems";

      byte Arr[] = Data.getBytes();
      if(fobj.exists())
      {
         foobj.write(Arr);   //Error
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

त्याला byte data पाहिजे. 
mhnun byte madhe convert kela mhnun atta error yet nahiye 

2)तुझ्या पहिल्या program मध्ये:

String → write() ❌

म्हणून error.

दुसऱ्या program मध्ये:

String → getBytes() → byte[] → write() ✅

म्हणून error solve झाला.

आणि getBytes() करण्याची गरज कारण FileOutputStream हा byte-based stream आहे.

3) foobj = new FileOutputStream(fobj);

सगळ्यात आधी तुझी ही line अशी वाचू नकोस की "fobj मधून data घेऊन foobj मध्ये टाकतोय." ❌

तसं होत नाही.

Step 1 — fobj काय आहे?

आधी आपण लिहिलं:

File fobj = null;

मग:

fobj = new File(Fname);

समजा user ने Demo.txt दिलं.

आता:

fobj
 ↓
Demo.txt

पण लक्षात ठेव:

fobj मध्ये Demo.txt चा actual data नाही.

तो फक्त Demo.txt file ला represent करणारा File object आहे.

Step 2 — foobj काय आहे?

आपण लिहिलं:

FileOutputStream foobj = null;

foobj हा असा object आहे जो file मध्ये data write करण्यासाठी वापरला जातो.

म्हणजे:

fobj  → कोणती file?
foobj → त्या file मध्ये data write करण्याची व्यवस्था
Step 3 — आता ही line
foobj = new FileOutputStream(fobj);

याचा simple अर्थ:

fobj ज्या file ला represent करतो, त्या file साठी एक FileOutputStream तयार कर आणि तो foobj मध्ये ठेव.

जर:

fobj → Demo.txt

तर:

foobj = new FileOutputStream(fobj);

नंतर:

foobj
  |
  ↓
Demo.txt मध्ये WRITE करण्याचा connection

म्हणजे foobj आता Demo.txt मध्ये bytes write करू शकतो.

एक real-life example

समज:

fobj = घराचा address

foobj = त्या घरात सामान पाठवण्यासाठी delivery connection

fobj
 ↓
"Demo.txt"
 ↓
FileOutputStream
 ↓
foobj

आता जेव्हा:

foobj.write(Arr);

लिहितोस, तेव्हा अर्थ:

Arr मधले bytes foobj ज्या file शी connected आहे, त्या file मध्ये write कर.

म्हणजे:

Arr (bytes)
    ↓
foobj.write()
    ↓
Demo.txt
⭐ एक line मध्ये लक्षात ठेव
foobj = new FileOutputStream(fobj);

= "fobj ने सांगितलेल्या file मध्ये data लिहिण्यासाठी FileOutputStream तयार कर."

आणि fobj मधून data घेत नाही. हे सर्वात important आहे.*/ 

