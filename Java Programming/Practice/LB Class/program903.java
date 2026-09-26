
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
}
class program903
{
    public static void main(String A[])
    {
        SinglyLL sobj = new SinglyLL();
        int iRet = 0;

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.Display();

        iRet = sobj.Count();
        System.out.println("Number of elements are "+iRet);
        
    }
}