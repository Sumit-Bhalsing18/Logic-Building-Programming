import java.util.*;
//string la update karaycha ahe

class StringX
{
   public String Update(String str)  //function ahe return type string ahe 
   {
    int i= 0 ;
    char Arr[] = str.toCharArray(); //convert onto character array

    for(i=0 ;i < Arr.length ;i++)
    {
        if(Arr[i] =='A' || Arr[i] =='a')
        {
            Arr[i] = '_';
        }
    }
   return new String(Arr);//new string ahe (convert keli array to string )
   }
}
class program279
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null; //reference ch name change kel conflict nko mhnun 

        StringX strobj = new StringX(); //string class cha object 

        String sRet = null;

       

        System.out.println("Enter string :");
        data = sobj.nextLine(); //data madhe string input mhnun ghenar 

         sRet = strobj.Update(data);
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