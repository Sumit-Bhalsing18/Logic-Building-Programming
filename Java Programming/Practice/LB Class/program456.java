class node
{     
    public int data;
    public node next; 
    node(int no)
    {
        this.data =no;
        this.next = null;
    }
}

class SinglyLL
{
  private  node first;
  private  int iCount;

  public SinglyLL()
  {
    this.first = null;
    this.iCount = 0;
  }

  public void Display()
  {
    node temp = first;

    while(temp != null)
    {
      System.out.print("|"+temp.data+" |->");
      temp = temp.next;
    }
    System.out.println("null");

  }
  public int Count()
  {
    return iCount;
  }
  public void InsertFirst(int iNo)
  {
    node newn = new node(iNo) ;//node banla
    if(first == null)
    {
      first = newn;
    }
    else
    {
      newn.next =first;
      first = newn;
    }
    iCount++;//++ kela karan node vadhla ahe 
  }  
  public void InsertLast(int iNo)
  {
    node newn = new node(iNo) ;//node banla  dynamic memory dili 
    if(first == null)
    {
      first = newn;
    }
    else
    {
       node temp = first;

      while(temp.next != null)
      {
        temp = temp.next;
      }
      temp.next = newn;
    }
    iCount++;
   
  }
  public void InsertAtPos(int iNo ,int iPos)
  {

  }
  public void DeleteFirst()
  {
      if(first == null)
      {
        return ;
      }
      else if(first.next != null)
      {
        first = null;
      }
      else 
      {
         first = first.next;
      }
      iCount--;
  }
  public void DeleteLast()
  {
          if(first == null)
      {
        return ;
      }
      else if(first.next != null)
      {
        first = null;
      }
      else 
      {
         node temp = first;

        while(temp.next.next != null)
        {
           temp = temp.next;
        }
        temp.next= null;   //delete karaychi garaj nahi karan System.gc ghrun jail ethe automatic garbage collaction ahe
      }
      iCount--;
  }
  public void DeleteAtPos(int iPos)
  {
    
  }
   
  

}
class program455
{
    public static void main(String A[])
    {
      int iRet = 0;
       SinglyLL sobj = new SinglyLL();

       sobj.InsertFirst(51);
       sobj.InsertFirst(21);
       sobj.InsertFirst(11);

       sobj.InsertLast(101);
      sobj.InsertLast(111);
      sobj.InsertLast(121);

      sobj.Display();
      iRet = sobj.Count();
      System.out.println("Number of nodes are "+iRet);

      sobj.DeleteFirst();
      sobj.DeleteLast();
      sobj.Display();
      iRet = Count();
      System.out.println("Number of nodes are "+iRet);

    }
}