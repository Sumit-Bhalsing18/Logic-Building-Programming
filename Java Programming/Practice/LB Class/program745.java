//input : my name is amit
//output :ym eman si tima
import java.util.*;

class program745
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");

        String str =sobj.nextLine();
        
        str = str.trim();

        str= str.replaceAll("\\s+"," ");

        String Tokens[] = str.split(" ");

        StringBuffer sb = null;

        for(int i =0 ; i< Tokens.length;i++)
        {
            sb = new StringBuffer(Tokens[i]);
            System.out.println(sb.reverse());
        }
    }   
}
/*
Enter string :
india is my country
aidni
si
ym
yrtnuoc */     //ethe purn string reverse zali nahi fakt string cha 1  1 karun word reverse kela 

/*
1)
प्रत्येक iteration मध्ये sb नवीन StringBuffer object ला reference करतो. 
त्या iteration मधला Tokens[i] word StringBuffer मध्ये घेतो 
आणि reverse() करून तो word print करतो. ✅

2)
String	StringBuffer
Characters/String store करतो	Characters/String store करतो
Immutable	Mutable
Direct बदल करता येत नाही	Direct बदल करता येतो
reverse() नाही	reverse() आहे
String manipulation साठी कमी flexible	String manipulation साठी useful*/