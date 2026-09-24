//Convert in C++

import java.util.*;

interface GetterSetter
{
    void Accept();
    void Display();
}

class ArrayX implements GetterSetter
{
    protected int Arr[];
    protected int iSize;

    public ArrayX(int iSize)
    {
        this.iSize = iSize;
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements of array");

        for(int i = 0; i < this.iSize; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Elements of the array are : ");

        for(int i = 0; i < this.iSize; i++)
        {
            System.out.print(Arr[i]+"\t");
        }

        System.out.println();
    }
}

final class Searching extends ArrayX
{
    public Searching(int iSize)
    {
        super(iSize);
    }
    
    public boolean LinearSearch(int iNo)
    {
        int i = 0;
        boolean bFlag = false;

        for(i = 0; i < super.iSize; i++)
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
        int iStart = 0, iEnd = 0;
        boolean bFlag = false;

        iStart = 0;
        iEnd = super.iSize-1;

        while(iStart <= iEnd)
        {
            if(Arr[iStart] == iNo || Arr[iEnd] == iNo)
            {
                bFlag = true;
                break;
            }

            iStart++;
            iEnd--;
        }

        return bFlag;
    }

    public boolean CheckSorted()
    {
        boolean bFlag = true;

        for(int i = 0; i < iSize-1; i++)
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
        int iStart = 0, iEnd = 0, iMid = 0;
        boolean bFlag = false;

        if(CheckSorted() == false)
        {
            return BiDirectionalSearch(iNo);
        }
        
        iStart = 0;
        iEnd = iSize-1;

        if(iNo < Arr[iStart] || iNo > Arr[iEnd])
        {
            return false;
        }

        while(iStart <= iEnd)
        {
            iMid = iStart + ((iEnd - iStart) / 2);

            if(Arr[iMid] == iNo || Arr[iStart] == iNo || Arr[iEnd] == iNo)
            {
                bFlag = true;
                break;
            }
            else if(iNo < Arr[iMid])
            {
                iEnd = iMid - 1;
            }
            else if(iNo > Arr[iMid])
            {
                iStart = iMid + 1;
            }
        }

        return bFlag;
    }
}

final class Sorting extends ArrayX
{
    public Sorting(int iSize)
    {
        super(iSize);
    }
    public void BubbleSort()
    {
        int i = 0 , j = 0 , temp = 0 , pass = 0;

        for(i = 0 ,pass = 1 ; i< iSize -1 ; i++ , pass++)
        {
            for(j = 0 ; j< iSize -1-i ; j++)
            {
                 if(Arr[j] > Arr[j + 1])
                 {
                    temp = Arr[j];
                    Arr[j] = Arr[j + 1];
                    Arr[j+1] = temp;
                 }
            }
            System.out.println("Data after pass "+pass);
            Display();
        }
        
    }

    public void BubbleSortEfficient()
    {
        int i = 0 , j = 0 , temp = 0 ;

        boolean bFlag = false ;

        bFlag = true;
        for(i = 0 ; (i< iSize -1); i++)
        {
            bFlag = false ;

            if(bFlag == false)
            {
                break;
            }
            bFlag = false;
            for(j = 0 ; j< iSize -1-i ; j++)
            {
                 if(Arr[j] > Arr[j + 1])
                 {
                    temp = Arr[j];
                    Arr[j] = Arr[j + 1];
                    Arr[j+1] = temp;

                    bFlag = true ; //very important
                 }
            }
            
        }
        
    }
}

class program893
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter number of elements : ");
        int iSize = sobj.nextInt();

        Sorting srobj = new Sorting(iSize);
        srobj.Accept();
        srobj.Display();

        srobj.BubbleSortEfficient();
        srobj.Display();

        System.out.println("Final sorted array ");
        srobj.Display();
    }
}