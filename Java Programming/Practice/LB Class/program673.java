import java.io.*;  //file chi consern gosti hyat ahe
import java.util.*;  //scanner sathi
//हा program String ला bytes मध्ये convert करण्यासाठी getBytes() कसा वापरतात हे दाखवण्यासाठी आहे.
class program673
{
    
    public static void main(String A[]) 
    {
      String Data = "Marvellous Infosystems";

      byte Arr[] = Data.getBytes();//getBytes() use kartat karan string la byte madhe convert karnyasathi 

      System.out.println(Data.length());
      System.out.println(Arr.length);
    }
}//String साठी length() method आहे
//Array साठी length हा property/field आहे
