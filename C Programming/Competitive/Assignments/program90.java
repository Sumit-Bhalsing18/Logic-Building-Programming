//Write a program to check whether a number is positive negative or zero

/*Output
Number is Negative
*/
class Logic
{
    void CheckSign(int Num)   
    {
       if(Num > 0)
       {
        System.out.println("Number is positive");
       // return;
       }
       else if(Num < 0)
       {
         System.out.println("Number is Negative");
         // return;
       }
       else
       {
         System.out.println("Number is Zero");
       } 
    }
}
class program90
{
    public static void main(String A[])
    {
        Logic obj = new Logic();  //class cha object
        obj.CheckSign(8);
    }
}

