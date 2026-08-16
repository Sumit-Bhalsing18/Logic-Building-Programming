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
    System.out.println("Inside constructor");
    this.first = null;
    this.iCount = 0;
  }

  public void Display()
  {
    node temp = null;

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
   
  }
  public void InsertAtPos(int iNo ,int iPos)
  {

  }
  public void DeleteFirst()
  {

  }
  public void DeleteLast()
  {
    
  }
  public void DeleteAtPos(int iPos)
  {
    
  }
   
  

}
class program454
{
    public static void main(String A[])
    {
       SinglyLL sobj = new SinglyLL();

       sobj.InsertFirst(51);
       sobj.InsertFirst(21);
       sobj.InsertFirst(11);

       sobj.InsertLast(101);
      sobj.InsertLast(111);
      sobj.InsertLast(121);

    }
}