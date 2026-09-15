import java.io.*;
import java.util.*;

import javax.security.auth.Subject;

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
class program853
{
    public static void main(String A[]) 
    {
       LocalDate lobj = LocalDate.now();

       StudyLog s1 = new StudyLog(lobj,"C programming ",4.5 , "Revision of pointers");
        StudyLog s2 = new StudyLog(lobj,"C++ programming ",4.5 , "Revision of pointers");
         StudyLog s3 = new StudyLog(lobj,"Java programming ",4.5 , "Revision of pointers");
          StudyLog s4 = new StudyLog(lobj,"Python programming ",4.5 , "Revision of pointers");

        ArrayList <StudyLog>Database = new ArrayList<StudyLog>(); //arraylist cha object tyachya object ch nav database
        
        Database.add(s1);
        Database.add(s2);
        Database.add(s3);
        Database.add(s4);

        for(StudyLog s : Database)
        {
            System.out.println(s);
       }

        String FileName = "MarvellousStudyLog.csv";

        try(FileWriter fwobj = new FileWriter(FileName))
        {
          fwobj.write("date,Subject,Duration,Description");


          for(StudyLog s : Database)
          {
            fwobj.write(s.getDate() + "," +
            s.getSubject()+","+
            s.getDuration()+","+
            s.getDescription()+"\n");
          }

         fwobj.close();
        }
        catch(Exception eobj)
        {
            System.out.println(eobj);
        }


        Database.clear();
        Database = null;

        System.gc();
    }
}












