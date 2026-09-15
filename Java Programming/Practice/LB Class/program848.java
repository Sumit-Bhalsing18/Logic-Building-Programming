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
    private LocalDate Date;
    private String Subject; 
    private double Duration;
    private String Description;

    //constructor
    StudyLog(LocalDate a,String b ,double c ,String d)
    {
        this.Date = a;
        this.Subject = b;
        this.Duration = c;
        this.Description = d;
    }

    @Override             //ji overdide zaliye mhnun te lihil ast 
    public String toString()
    {
        return Date + " | " + Subject + " | "+ Duration + " | "+ Description;
    }

    public LocalDate getDate()
    {
        return this.Date;
    }

    public String getSubject()
    {
        return this.Subject;
    }

    public double getDuration()
    {
        return this.Duration;
    }

    public String getDescription()
    {
        return this.Description;
    }
}
class program848
{
    public static void main(String A[])
    {
       LocalDate lobj = LocalDate.now();

       ArrayList <StudyLog>Database = new ArrayList<StudyLog>();


       StudyLog sobj1 = new StudyLog(lobj,"C Programming",3.5,"Pointers in C");
       StudyLog sobj2 = new StudyLog(lobj,"C++ Programming",3.5,"Pointers in C");
       StudyLog sobj3 = new StudyLog(lobj,"Java Programming",3.5,"Pointers in C");



       for(StudyLog sobj : Database)
       {
        System.out.println(sobj);
       }
       
     

    }
}
/*
3 */











