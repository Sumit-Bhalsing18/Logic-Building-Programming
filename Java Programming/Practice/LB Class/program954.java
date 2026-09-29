import java.util.*;

//java program952.java programming

class program954
{
    public static void main(String A[])
    {
      
      if(A.length != 1)
      {
        System.out.println("Invalid number of argument");
        return ;
      }

      String str = A[0];
      LinkedHashMap <Character,Integer> frequency = new LinkedHashMap<Character,Integer>();


      for(char ch : str.toCharArray())
      {
         frequency.put(ch,frequency.getOrDefault(ch,0) + 1);
      }
      System.out.println(frequency);

      
      for(Map.Entry<Character,Integer> eobj : frequency.entrySet())
      {
        if(eobj.getValue() == 1)
        {
          System.out.println("First non repeating character is "+eobj.getKey());
          break;
        }
          
      }

    }
}