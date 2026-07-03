//Write a program to find the maximum of two numbers
//a is maximum 20
class Logic                         
{
    void FindMax(int a ,int b)   
    {
      if(a > b)
      {
        System.out.println("maximum number is"+a);
      }
      else
      {
        System.out.println("maximum number is "+b);
      }
    }
}
class program83
{
    public static void main(String A[])
    {
      Logic obj = new Logic();
      obj.FindMax(20 ,15);
      
    }
}