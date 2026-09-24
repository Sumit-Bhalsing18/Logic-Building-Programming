import java.util.*;
//collection use karto ahe mhntlyavr aplyala rapper class la lagel mhnun Integer Arr[] ass lihil 
class program887
{
    public static void main(String A[])
    {
        Integer Arr[] = {10,13,34,21,15,7,24};
        
        
        for(int no : Arr)
        {
            System.out.print(no+"\t");
        }
        System.out.println();
        
        Arrays.sort(Arr,Collections.reverseOrder());//array inbuilt class

        for(int no : Arr)
        {
            System.out.print(no+"\t");
        }
        System.out.println();
    }
}
/*
10      13      34      21      15      7       24
34      24      21      15      13      10      7 */