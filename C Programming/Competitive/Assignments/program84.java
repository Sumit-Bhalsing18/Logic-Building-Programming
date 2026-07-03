//Write a program to find the minimum of three numbers
//Output minimum number is 2
class Logic                         
{
    void FindMin(int a ,int b ,int c)   
    {
      if(a <= b && a <= c)
      {
        System.out.println("minimum number is"+a);
      }
      else if(b <= a && b <= c)
      {
        System.out.println("minimum number is "+b);
      }
      else
      {
        System.out.println("minimum number is "+c);
      }
    }
}
class program84
{
    public static void main(String A[])
    {
      Logic obj = new Logic();
      obj.FindMin(3, 7, 2);
      
    }
}