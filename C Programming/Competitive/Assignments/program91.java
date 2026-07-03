//Write a program to check whether a given year is leap year or not
/*
leaf year manje 366 divas astat varsa madhe
normally varsha madhe 365 divas astat pn leaf year madhe february madhe 28 aivaji 29 divas astat

logic 400 ne purn bhag jat asel tya year la tar -> leaf year //400 ne divide -> Leap Year
nahitar 100 ne bga jat asel tar -> Not leaf year             //100 ne divide -> Not Leap Year
nahitar 4 ne purn bhag jat asel year la tar -> leap year     //4 ne divide -> Leap Year
anyatha -> Not leap year                                     //else
 */                                                          // Not Leap Year
class Logic
{
    void CheckLeapYear(int Year)
    {
       if((Year % 400) ==0)
       {
        System.out.println("year is leap year");
       }
       else if((Year % 100) ==0)
       {
         System.out.println("year is Not leap year");
       }
       else if((Year % 4) ==0)
       {
         System.out.println("year is leap year");
       }
       else
       {
        System.out.println("year is Not leap year");
       }
    }
}
class program91
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CheckLeapYear(2024);
    }
}