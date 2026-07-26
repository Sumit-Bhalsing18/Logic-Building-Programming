import java.util.*;

class ArrayX
{
    int iCnt =0;
    for(iCnt =0;iCnt <iSize;iCnt++)   
    {
        Arr[iCnt]++;
    }

    
}
class program147
{
    public static int Summation(int Arr[])
    {
     int iSum =0;
      for(int iCnt =0;iCnt < Arr.length;iCnt++)
      {
         iSum = iSum+Arr[iCnt];
      }
    
     return iSum;
    }

}
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt =0;
        
        System.out.println("Enter the number of elements");

        int iLength =sobj.nextInt();

        int Brr[] = new int[iLength];   //dynamic memory allocation

        System.out.println("Enter the  elements");
        for(iCnt=0; iCnt < Brr.length; iCnt++)
        {
            Brr[iCnt] = sobj.nextInt();
        }
        System.out.println("elements of array are");

        for(iCnt=0; iCnt<Brr.length; iCnt ++)
        {
            System.out.println(Brr[iCnt]); 
        }

        ArrayX aobj = new ArrayX();
        aobj.Update(Brr);
        
        int iRet = Summation(Brr);

        System.out.println("Addition is"+iRet);
        Brr = null;
        System.gc(); //sangitl

    }

//no