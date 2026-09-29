import java.util.*;


class program961
{
    public static void main(String A[])
    {
       String transactions[] = {"TX101","TX102","TX103","TX101","TX104","TX102"};

       HashSet <String> unique = new HashSet<String>();
       HashSet <String> duplicate = new HashSet<String>();

       boolean bRet = false ;

       for(String str : transactions)
       {
         bRet = unique.add(str);
         if(bRet == false)
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