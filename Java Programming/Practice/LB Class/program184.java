//input:  7
//output : A  *  B  *  C  *  D

import java.util.*;

class program184
{
  public static void Display(int iNo)
  {
    int iCnt = 0 , iCount =0;
    char ch = '\0';
//               1                 2             3
    for(iCnt=1, iCount = 'A' ;iCnt<=iNo;  iCnt++ )
    {
      //    4+
      if((iCnt%2)==0)
      {
        System.out.print("* \t");
      }
      else
      {
        System.out.print(iCount+"\t");
        iCount++;
      }
     
    }
    System.out.println();
    
  }

    public static void main(String A []) 
    {
        Scanner sobj = new Scanner(System.in);

        int iValue=0;

        System.out.println("Enter the number of elements :");
        iValue = sobj.nextInt();

        Display(iValue);
    }
}