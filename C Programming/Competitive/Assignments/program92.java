//Write a program to Display the grade of student based on marks


class Logic
{
    void DisplayGrade(int Marks)
    {
      if(Marks < 0 || Marks > 100)
      {
        System.out.println("Invalid input range should be 1 to 100");
        return ;
      }
       if(Marks >= 80 )
       {
        System.out.println("A");
       }
       else if(Marks >=60 )
       {
         System.out.println("B");
       }
       else if(Marks >=40 )
       {
         System.out.println("C");
       }
       else
       {
        System.out.println("Fail");
       }
    }
}
class program92
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.DisplayGrade(82);
    }
}