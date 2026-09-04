
import java.util.*;

class program747
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
            FinalStr = FinalStr.append(" ");
        }

        String output = new String(FinalStr);

        output = output.trim();
        System.out.println(output);
    }   
}
//ethe pratek reverse kelyalya word nantar space yeil mhnun 
// FinalStr = FinalStr.append(" ")
/*
Enter string :
my country is india
ym yrtnuoc si aidni */

/*
1)
. String output = new String(FinalStr);

FinalStr हा StringBuffer आहे.

ही line त्याचा data घेऊन नवीन String object तयार करते.

FinalStr (StringBuffer)
       ↓
"ym eman si tima "


             ↓


output (String)
       ↓
"ym eman si tima "

म्हणजे:

StringBuffer → String conversion

2. output = output.trim();

trim() सुरुवातीला किंवा शेवटी असलेले extra spaces काढतो.

आधी:

"ym eman si tima "
                 ↑
              extra space

trim() नंतर:

"ym eman si tima"

म्हणून ही line शेवटचा extra space काढण्यासाठी आहे. */
