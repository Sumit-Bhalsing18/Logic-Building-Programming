import java.util.*;

class program276
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null; //reference ch name change kel conflict nko mhnun 

        program280StringX strobj = new program280StringX(); //error yenar 
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
