
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
    public node first;
    public int iCount;

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

    //to check loop present or not 
    public boolean CheckLoop()
    {
       boolean bflag = false;

       node fast = null;
       node slow = null;

       fast = first;
       slow = first;

       while((fast != null) && (fast.next != null))
       {
        fast = fast.next.next;
        slow = slow.next;

        if(fast == slow)
        {
          bflag = true;
          break;
        }
       }
       return bflag;


    }

   
}
class program914
{
    public static void main(String A[])
    {
        SinglyLL sobj = new SinglyLL();
        int iRet = 0;

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.InsertLast(101);
        sobj.InsertLast(111);
        sobj.InsertLast(121);
        sobj.InsertLast(151);
        
        node temp1 = null;
        node temp2 = null;
  
        temp1=sobj.first;
        temp2=sobj.first;

        temp1 = temp1.next.next;  //300 ala temp 1 madhe
        
        while(temp2.next != null)  //he loop 700 payrnt gheun jain 
        {
            temp2 = temp2.next;
        }
        
        //Loop Generation
       // temp2.next = temp1;  //shevatchya loop chya next la 300 
        
        if(sobj.CheckLoop() == true)
        {
            System.out.println("Loop detected");
        }
        else
        {
            System.out.println("There is no loop");
        }
    }
}
/*There is no loop */