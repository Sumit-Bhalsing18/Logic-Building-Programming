//input 5
//output * * * * *
import java.util.*;
class program171
{
 
static public void Display(int iNo)
{
  int iCnt =0;
  for(iCnt =1;iCnt <=iNo;iCnt++)
  {
    System.out.print("*\t");
  }
  System.out.println();
}
public static void main(String A[])
{
  int iValue =0;
  Scanner sobj = new Scanner(System.in); //for keyboard 

  System.out.print("Enter the number of elements \n");
  iValue= sobj.nextInt();

  Display(iValue);
}
}