/*
     iRow =4
     iColumn =4
    a
    b b
 0  c c c
    d d d d
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
    char ch ='\0';

    for(i= 1 ,ch = 'a';i<= iRow; i++ ,ch ++ )  //row
    {   
    
      for(j=1 ; j <= i; j++ )   //nishkaran firat nahiye 
      {
            
        System.out.print(ch+"\t");
      }
      System.out.println();
    }
     
   }
}
class program226
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
