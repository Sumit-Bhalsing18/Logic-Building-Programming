import java.util.*;

class program140
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Arr[] = {10,20,30,40,50};
        
        System.out.println(Arr.length);

        //bad programming practice
        for(int iCnt =0;iCnt< Arr.length;iCnt ++)
        {
          System.out.println(Arr[iCnt]);
        }
        System.out.println(iCnt);  //error yenr karan iCnt fakt for loop payrnt int rahil
    }
}
