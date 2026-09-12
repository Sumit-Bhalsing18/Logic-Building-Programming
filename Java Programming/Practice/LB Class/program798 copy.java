import java.util.*;

class Matrix
{
  protected int Arr[][];
  protected int iRow ;
  protected int iCol ;

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

    public int SummationAll()
    {
      int iSum = 0;
      for(int i= 0 ;i < iRow;i++)
      {
        for(int j= 0 ;j < iCol;i++)
        {
           iSum = iSum + Arr[i][j];
        }
      }
      return iSum;
    }

    public void SummationRow()
    {
      int iSum = 0;
      for(int i= 0 ;i < iRow;i++)
      {
        for(int j= 0 ;j < iCol;i++)
        {
           iSum = iSum + Arr[i][j];

           System.out.println("Summation of row no "+i+" is : "+iSum);
           iSum = 0;
        }
      }
     
    }
  }
}
class program798

{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);
    
    int iRow = 0,iCol = 0 ,iRet = 0;

    System.out.println("Enter no of rows");
    iRow =sobj.nextInt();

    System.out.println("Enter no of Columns");
    iCol =sobj.nextInt();

    MatrixLB mobj = new MatrixLB(iRow,iCol);  //constructor call 


    mobj.Accept();
    mobj.Display();

    iRet =mobj.SummationAll();
    System.out.println("Summation of all elements :"+iRet);
    
    mobj= null;
    System.gc();

   
  }
}






