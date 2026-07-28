//input:  7
//output : a b c d e f g

//ASCII value lakshat kas thevaych ulta ast jar A asel tar 65 ani small a asel tar 97 
import java.util.*;

class program179
{
  public static void Display(int iNo)
  {
    int iCnt = 0;
    char ch = '\0';
              //nka lihu ACII value fakt chalt ka nahi check karayla 
    for(iCnt=1, ch = 97 ;iCnt<=iNo;  iCnt++ ,ch++)
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