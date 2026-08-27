import java.io.*;  //file chi consern gosti hyat ahe
import java.util.*;  //scanner sathi
class program662
{
    
    public static void main(String A[]) 
    {
      File fobj = null;
      boolean bRet = false;

      String Fname = null;
      Scanner sobj  = null;

      sobj = new Scanner(System.in);//user kadun input gheto tyasathi //sobj stack vr asel ani toh point heap varchya scanner chya object la 
      System.out.println("Enter the filename");
      Fname = sobj.nextLine();

        try
        {
           fobj = new File(Fname);   //file navachya class cha object banavto 
         

          bRet = fobj.exists();
          if(bRet == true)   //file exist ahe tar delete kar ani nasel tar sang file nahiye
          {
            fobj.delete();
            System.out.println("File gets deleted");
          }
          else
          {
             System.out.println("There is no such file");
          }

        }

        catch(Exception eobj)
        {
           System.out.println(eobj);
        }

    }
}
/*
एक महत्त्वाची distinction: Fname, fobj, sobj हे references/variables आहेत; new File() आणि new Scanner() मुळे objects तयार होतात. new File(Fname) केल्याने actual disk file तयार होत नाही.

2)Stack मध्ये local variables तयार होतात:

                 JVM MEMORY
┌──────────────────────────────────────────┐
│                                          │
│  STACK - main()                          │
│  ┌────────────────────────────────────┐  │
│  │ fobj   = null                      │  │
│  │ bRet   = false                     │  │
│  │ Fname  = null                      │  │
│  │ sobj   = null                      │  │
│  └────────────────────────────────────┘  │
│                                          │
│  HEAP                                    │
│  ┌────────────────────────────────────┐  │
│  │       अजून objects नाहीत           │  │
│  └────────────────────────────────────┘  │
└──────────────────────────────────────────┘
3)इथे Stack मध्ये sobj reference आणि Heap मध्ये Scanner object तयार होतो.

STACK                         HEAP

┌──────────────┐              ┌──────────────────┐
│ sobj ────────┼─────────────►│ Scanner Object   │
└──────────────┘              │ System.in        │
                              └──────────────────┘
                              
4)STACK                         HEAP

┌──────────────────┐          ┌──────────────────┐
│ fobj ────────────┼─────────►│ File Object      │
│                  │          │ "Demo.txt"       │
│ Fname ───────────┼───────►  └──────────────────┘
│                  │
│ bRet = false     │          ┌──────────────────┐
│ sobj ────────────┼─────────►│ Scanner Object   │
└──────────────────┘          └──────────────────┘
*/
