
import java.util.*;

class program746
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
        StringBuffer FinalStr = new StringBuffer("");

        for(int i =0 ; i< Tokens.length;i++)
        {
            sb = new StringBuffer(Tokens[i]);
            sb = sb.reverse();
            FinalStr = FinalStr.append(sb);
        }

        System.out.println(FinalStr);
    }   
}
/*
Enter string :
india is my country
aidnisiymyrtnuoc */

/*1)
म्हणजे सगळे reversed words एकाच String मध्ये जमा करून शेवटी एकदाच print करायचे आहेत.

2)
FinalStr म्हणजे काय?

याला तू एक container / डबा समज.

सुरुवातीला:

FinalStr
   ↓
""

आता प्रत्येक reversed word त्यात add करणार.

First iteration
sb = new StringBuffer(Tokens[0]);

Tokens[0] = "my"

sb → "my"

नंतर:

sb = sb.reverse();

आता:

sb → "ym"

नंतर:

FinalStr = FinalStr.append(sb);

म्हणजे:

FinalStr = "" + "ym"


FinalStr
   ↓
"ym"
Second iteration

Tokens[1] = "name"

sb → "name"

reverse:

sb → "eman"

append:

FinalStr.append(sb);

आता:

FinalStr
   ↓
"ymeman"
*/
