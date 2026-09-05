
import java.util.*;

class program763
{
    public static void main(String A[])
    {
        
        public static boolean CheckAnagram(String str1, String str2)
        {
          int i = 0;

          if(str1.length() != str2.length())
          {
            return false ;
          }
        
         char Arr[] = str1.toCharArray();
         char Brr[] = str2.toCharArray();

        Arrays.sort(Arr);
        Arrays.sort(Brr);

        str1 = new String(Arr);
        str2 = new String(Arr);
        
        if(str1.equals(str2))
        {
            return true ;
        }
        else
        {
            return false ;
        }
        }
        
    }
}

 


