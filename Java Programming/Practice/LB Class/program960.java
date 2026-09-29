import java.util.*;


class program960
{
    public static void main(String A[])
    {
       String transactions[] = {"TX101","TX102","TX103","TX101","TX104","TX102"};

       HashSet <String> unique = new HashSet<String>();
       HashSet <String> duplicate = new HashSet<String>();

       for(String str : transactions)
       {
        if(unique.add(str))
        {
          
        }
        else
        {
          duplicate.add(str);
        }
       }

       System.out.println("duplicate treansaction :");
      
       for(String str : duplicate)
       {
        System.out.println(str);
       }
    }
}