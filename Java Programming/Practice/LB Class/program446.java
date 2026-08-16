class node
{     
    public int data;
    public node next; 
}
class program446
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

        System.out.println(head.data);   //11
        System.out.println(head.next.data);//21
        System.out.println(head.next.next.data);//51

    }
}