import java.util.*;
class program36
{
    public static void main(String A[])
    {
        Scanner sobj= new Scanner(System.in);//keyboard kadun input kheyla 

        String sName=null;
        int iAge= 0;
        float fMarks= 0.0f;

        System.out.println("Enter your name");
        sName = sobj.nextLine();//sagl string ghenar line ni
        System.out.println("Enter your age");
        iAge= sobj.nextInt();
        System.out.println("Enter your Marks");
        fMarks = sobj.nextFloat();
        
        System.out.println("Name:"+sName);
        System.out.println("Age:"+iAge);
        System.out.println("Marks:"+fMarks);

    }
}