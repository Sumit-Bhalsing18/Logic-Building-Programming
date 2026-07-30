/*
     iRow =4
     iColumn =4
      % # # #
      % % # #      
      % % % #     
      % % % %   
      
*/

//row column same dyave lagtat nahitar filter lav
import java.util.*;

class Pattern
{
   public void Display(int iRow , int iCol)
   {

    int i=0,j=0;
    int iCount =0;

    if(iRow != iCol)
    {
      System.out.println("Invalid parameters ");

       System.out.println("number of rows and column should be same ");
      return; //jar return lihila nasta tar toh loop madhe gela asta
    }
    for(i= 1  ;i<= iRow; i++)  //row
    {
        for(j=1 ; j<=iCol;j++ )
        {
           if( i >= j)    // manje  i chi value jast asnar j peksha he observe zal mhnun ti condition 
           {
             System.out.print("%\t");
           }
           else
            {
             System.out.print("#\t");//space lagto karan baki language madhe output vegl yet
            }
        }
        System.out.println();
    }
     
   }
}
class program218
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
