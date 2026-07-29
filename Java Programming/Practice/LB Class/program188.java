//input:  11
//output : *  *  *  #  #  #  *  *  *  #  # 
//         1  2  3  4  5  6  7  8  9  10 11
import java.util.*;

class program188
{
  public static void Display(int iNo)
  {
    int iCnt = 0;
    char ch1 = '\0';
    char ch2 = '\0';
  
    for(iCnt=1, ch1 ='A',ch2 ='a';iCnt<=iNo;iCnt++ ,ch1++,ch2++)
    {
      if(iCnt%2==0)
      {
         System.out.println(ch2+"\t");
      }
      else
      {
        System.out.println(ch1+"\t");
      }
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