class node 
{    
    public int data;
    public node next; 
}
class program445
{
    public static void main(String A[])
    {
        node head = null;

         node obj1 = null ;//obj1 references banavla  obj1 pahilya node la point karel
         node obj2 = null; //ob2 second node la point karel
         node obj3 = null;//obj3 third node la point karel

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

    }
}