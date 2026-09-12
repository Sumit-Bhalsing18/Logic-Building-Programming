import java.util.*;

class program788

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

    System.out.println(Arr.length);
    System.out.println(Arr[0].length);
  }
}
//Jagged banuch nahi shakat 




