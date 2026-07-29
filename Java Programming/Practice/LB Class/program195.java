/*
  iRow =4
  iCol =4

  ****
  $$$$
  ****
  $$$$

  
*/
import java.util.*;
class program195
{

  static public void Display(int iRow,int iCol)
  {
    int i =0 ,j=0 ;
    for(i=1; i<=iRow;i++)
    {
      for(j=1;j<= iCol;j++)
      {
        if(i % 2==0)
        {
         System.out.print("$");
        }
        else
        {
         System.out.print("*");
        }
      }
      System.out.println();
     
    }
  }
  public static void main()
  {
    int iValue1 =0 ,iValue2 =0;

    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter the number of rows");
    iValue1 = sobj.nextInt();

    System.out.println("Enter the number of Columns");
    iValue2 = sobj.nextInt();
    Display(iValue1,iValue2);

  }
}