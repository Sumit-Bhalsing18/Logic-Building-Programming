import java.io.*;
import java.util.*;

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
class program838
{
    public static void main(String A[])
    {
       StudyLog sobj1 = new StudyLog("C",2.5);
       StudyLog sobj2 = new StudyLog("Java",4.5);

       System.out.println(sobj1);
       System.out.println(sobj2);
    }
}
/*
StudyLog@2bbaf4f0
StudyLog@11c20519*/




