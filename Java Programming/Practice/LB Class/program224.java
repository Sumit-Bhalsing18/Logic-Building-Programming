/*
     iRow =4
     iColumn =4
    1
    1  2 
    1  2  3
    1  2  3  4
*/

//row column same dyave lagtat nahitar filter lav
import java.util.*;

class Pattern
{
   public void Display(int iRow , int iCol)
   {

    int i=0,j=0;

    if(iRow != iCol)
    {
      System.out.println("Invalid parameters ");

       System.out.println("number of rows and column should be same ");
      return; //jar return lihila nasta tar toh loop madhe gela asta
    }
    for(i= 1  ;i<= iRow; i++)  //row
    {
        for(j=1 ; j <= i;j++ )   //nishkaran firat nahiye 
        {   
          System.out.print(j+"\t");
        }
        System.out.println();
    }
     
   }
}
class program224
{
    public static void main(String A[])
    {
      Scanner sobj = new Scanner(System.in);
      int iValue1 =0 ,iValue2 =0;

      System.out.println("Enter number of rows");
      iValue1= sobj.nextInt();
      System.out.println("Enter number of columns");
      iValue2= sobj.nextInt();
      
      Pattern pobj = new Pattern();
      pobj.Display(iValue1,iValue2);

    }
}
