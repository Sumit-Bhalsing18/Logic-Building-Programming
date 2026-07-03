//Write a program to find the minimum of three numbers (interview sathi changla)
//Output minimum number is 2
class Logic                         
{
    void FindMin(int a ,int b ,int c)   
    {
      int Min = a;

      if(b < Min)
      {
        Min =b;
      }
      if(c < Min)
      {
        Min = c;
      }
      System.out.println("Minimum of three number is"+Min);
    }
    
}
class program84X
{
    public static void main(String A[])
    {
      Logic obj = new Logic();
      obj.FindMin(3, 7, 2);
      
    }
}