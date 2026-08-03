package Marvellous;
public class program280StringX        
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