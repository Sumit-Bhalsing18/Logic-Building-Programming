import java.util.*;

class program722
{
    public static void main(String A[])
    {
       String header = "Hello.txt 1078";
       
       System.out.println("Actual haeder length :"+header.length());

       System.out.println("Number of what spaces we need :"+(100 - header.length())); 

       int size = (100 - header.length());

       for(int i =0 ; i < size ; i++)
       {
        header = header + " ";
       }

       System.out.println("Updated headerlength is : "+header.length());
       System.out.println("Updated header is :"+header);
    }
}