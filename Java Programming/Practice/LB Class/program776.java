import java.util.*;

class program776
{
  public static void main(String A[])
  {
      Scanner sobj = new Scanner(System.in);
        HashMap <Character,Integer>hobj = new HashMap<Character,Integer>(); //hashmap cha object 

    System.out.println("Enter string");
    String str =sobj.nextLine();

    char Arr[] = str.toCharArray();

    int iCount = 0;
    for(char ch : Arr)
    {
      if(hobj.containsKey(ch))
      {

        iCount = hobj.get(ch);  //character chi frequency bhetli 
        hobj.put(ch,iCount+1);  //mg atta bhetli + 1 kar ani out kar atta put kar 
        
      }
      else
      {
        hobj.put(ch,1);
      }
    }
    
    char Brr[] = new char[hobj.size()];

    int i =0;
    for(char cValue : hobj.keySet())
    {
      Brr[i] = cValue;
      i++;   //append nahiye mhnu i++ kel a
    }
    System.out.println(new String(Brr));
     
  }
}
/*
Enter string
hello
ehlo


Enter string
aaabbbbcccddde
abcde */

