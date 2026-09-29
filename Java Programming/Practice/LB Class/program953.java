import java.util.*;

//java program952.java programming

class program953
{
    public static void main(String A[])
    {
      
      if(A.length != 1)
      {
        System.out.println("Invalis number of argument");
        return ;
      }

      String str = A[0];
      LinkedHashMap <Character,Integer> frequency = new LinkedHashMap<Character,Integer>();


      for(char ch : str.toCharArray())
      {
         frequency.put(ch,frequency.getOrDefault(ch,0) + 1);
      }
      System.out.println(frequency);

      
      for(char ch : frequency.keySet())
      {
        if(frequency.get(ch) == 1)
        {
          System.out.println("First non-repeting character :"+ch);
          break;
        }
      }

    }
}