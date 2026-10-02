class Demo
{
    public int i , j;

    public Demo setI(int no)
    {
        this.i = no;
        return this;
    }

    public Demo setJ(int no)
    {
        this.j = no;
        return this;
    }

    public void display()
    {
       System.out.println("i :"+i);
       System.out.println("j :"+j);
    }
    
}
class program990
{
    public static void main(String A[])
    {
       Demo dobj = new Demo();
       
       dobj.setI(11).setJ(21).display();
    }
}