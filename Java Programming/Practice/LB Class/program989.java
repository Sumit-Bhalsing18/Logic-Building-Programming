class Demo
{
    public int i , j;

    public Demo fun()
    {
        this.i = 11;
        return this;
    }

    public int gun()
    {
        return this.i;
    }
    
}
class program989
{
    public static void main(String A[])
    {
       Demo dobj = new Demo();
       int ret = dobj.fun().gun();   

       System.out.println(ret);
    }
}