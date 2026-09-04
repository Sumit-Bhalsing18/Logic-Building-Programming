
import java.util.*;

class StringX
{
   public String WordReverse(String str)
   {
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
        
        return output;
    }   
    
}
class program748
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");

        String str =sobj.nextLine();

        StringX strobj = new StringX();

        String sRet = strobj.WordReverse(str);

        System.out.println(sRet);
    }    

}


