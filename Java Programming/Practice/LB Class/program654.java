import java.io.*;  //file chi consern gosti hyat ahe

class program654
{
    public static void main(String A[])
    {
        File fobj = new File("Demo.txt");   //filech name Demo 

        fobj.createNewFile();  //exception IOException;
    }
}
//new File("Demo.txt") → Java मध्ये File object तयार करतो.
//createNewFile() → actual Demo.txt file storage मध्ये तयार करतो.

/*
                   JVM MEMORY
┌─────────────────────────────────────────────┐
│                                             │
│   METHOD AREA / CLASS AREA                  │
│   ┌───────────────────────────────┐         │
│   │ program654 class              │         │
│   │ main() method                │         │
│   └───────────────────────────────┘         │
│                                             │
│   HEAP                                      │
│   ┌───────────────────────────────┐         │
│   │ File Object                   │         │
│   │                               │         │
│   │ File object                   │◄────┐   │
│   │ path = "Demo.txt"             │     │   │
│   └───────────────────────────────┘     │   │
│                                         │   │
│   STACK                                  │   │
│   ┌───────────────────────────────┐     │   │
│   │ main()                        │     │   │
│   │                               │     │   │
│   │ A ───────────────►            │     │   │
│   │ fobj ─────────────────────────┘     │   │
│   └───────────────────────────────┘         │
│                                             │
└─────────────────────────────────────────────┘
                    │
                    │ createNewFile()
                    ▼
             OPERATING SYSTEM
                    │
                    ▼
             ┌──────────────┐
             │   Demo.txt   │
             │   (0 bytes)  │
             └──────────────┘
             Hard Disk / SSD 
             
2)Error का?

createNewFile() ची definition Java मध्ये अशी आहे:

public boolean createNewFile() throws IOException

म्हणजे Java compiler सांगतो:

"या method मुळे IOException येऊ शकतो, त्यामुळे तो exception handle कर."

पण तुझ्या main() मध्ये तू exception handle केलेला नाही.*/