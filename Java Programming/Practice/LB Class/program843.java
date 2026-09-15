import java.io.*;
import java.util.*;
import java.time.LocalDate;
import java.time.LocalDateTime;

/*class Object               //adhich output hya mule ale StudyLog@77e4c80f


 */

//class StudyLog extends Object
class StudyLog
{
    //characteristics
    public LocalDate Date;
    public String Subject; 
    public double Duration;
    public String Description;

    //constructor
    StudyLog(LocalDate a,String b ,double c ,String d)
    {
        this.Date = a;
        this.Subject = b;
        this.Duration = c;
        this.Description = d;
    }

    //Override
    public String toString()
    {
        return Date + " | " + Subject + " | "+ Duration + " | "+ Description;
    }
}
class program843
{
    public static void main(String A[])
    {
       LocalDate lobj = LocalDate.now();

       StudyLog sobj1 = new StudyLog(lobj,"C Programming",3.5,"Pointers in C");
       StudyLog sobj2 = new StudyLog(lobj,"Java Programming",5.5,"Inheritance in Java");
       
       System.out.println(sobj1); // System.out.println(sobj1.toString())
       System.out.println(sobj2);
    }
}
/*
2026-08-16 | C Programming | 3.5 | Pointers in C
2026-08-16 | Java Programming | 5.5 | Inheritance in Java */








