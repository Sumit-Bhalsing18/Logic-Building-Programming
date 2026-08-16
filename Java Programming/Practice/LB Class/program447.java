class node
{     
    public int data;
    public node next; 
}
class program447
{
    public static void main(String A[])
    {
        node head = null;

         node obj1 = null ;//3 references banavla
         node obj2 = null;
         node obj3 = null;

         obj1 = new node();  //dynamic memory allocation kel memory bhetli
         obj2 = new node();
         obj3 = new node();

         obj1.data = 11;  //number dila shirt var
         obj2.data = 21;
         obj3.data = 51;

         obj1.next = obj2;
         obj2.next = obj3;
         obj3.next = null;

         head = obj1 ; //manje head madhe pahilya node cha adress dila 

        System.out.println(head.data);  //100 cha data 11

        head = head.next; //manje head gela 200 la

        System.out.println(head.data);  //head atta haltoy adhi halat navta 

        head = head.next; 

        System.out.println(head.data);

        

    }
}