class node     //java madhe sagl class madhe ast mhnun struct node la node nav dil ani tya adhi class ass lihil 
{
    public int data;
    public node next;  //ha reference ahe karan * pointer lihu shakat nahi 
}
class program444
{
    public static void main(String A[])
    {
        node newn = null ;//java madhe null small  asto ani newn reference banavla memory allocate zali nahiye

        newn = new node() ; //atta mla dynamic memory allocation karaych ahe mhnun new keyword use kela

        newn.data = 11;
        newn.next = null;   //pointer nahiye mhnun -> arrow nahi  java madhe reference asto mhnun . dot 
        
        System.out.println(newn.data);
        System.out.println(newn.next);
    }
}