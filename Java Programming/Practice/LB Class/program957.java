import java.util.*;
//project banau shakto medical medicni ahe ka nahi te pahayla app 
//java program952.java programming
//product table  primarykey productname productprice

class program957
{
    public static void main(String A[])
    {
      
      HashMap <Integer,Integer> inventory = new HashMap<Integer,Integer>();

      //ADD 101 50
      inventory.put(101,50);
      //ADD 102 30
      inventory.put(102,30);

      //SELL 101 5

      if(inventory.containsKey(101))
      {
        inventory.put(101,inventory.get(101) - 5);
      }

      //RESTOCK 102 20
      if(inventory.containsKey(102))
      {
        inventory.put(102,inventory.get(101) + 20);
      }
      
      int productid = 101;

      //

      if(inventory.containsKey(productid))
      {
        System.out.println("Product "+ productid+" available quantity :"+inventory.get(productid));
      }
      else
      {
        System.out.println("Product not found");
      }
    }
}