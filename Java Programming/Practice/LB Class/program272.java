import java.util.*;

class StringX        
{
    public int CountCapital(String str) 
    {
        int i = 0, iCount =0;

        char Arr[] = str.toCharArray(); //string la convert kel array of character madhe 
 
                //property ahe array madhe length mhnun () ass circular bracket yenar nahi 
       for( i=0; i < Arr.length;i++ )
       {
        if(Arr[i] >= 'A' && Arr[i]<= 'Z') // short circuit evaluation 
        {
         iCount++;
        }
       }
       return iCount ;
      
    }
    public int CountSmall(String str) 
    {
        int i = 0, iCount =0;
        char Arr[] = str.toCharArray(); 

       for( i=0; i < str.length();i++ )
       {
        if( Arr[i]>= 'a' && Arr[i]<= 'z') // short circuit evaluation 
        {
         iCount++;
        }
       }
       return iCount ;
      
    }
    
}
class program272
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null; //reference ch name change kel conflict nko mhnun 

        StringX strobj = new StringX(); //string class cha object 
        int iRet =0;

        System.out.println("Enter string :");
        data = sobj.nextLine(); //data madhe string input mhnun ghenar 

        iRet = strobj.CountCapital(data);  //call kela varchya class la //class cha object banavla tyachi method call keli tya class chi 
         
        System.out.println("Number of capital character  :"+iRet);

        iRet = strobj.CountSmall(data);  //call kela varchya class la //class cha object banavla tyachi method call keli tya class chi 
         
        System.out.println("Number of small character  :"+iRet);

    }
}
