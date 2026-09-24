import java.util.*;

class program886
{
    public static void main(String A[])
    {
        int Arr[] = {10,13,34,21,15,7,24};
        
        
        for(int no : Arr)
        {
            System.out.print(no+"\t");
        }
        System.out.println();
        
        Arrays.sort(Arr,2,6);//array inbuilt class

        for(int no : Arr)
        {
            System.out.print(no+"\t");
        }
        System.out.println();
    }
}
/*
10      13      34      21      15      7       24
10      13      7       15      21      34      24

 7       15      21      34  sort 
 */