import java.util.*;

class program789

{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);
    
    int iRow = 0,iCol = 0;

    System.out.println("Enter no of rows");
    iRow =sobj.nextInt();

    System.out.println("Enter no of Columns");
    iCol =sobj.nextInt();

    int Arr[][] =new int[iRow][iCol];  //memoey allocate keli 

    System.out.println("Enter the elements of matrix :");

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
    }
  }
}
/*
Enter no of rows
3
Enter no of Columns
3
Enter the elements of matrix :
10
20
30
40
50
60
70
80
90
Elements of the matrix are :
10      20      30
40      50      60
70      80      90 */





