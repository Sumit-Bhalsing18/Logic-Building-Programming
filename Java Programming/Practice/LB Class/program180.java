//input:  7
//output : a b c d e f g

import java.util.*;

class program179
{
  public static void Display(int iNo)
  {
    int iCnt = 0;
    char ch = '\0'; //default value of character 
  
    for(iCnt=1 , ch ='a' ;iCnt<=iNo;  iCnt++ , ch++)
    {
      System.out.print(ch+"\t");
     
    }
    
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