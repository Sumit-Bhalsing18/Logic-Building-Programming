import java.util.*;

class program740
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");

        String str =sobj.nextLine();
        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        str =str.toLowerCase();

        char Arr[] = str.toCharArray();
   
        for(int i =0 ; i < Arr.length;i++)
        {
            if(Arr[i] == ' ')
            {
                if(Arr[i+1] >= 'a' & Arr[i+1] <= 'z')
                {
                   Arr[i+1] = (char)(Arr[i+1] - 32);

                }
            }
        }
        String str1 = new String(Arr);

        System.out.println(str1);


    }
}

