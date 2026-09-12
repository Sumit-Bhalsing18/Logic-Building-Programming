import java.util.*;

class Matrix
{
  private int Arr[][];
  private int iRow ;
  private int iCol ;

  public Matrix(int iRow,int iCol)         //constructor 
  {
    System.out.println("Inside constructor ");

    this.iRow = iRow;
    this.iCol = iCol;
    Arr = new int[iRow][iCol];
  }

  public void Accept()
  {
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter the elements of matrix :");

    for(int i =0 ;i < iRow;i++)
    {
      for(int j =0 ;j < iCol;j++)
      {
        Arr[i][j] = sobj.nextInt();
      }
    }
  }
  public void Display()
  {
      System.out.println("Elements of the matrix are :");
    for(int i =0 ;i < iRow;i++)
    {
      for(int j =0 ;j < iCol;j++)
      {
        System.out.print(Arr[i][j]+"\t");
      }
      System.out.println();
    }
}
}

class MatrixLB extends Matrix
{
  public MatrixLB(int iRow,int iCol)
  {
    super(iRow,iCol);//super mule varchya class la jato 
  }
}
class program794

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






