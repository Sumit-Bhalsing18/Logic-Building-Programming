import java.util.*;

class StringX        
{
    public int CountCapital(String str) 
    {
        int i = 0, iCount =0;
       for( i=0; i < str.length();i++ )
       {
        if(str.charAt(i)>= 'A' && str.charAt(i)<= 'Z') // short circuit evaluation 
        {
         iCount++;
        }
       }
       return iCount ;
      
    }
    public int CountSmall(String str) 
    {
        int i = 0, iCount =0;
       for( i=0; i < str.length();i++ )
       {
        if(str.charAt(i)>= 'a' && str.charAt(i)<= 'z') // heavy ahe karan 2 vela method charAt call hotay 
        {
         iCount++;
        }
       }
       return iCount ;
      
     
    }
    
}
class program271
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
