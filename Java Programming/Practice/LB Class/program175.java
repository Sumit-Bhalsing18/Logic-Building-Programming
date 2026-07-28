//input : 5
//output :*1*2*3*4*5
import java.util.*; //scanner sathi

class program175
{
public static void Display(int iNo)
{
  int iCnt =0;

  for(iCnt =1; iCnt <= iNo ;iCnt++)
  {
    System.out.print("*"+iCnt);
  }
  System.out.println();
}

    public static void main(String A[])
    {
    Scanner sobj = new Scanner(System.in);
    int iValue =0;

    System.out.println("Enter the number of elements ");
    iValue = sobj.nextInt();//input ghetle

    Display(iValue);
    }
}