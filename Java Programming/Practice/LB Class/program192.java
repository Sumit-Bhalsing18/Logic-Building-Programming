//input: row 6 column 4  
// * * * *
// * * * *
// * * * *
// * * * *
// * * * *
// * * * *

import java.util.*;

class program191
{
  public static void Display(int iRow,int iCol)
  {
    int i =0, j=0;

  for(i=1;i<= iRow;i++) //row 
  {
    for(j=1 ;j <= iCol; j++)  //column
    {
      System.out.print("*\t");
    }
    System.out.println();
  }

  }

    public static void main(String A []) 
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1=0;
        int iValue2=0;

        System.out.println("Enter the number of rows:");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the number of Columns:");
        iValue2 = sobj.nextInt();

        Display(iValue1,iValue2);
    }
}