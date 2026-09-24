import java.util.*;
//write kar lihil nahiye tu kahi 

interface GetterSetter   //interface banavla interface ahe mhnun implements use kel 
{
    void Accept();
    void Display();
}
final class ArrayX implements GetterSetter
{
    protected int Arr[];
    protected int iSize ;

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
final class Searching extends ArrayX
{
  public Searching(int iSize)
  {
    super(iSize);
  }

  public boolean BiDirectionalSearch(int iNo)
  {
    int i =0;
    boolean bFlag = false;

    for(i = 0; i < super.iSize;i++)
    {
       if(Arr[i] == iNo)
       {
        bFlag = true;
        break;

        
       }
    }
    return bFlag;
  }

  public boolean BiDirectionalSearch(int iNo)
  {
     int iStart = 0 ,iEnd = 0;

     iStart = 0;
     iEnd = super.iSize- 1;

     while(iStart <= iEnd)
     {
        if(Arr[iMid] == iNo || Arr[iEnd] == iNo)
        {
            bFlag = true;
            break;
        }

        iStart++;
        iEnd--;
     }
     return bFlag;
  }

   public Boolean CheckSorted()
   {
    boolean bFlag = true;

    for(int i = 0; i < iSize -1 ;i++)
    {
        if(Arr[i] > Arr[i+1])
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;
   }

   public boolean BinarySearch(int iNo)
   {
    int iStart = 0 ,iEnd = 0,iMid = 0;

    boolean bFlag = false ;

    iStart = 0;
    iEnd = iSize -1;

    if(iNo < Arr[iStart] || iNo > Arr[iEnd])
    {
        return false;
    }
    while(iStart <= iEnd)
    {
        iMid = iStart + ((iEnd - iStart)/2);
   

    if(Arr[iMid] == iNo)
    {
        bFlag = true ;
        break;
    }
    else if(iNo > Arr[iMid])
    {
      iStart = iMid + 1; 
    }
    else if(iNo < Arr[iMid])
    {
       iEnd = iMid - 1;
    }
     
   }
   return bFlag;
}

class program882
{
    public static void main(String A[])
    {
       Searching sobj =new Searching(5);

       sobj.Accept();;
       sobj.Display();

       if(sobj.BinarySearch(30))
       {
        System.out.println("Element is present ");
       }
       else
       {
         System.out.println("Element is not present ");
       }


    }
}