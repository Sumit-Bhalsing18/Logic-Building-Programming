import java.util.*;
//collection use karto ahe mhntlyavr aplyala rapper class la lagel mhnun Integer Arr[] ass lihil 
class program888
{
    public static void main(String A[])
    {
        Integer Arr[] = {10,13,34,21,15,7,24};
        
        
        for(int no : Arr)
        {
            System.out.print(no+"\t");
        }
        System.out.println();
        
        int index = Arrays.binarySearch(Arr,27);
        if(index >= 0)
        {
            System.out.println("Element is present");
        }
        else
        {
            System.out.println("there is no such present");
        }

        for(int no : Arr)
        {
            System.out.print(no+"\t");
        }
        System.out.println();
    }
}
