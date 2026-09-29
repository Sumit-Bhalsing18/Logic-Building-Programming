import java.util.*;

//java program951.java programming

class program951
{
    public static void main(String A[])
    {
      
      if(A.length != 1)
      {
        System.out.println("Invalis number of argument");
        return ;
      }

      String str = A[0];
      TreeMap <Character,Integer> frequency = new TreeMap<Character,Integer>();


      for(char ch : str.toCharArray())
      {
         frequency.put(ch,frequency.getOrDefault(ch,0) + 1);
      }
      System.out.println(frequency);

      //Issue in ordering

    }
}