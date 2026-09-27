import java.util.*;

class program936
{
    public static void main(String A[])
    {
      int Arr[] = {101,102,103,101,104,102,101,105,105}; 

      //frequency pahije asel multiple tar hashmap use kar
      HashMap <Integer,Integer> frequency = new HashMap<Integer,Integer>();

      for(int id : Arr)
      {
        if(frequency.containsKey(id))
        {
           frequency.put(id,(frequency.get(id)) + 1);
        }
        else
        {
        frequency.put(id,1);
        }
         
      }
      System.out.println(frequency);

    }
}