import java.util.*;

class Student
{
   public String name;
   public int marks;


   public Student(String a, int b)
   {
     this.name = a;
     this.marks= b;
   }
      @Override
   public String toString()
   {
     return this.name+" "+this.marks;                                   
   }
}

class program964
{
    public static void main(String A[])
    {
        Student s1 = new Student("Amit",78);
        Student s2 = new Student("Pooja",92);
        Student s3 = new Student("Rahul",85);
        Student s4 = new Student("Neha",92);
        Student s5 = new Student("Kiran",67);

        ArrayList <Student> aobj = new ArrayList<Student>();

        aobj.add(s1);
        aobj.add(s2);
        aobj.add(s3);
        aobj.add(s4);
        aobj.add(s5);

        System.out.println(aobj);


    }
}