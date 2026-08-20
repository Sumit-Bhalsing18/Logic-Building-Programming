class node
{
    public int data;
    public node next;
    public node prev; 

    node(int iNo)
    {
        this.data = iNo;
        this.next = null;
        this.prev = null;
    }
}
class DoublyCL
{
    private node first ;
    private node last ;
    private int iCount;

    DoublyCL()
    {
        this.first = null;
        this.last = null;
        this.iCount = 0;
    }

    void Display()
    {
        node temp = first;
       do
       {
         System.out.print("| "+temp.data+" |<=>");
         temp = temp.next;
       }while(temp != last.next);
       System.out.println();
    }
    int Count()
    {
        return iCount;
    }
    void InsertFirst(int iNo)
    {
        node newn = new node(iNo);

        if(first == null && last == null)
        {
            first = newn;
            last  = newn;
        }
        else
        {
            newn.next = first;
            first.prev =newn;
            first = newn;  
        }
        last.next = first;
        first.prev = last;
        iCount++;
    }
    void InsertLast(int iNo)
    {
        node newn = new node(iNo);

        if(first == null && last == null)
        {
            first = newn;
            last  = newn;
        }
        else
        {
           node temp = first;
           while(temp.next != last.next)
           {
            temp = temp.next;
           }
           temp.next = newn;
           newn.prev = temp;
           last = newn;
        }
        last.next = first;
        first.prev = last;
          iCount++;
    }
    void InsertAtPos(int iNo ,int iPos)
    {
        iCount = Count();

        if(iPos < 1 || iPos > iCount + 1)
        {
            System.out.println("Invalis Position ");
            return ;
        }

        if(iPos == 1)
        {
            InsertFirst(iNo);
        }
        else if(iPos == iCount + 1)
        {
            InsertLast(iNo);
        }
        else
        {
            int i =0;
            node temp = first;
            node newn = new node(iNo);
            for(i =1 ; i < iPos -1 ; i++)
            {
               temp = temp.next;
            }
            newn.next = temp.next;
            temp.next.prev = newn;
            temp.next = newn;
            newn.prev = temp;
            iCount++;
        }
        
    }
    void DeleteFirst()
    {
      if(first == null && last == null)
      {
           return ;
      }
      else if(first == last)
      {
         first = null;
         last  = null;
      }
      else
      {
         first = first.next;
         first.prev = null;
        last.next = first;
        first.prev = last;
        iCount--;
      }

    }
    void DeleteLast()
    {
      if(first == null && last == null)
      {
           return ;
      }
      else if(first == last)
      {
         first = null;
         last  = null;
      }
      else
      {
        node temp = first;
        while(temp.next != last)
        {
            temp = temp.next;
        }
        last = temp;
        last.next = first;
        first.prev = last;
        iCount--;
      }  
    }
    void DeleteAtPos(int iPos)
    {
        iCount = Count();

        if(iPos < 1 || iPos > iCount + 1)
        {
            System.out.println("Invalis Position ");
            return ;
        }

        if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == iCount)
        {
            DeleteLast();
        }
        else
        {
            int i =0;
            node temp = first;
           
            for(i =1 ; i < iPos -1 ; i++)
            {
               temp = temp.next;
            }
            temp.next = temp.next.next;
            temp.next.prev = temp;
            iCount--;
        }       
    }
}

class SDoublyCircular
{
    public static void main(String A[])
    {
        DoublyCL dobj = new DoublyCL();
        int iRet = 0;

        dobj.InsertFirst(51);
        dobj.InsertFirst(21);
        dobj.InsertFirst(11);
        dobj.Display();
        iRet =dobj.Count();
        System.out.println("Number of nodes are "+iRet);

        dobj.InsertLast(101);
        dobj.InsertLast(111);
        dobj.InsertLast(121);
        dobj.Display();
        iRet =dobj.Count();
        System.out.println("Number of nodes are "+iRet);

        dobj.DeleteFirst();
        dobj.Display();
        iRet =dobj.Count();
        System.out.println("Number of nodes are "+iRet);

        dobj.DeleteLast();
        dobj.Display();
        iRet =dobj.Count();
        System.out.println("Number of nodes are "+iRet);

        dobj.InsertAtPos(105,4);
        dobj.Display();
        iRet =dobj.Count();
        System.out.println("Number of nodes are "+iRet);

        dobj.DeleteAtPos(4);
        dobj.Display();
        iRet =dobj.Count();
        System.out.println("Number of nodes are "+iRet);


    }
}