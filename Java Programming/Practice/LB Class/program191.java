// * * * *
// * * * *
// * * * *
// * * * *
import java.util.*;

class program191
{
  public static void Display()
  {
    int i =0, j=0;

  for(i=1;i<=4;i++)
  {
    for(j=1 ;j <=4; j++)
    {
      System.out.print("*\t");
    }
    System.out.println();
  }

  }

    public static void main(String A []) 
    {
        Scanner sobj = new Scanner(System.in);

        int iValue=0;

        //System.out.println("Enter the number of elements :");
        //iValue = sobj.nextInt();

        Display();
    }
}