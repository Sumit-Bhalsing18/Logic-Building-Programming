import java.util.*;

class Matrix
{
  public int Arr[][];

  public Matrix(int iRow,int iCol)         //constructor 
  {
    System.out.println("Inside constructor ");
    Arr = new int[iRow][iCol];
  }

  protected void finalize()
  {
    System.out.println("Inside finalize method");
      Arr = null;
      System.gc();
  }
}
class program791

{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);
    
    int iRow = 0,iCol = 0;

    System.out.println("Enter no of rows");
    iRow =sobj.nextInt();

    System.out.println("Enter no of Columns");
    iCol =sobj.nextInt();

    Matrix mobj = new Matrix(iRow,iCol);  //constructor call 

    mobj= null;
    System.gc();

   /*  System.out.println("Enter the elements of matrix :");

    for(int i =0 ;i < iRow;i++)
    {
      for(int j =0 ;j < iCol;j++)
      {
        Arr[i][j] = sobj.nextInt();
      }
    }

    System.out.println("Elements of the matrix are :");
    for(int i =0 ;i < iRow;i++)
    {
      for(int j =0 ;j < iCol;j++)
      {
        System.out.print(Arr[i][j]+"\t");
      }
      System.out.println();
    }*/
  }
}






