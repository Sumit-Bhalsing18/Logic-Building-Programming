import java.util.*;
import Marvellous.Matrix;


class MatrixLB extends Matrix
{
  public MatrixLB(int iRow,int iCol)
  {
    super(iRow,iCol);//super mule varchya class la jato 
  }
}
class program795

{
  public static void main(String A[])
  { 
    Scanner sobj = new Scanner(System.in);
    
    int iRow = 0,iCol = 0;

    System.out.println("Enter no of rows");
    iRow =sobj.nextInt();

    System.out.println("Enter no of Columns");
    iCol =sobj.nextInt();

    MatrixLB mobj = new MatrixLB(iRow,iCol);  //constructor call 


    mobj.Accept();
    mobj.Display();
    
    mobj= null;
    System.gc();

   
  }
}






