import java.util.*;

class program708
{
    public static void main(String A[])
    {
      Scanner sobj = new Scanner(System.in);
      String str = null;

      System.out.println("Enter string :");
      str =sobj.nextLine();

      System.out.println("string is :"+str+" having length :"+str.length());

      str = str.trim();
      System.out.println("string is :"+str+" having length :"+str.length());

      str = str.replaceAll("\\s+"," ");//\\s+ arth 1ka peksha jast space remove karel ani tya jagyavr 1 ch space yeil 
      System.out.println("string is :"+str+" having length :"+str.length());
    }
}
/*
Enter string :
    hello   world
string is :    hello   world     having length :21
string is :hello   world having length :13
string is :hello world having length :11*/