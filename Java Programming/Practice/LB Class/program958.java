import java.util.*;
//project banau shakto medical medicni ahe ka nahi te pahayla app 
//java program952.java programming
//product table  primarykey productname productprice

class program958
{
    public static void main(String A[])
    {
       String transactions[] = {"TX101","TX102","TX103","TX101","TX104","TX102"};

       HashSet <String> unique = new HashSet<String>();
       HashSet <String> duplicate = new HashSet<String>();

       for(String str : transactions)
       {
        if(!unique.add(str))
        {
          duplicate.add(str);
        }
       }

       System.out.println("Unique :"+unique);
       System.out.println("duplicate:"+duplicate);
    }
}