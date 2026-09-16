import java.util.*;

interface GetterSetter   //interface banavla interface ahe mhnun implements use kel 
{
    void Accept();
    void Display();
}
class ArrayX implements GetterSetter
{
    public int Arr[];
    public int iSize ;

    public ArrayX(int iSize)
    {
       this.iSize = iSize;
       Arr= new int[iSize];

    }
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements of array");

        for(int i = 0;i < this.iSize;i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {

        System.out.println("the elements of the array are");

        for(int i = 0;i < this.iSize;i++)
        {
            System.out.print(Arr[i]+"\t");
        }
    }
}
class Searching extends ArrayX
{
  public Searching(int iSize)
  {
    super(iSize);
  }
}
class program871
{
    public static void main(String A[])
    {
       Searching sobj =new Searching(5);

       sobj.Accept();;
       sobj.Display();
    }
}