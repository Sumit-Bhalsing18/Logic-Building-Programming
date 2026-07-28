//input:  7
//output : a b c d e f g


//ascii value program madhe use karaych nahi karan jar dusra koni program read kela ttar tyala kalat nahi kay ahe 
import java.util.*;

class program179
{
  public static void Display(int iNo)
  {
    int iCnt = 0;
    char ch = 'a'; //logical mistake (ch character should be initialized with default value)
  
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
      System.out.print(ch+"\t");
      ch++;
    }
    
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