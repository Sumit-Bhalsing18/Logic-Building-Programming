import java.io.*;  //file chi consern gosti hyat ahe
import java.util.*;  //scanner sathi
class program673
{
    
    public static void main(String A[]) 
    {
      int i = 0;
      String Data = "Marvellous Infosystems";
   
      byte Arr[] = Data.getBytes();

      System.out.println(Data.length());
      System.out.println(Arr.length);

      for(i =0 ;i< Arr.length ;i++)
      {
        System.out.println(Arr[i]);  //print character ASCII value 
      }
    }
}
/*
Arr हा byte[] आहे, char[] नाही. त्यामुळे print केल्यावर character नाही तर त्याची ASCII/byte value दिसते. */
