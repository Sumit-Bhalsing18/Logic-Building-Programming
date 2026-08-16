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
  public node first;      //class cha member ahe first mg parameter madhe PPnode first deychi garaj nahi karan function pn tyach class che ahet 
  public int iCount;

  public SinglyLL()
  {
    System.out.println("Inside constructor");
    this.first = null;
    this.iCount = 0;
  }

}
class program451
{
    public static void main(String A[])
    {
       SinglyLL sobj = new SinglyLL();//  SinglyLL sobj ya navacha reference variable tayar zhala
                                      // new SinglyLL() hyacha arth heap madhe SinglyLL class cha object tayar zhala ani object tayar chala ki automatic call hoto
                                      // toh object banla heap madhe tya object cha address sobj madhe store zhala
    }
}

/* TRICk
new disla ki object tayar hoto
className() disla ani tyachya adhi new asel tar constructor call hoto
*/

/*
 SinglyLL sobj = new SinglyLL(); hyacha artha
 SinglyLL cha object tayar kara tyacha constructor chalva ani tya object cha reference sobj madhe theva 
  */