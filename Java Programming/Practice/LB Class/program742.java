
import java.util.*;

class program742
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");

        String str =sobj.nextLine();
        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        str = str.toLowerCase();   //c madhe str lwr hot

        char Arr[] = str.toCharArray(); //character chya array madhe karnara function toCharArray()

        for(int i= 0 ; i< Arr.length;i++)
        {
            if(Arr[i] == ' ')
            {
                if( Arr[i+1] >= 'a' && Arr[i+1] <= 'z')
                {
                   Arr[i+1] =  (char)(Arr[i+1] - 32);
                }
                
            }
        }
        String output = new String(Arr);
        System.out.println("Updated string is  :"+output);


    }
       
}
/*
Enter string :
my name is amit
Updated string is  :my Name Is Amit */

/*
Enter string :
MY NAME is Amit
Updated string is  :my Name Is Amit */
