
import java.util.*;

class program744
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");

        String str =sobj.nextLine();

        StringBuffer sb = new StringBuffer(str);//string la stringbuffer madhe convert kel

        System.out.println(sb.reverse());//buffer madhe convert keli ahe mhnun apn reverse method use karu shakto 
    }                                    //कारण String class मध्ये reverse() method दिलेली नाही.
                                         //पण StringBuffer मध्ये reverse() आहे:

}
/*
Enter string :
maharashtra is my state
etats ym si arthsaraham */          // ulat print zal 

/*
1). String str = sobj.nextLine();

User Hello enter करतो.

Memory मध्ये साधारण असा विचार कर:

Stack
+-----------+
| str       | --------+
+-----------+         |
                       ↓
                    String object
                    +---------+
                    | "Hello" |
                    +---------+

str हा reference variable आहे. तो "Hello" String object कडे reference ठेवतो.

2)2. StringBuffer sb = new StringBuffer(str);

ही line खूप important आहे.

StringBuffer sb = new StringBuffer(str);

याचा अर्थ:

str मधला "Hello" data घे आणि त्यावर काम करण्यासाठी एक StringBuffer object तयार कर.

Memory मध्ये:

Stack                         Heap
------                        ----


str -----------------------> "Hello"
                              String object


sb -----------------------> StringBuffer object
                              +----------------+
                              | H e l l o      |
                              +----------------+

म्हणजे आता दोन objects आहेत:

एक String object → "Hello"
एक StringBuffer object → "Hello"

3)String आणि StringBuffer मध्ये मुख्य फरक:

String
String str = "Hello";

String immutable आहे.

म्हणजे original String object च्या content मध्ये direct बदल करता येत नाही.

StringBuffer
StringBuffer sb = new StringBuffer("Hello");

StringBuffer mutable आहे.

म्हणजे त्याच object मध्ये characters बदलता येतात.
*/
