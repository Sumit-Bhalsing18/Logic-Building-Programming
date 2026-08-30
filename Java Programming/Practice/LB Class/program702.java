import java.util.*;

class program702
{
    public static void main(String A[])
    {
       String header = "    India  is  my  country    ";
         
        System.out.println(header);
        header = header.trim();    //trim madhlya space kadhat nahi 
        System.out.println(header);

        header = header.replaceAll("  "," ");
        
          System.out.println(header);

    }
}