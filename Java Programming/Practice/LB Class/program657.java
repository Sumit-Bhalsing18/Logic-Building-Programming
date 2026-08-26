import java.io.*;  //file chi consern gosti hyat ahe

class program657
{
    
    public static void main(String a[]) 
    {
        try
        {
          File fobj = new File("Demo.txt");   //filech name Demo 

          System.out.println(fobj.exists());//exists() return true or false
        }
        /*catch(IOException iobj)
        {
           System.out.println(iobj); error: exception IOException is never thrown in body of corresponding try statement
        }*/
        catch(Exception eobj)
        {
           System.out.println(eobj);
        }

    }
}
/*
1)1. File fobj = new File("Demo.txt");
File fobj = new File("Demo.txt");

इथे Java मध्ये File object तयार होतो.

fobj
 ↓
┌─────────────────┐
│ File Object     │
│ "Demo.txt"      │
└─────────────────┘
इथे Demo.txt file create होत नाही. फक्त त्या नावाचा File object तयार होतो.

2) exists() check करते:

"Demo.txt नावाची actual file/directory अस्तित्वात आहे का?"

ती boolean return करते:

File आहे       → true
File नाही      → false

3)IOException catch का चालत नाही?
कारण:

fobj.exists()

ही method IOException throw करत नाही.

म्हणून:

try
 ↓
exists()
 ↓
IOException येण्याची शक्यता नाही
 ↓
catch(IOException) ❌
*/