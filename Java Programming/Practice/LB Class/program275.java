import java.util.*;

class StringX        
{
    public int CountCapital(String str)  //count capital method nahich ahe mhnun me majha class banavla 
    {
        int i = 0, iCount =0;

        char Arr[] = str.toCharArray(); //string la convert kel array of character madhe 
 
                
       for( i=0; i < Arr.length;i++ )
       {
        if(Arr[i] >= 'A' && Arr[i]<= 'Z') 
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
        if( Arr[i]>= 'a' && Arr[i]<= 'z') 
        {
         iCount++;
        }
       }
       return iCount ;
      
    }
    public int CountDigits(String str) 
    {
        int i = 0, iCount =0;
        char Arr[] = str.toCharArray(); 

       for( i=0; i < str.length();i++ )
       {
        if( Arr[i]>= '0' && Arr[i]<= '9') 
        {
         iCount++;
        }
       }
       return iCount ;
      
    }
    public int CountSpace(String str) 
    {
        int i = 0, iCount =0;
        char Arr[] = str.toCharArray(); 

       for( i=0; i < str.length();i++ )
       {
        if( Arr[i] == ' ' ) 
        {
         iCount++;
        }
       }
       return iCount ;
      
    }
    public int CountSpecial(String str) 
    {
        int i = 0, iCount =0;
        char Arr[] = str.toCharArray(); 

       for( i=0; i < str.length();i++ )
       {
        if( (Arr[i] >= '!' && Arr[i] <= '/' ) ||
            (Arr[i] >= ':' && Arr[i] <= '@' ) ||
            (Arr[i] >= '[' && Arr[i] <= '`' ) ||
            (Arr[i] >= '{' && Arr[i] <= '~' ) 
          ) 
        {
         iCount++;
        }
       }
       return iCount ;
      
    }

    
}
class program275
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

        iRet = strobj.CountSmall(data);   
        System.out.println("Number of small character  :"+iRet);

        iRet = strobj.CountDigits(data);  
        System.out.println("Number of Digits are:"+iRet);

        iRet = strobj.CountSpace(data);  
        System.out.println("Number of white spaces are:"+iRet);

        iRet = strobj.CountSpecial(data);  
        System.out.println("Number of special symnols are  are :"+iRet);

    }
}
