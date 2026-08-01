import java.util.*;

class program264
{
    public static void main(String A[])
    {
      Scanner sobj = new Scanner(System.in);
      String Arr = null;

      System.out.println("Enter string :");

      Arr = sobj.nextLine();

      System.out.println("Length of string is :"+Arr.length()); 
         //array
    char str[] = Arr.toCharArray();
    int i= 0 ;
    for(i=0 ;i < str.length ;i++)
    {
      System.out.println(str[i]);//char at method call nahi hot he multiple time 
    }
    }
    
}