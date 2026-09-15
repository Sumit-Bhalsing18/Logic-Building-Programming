import java.io.*;
import java.util.*;
import java.time.LocalDate;
import java.time.LocalDateTime;

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
}
class program841
{
    public static void main(String A[])
    {
       LocalDate lobj = LocalDate.now();

       StudyLog sobj1 = new StudyLog(lobj,"C Programming",3.5,"Pointers in C");
       StudyLog sobj2 = new StudyLog(lobj,"Java Programming",5.5,"Inheritance in Java");
       
       System.out.println(sobj1);
       System.out.println(sobj2);
    }
}
/*
StudyLog@77e4c80f
StudyLog@35fc6dc4 */






