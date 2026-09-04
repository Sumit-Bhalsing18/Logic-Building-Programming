
import java.util.*;

class program757
{
    public static void main(String A[])
    {
        int i = 0;
        public static boolean CheckAnagram(String str1, String str2)
        {
        str1 = st1r.trim();

        str1 = str1.replaceAll("\\s+"," ");

        str1 = str1.toLowerCase();
        char Arr[] = str.toCharArray();
                    str1 = st1r.trim();

        str1 = str1.replaceAll("\\s+"," ");

        str1 = str1.toLowerCase();
        char Arr[] = str.toCharArray();

        int Frequency1[] = new int[26]; 

        str2 = str2.trim();

        str2 = str2.replaceAll("\\s+"," ");

        str2 = str2.toLowerCase();
        char Brr[] = str.toCharArray();

        int Frequency2[] = new int[26]; 




        for(i = 0 ;i < Arr.length;i++)
        {
            if(Arr[i] >= 'a' && Arr[i] <= 'z' )
            {
                Frequency[(int)Arr[i] - 97]++; 
            }
        }

        for(i = 0 ;i < Brr.length;i++)
        {
            if(Brr[i] >= 'a' && Brr[i] <= 'z' )
            {
                Frequency[(int)Brr[i] - 97]++; 
            }
        }

        for(i = 0; i< Frequency1.length;i++)
        {
            if(Frequency1[i] != Frequency2[i])
            {
                bFlag = false ;
                break;
            }
        }
        }
        int i =0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first string :");

        String str1 =sobj.nextLine();

        System.out.println("Enter second string :");

        String str2 =sobj.nextLine();

        boolean bRet = FALSE;
        bRet =CheckAnagram( str1, str2);

        if(bRet == true)
        {
            System.out.println("String are Anagram");
        }
        else
        {
            System.out.println("String are Not Anagram");
        }
        
        
    }
}

 


