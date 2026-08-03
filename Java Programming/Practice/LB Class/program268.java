import java.util.*;

class StringX        
{
    public void Display(String str) //same asle tari chalte karan function ani class vegla ahe  //non static ahe mhnun obj tayar karava lagnar 
    {
        System.out.println("Received string is :"+str);
    }
}
class program268
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String str = null; 

        StringX strobj = new StringX(); //string class cha object 

        System.out.println("Enter string :");
        str = sobj.nextLine();

        strobj.Display(str);  //call kela varchya class la //class cha object banavla tyachi method call keli tya class chi 
 

    }
}
