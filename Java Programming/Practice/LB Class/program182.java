//input:  7
//output : a b c d e f g

import java.util.*;

class program182
{
  public static void Display(int iNo)
  {
    int iCnt = 0;
    char ch = 'a';
  
    for(iCnt=1, ch = 97 ;iCnt<=iNo;iCnt++ ,ch++)
    {
      System.out.print(ch+"\t");
     
    }
    System.out.println();
    
  }

    public static void main(String A []) 
    {
        Scanner sobj = new Scanner(System.in);

        int iValue=0;

        System.out.println("Enter the number of elements :");
        iValue = sobj.nextInt();

        Display(iValue);
    }
}