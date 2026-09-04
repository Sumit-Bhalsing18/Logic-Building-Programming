//my name is amit school name is abhinav city name is pune
//output : 3
import java.util.*;

class program749
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");

        String str =sobj.nextLine();
        
        str = str.trim();

        str= str.replaceAll("\\s+"," ");

        String Tokens[] = str.split(" ");
        
        int iCount = 0;
        for(int i =0 ;i < Tokens.length; i++)
        {
            if(Tokens[i].equals("name"))
            {
                iCount++;
            }
        }
        System.out.println("Frequency if word is "+iCount);
    }   
}


