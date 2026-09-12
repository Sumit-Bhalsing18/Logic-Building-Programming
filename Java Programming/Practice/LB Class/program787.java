import java.util.*;

class program786

{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);

    
    
    int Arr[][] = {{10,20,30},{40,50,60},{70,80,90}};
    
    for(int i =0 ;i < Arr.length ;i++)
    {
      for(int j = 0; j < Arr[i].length ;j++)
      {
        System.out.print(Arr[i][j]+"\t");
      }
      System.out.println();
    }
  }
}
/*
10      20      30
40      50      60
70      80      90 */



