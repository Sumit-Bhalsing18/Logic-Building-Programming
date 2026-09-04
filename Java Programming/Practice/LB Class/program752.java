//india is my country i live in india
//output =bharat is my country i live in bharat
import java.util.*;

class program752
{
    public static void main(String A[])
    {
        int i =0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");

        String str =sobj.nextLine();
        
        str = str.trim();

        str= str.replaceAll("\\s+"," ");

        char Arr[] = str.toCharArray();

        int Frequency[] = new int[26]; 


        //a   b  c  d
        //97 98  99 100
        for(i = 0 ;i < Arr.length;i++)
        {
            if(Arr[i] >= 'a' && Arr[i] <= 'z' )
            {
                Frequency[(int)Arr[i] - 97]++; 
            }
        }
        System.out.println("Frequency of esch letter is :");

        for(i =0 ; i<Frequency.length;i++)
        {
            System.out.println(Frequency[i]);
        }
    }
}


