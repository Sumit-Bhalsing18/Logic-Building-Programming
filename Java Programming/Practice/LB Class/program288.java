import java.util.*;
//string la update karaycha ahe

class StringX
{
   public String ToLowerX(String str)  //function ahe return type string ahe 
   {
    int i= 0 ;
    char Arr[] = str.toCharArray(); //convert onto character array

    for(i=0 ;i < Arr.length ;i++)
    {
        if(Arr[i] >= 'A' && Arr[i] >= 'Z')
        {
            Arr[i] =(char)(Arr[i] + 32);   
             
        }
    }
   return new String(Arr);//new string ahe (convert keli array to string )
   }
    public String ToUpperX(String str)  //function ahe return type string ahe 
   {
    int i= 0 ;
    char Arr[] = str.toCharArray(); //convert onto character array

    for(i=0 ;i < Arr.length ;i++)
    {
        if(Arr[i] >= 'a' && Arr[i] >= 'z')
        {
            Arr[i] =(char)(Arr[i] - 32);   
            
        }
    }
   return new String(Arr);//new string ahe (convert keli array to string )
   }
    public String Toggle(String str)  //function ahe return type string ahe 
   {
    int i= 0 ;
    char Arr[] = str.toCharArray(); //convert onto character array

    for(i=0 ;i < Arr.length ;i++)
    {
        if(Arr[i] >= 'a' && Arr[i] >= 'z')
        {
            Arr[i] =(char)(Arr[i] + 32);   
            
        }
        else  //error
        {
           Arr[i] =(char)(Arr[i] - 32);  
        }
    }
   return new String(Arr);//new string ahe (convert keli array to string )
   }
}
class program288
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null; //reference ch name change kel conflict nko mhnun 

        StringX strobj = new StringX(); //string class cha object 

        String sRet = null;

       

        System.out.println("Enter string :");
        data = sobj.nextLine(); //data madhe string input mhnun ghenar 


         sRet = strobj.ToUpperX(data);
         System.out.println("updated string is:"+sRet);

         sRet = strobj.ToLowerX(data);
         System.out.println("updated string is:"+sRet);


        sRet = strobj.Toggle(data);
         System.out.println("updated string is:"+sRet);

        

    }
}
//HW java madhe jas kelay tas c++ ni kar pn tith package nahi usingnamespace ni
/*input
|
String
|
char array
|
updation
|
convert array to string
|
return string
*/