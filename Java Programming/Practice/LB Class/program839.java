import java.io.*;
import java.util.*;
import java.time.LocalDate;
import java.time.LocalDateTime;

class StudyLog
{
    //characteristics
    public String Subject; 
    public double Duration;

    //constructor
    StudyLog(String a ,double d)
    {
        this.Subject = a;
        this.Duration = d;
    }
}
class program839
{
    public static void main(String A[])
    {
       StudyLog sobj1 = new StudyLog("C",2.5);
       StudyLog sobj2 = new StudyLog("Java",4.5);

       System.out.println(sobj1);
       System.out.println(sobj2);

       LocalDateTime lobj = LocalDateTime.now();
       System.out.println(lobj);
    }
}
/*
StudyLog@6385cb26
StudyLog@38364841
2026-08-16T12:18:38.080035200 */





