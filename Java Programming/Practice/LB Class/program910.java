
class node
{
    public int data;
    public node next;

    public node(int no)
    {
        this.data = no;
        this.next = null;
    }

}

class SinglyLL
{
    private node first;
    private int iCount;

    public SinglyLL()
    {
        this.first = null;
        this.iCount = 0;
    }
    public void InsertFirst(int iNo)
    {
        node newn = new node(iNo);

            newn.next = first;
            first = newn;

        iCount++;
    }

    public void InsertLast(int iNo)
    {
        node newn = new node(iNo);
        
        if(first == null)
        {
            first=newn;
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
    public int Count()
    {
        return iCount;
    }

    public void Display()
    {
        node temp = null;

        temp = first;
        while(temp != null)
        {
            System.out.print("| "+temp.data+" |->");
            temp = temp.next;
        }
        System.out.println("null");
    }
//T = N + N /2
    public int MiddleElement()
    {
        int iCount = Count();
        int Middle = iCount / 2;
        node temp = first;

        for(int i = 0 ; i<Middle;i++)
        {
            temp = temp.next;
        }

        return temp.data;
    }

    public int MiddleElementX() 
    {
       node fast = first;//teacher
       node slow = first;//student
              //even               //odd
       while(((fast != null)  && fast.next != null) )
       {
         fast = fast.next.next; //2 page read karnar
         slow = slow.next;
       }

       return slow.data;
    }
}
class program910
{
    public static void main(String A[])
    {
        SinglyLL sobj = new SinglyLL();
        int iRet = 0;

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.InsertLast(101);
        sobj.InsertLast(101);
        
        sobj.Display();

        iRet = sobj.MiddleElementX();
        System.out.println("Middle element is :"+iRet);


        
        
    }
}