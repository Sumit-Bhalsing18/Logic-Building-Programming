class Demo
{
   public int i , j ;

    private Demo() //object create zala ki constructor call hoto ani 
    // object bahern manje main function madhn call hoto bahern call yet aslya mule constructor ha public pahije manje baherchyana call karte yeil
    {
     System.out.println("Object created ");
     this.i = 0;
     this.j = 0;
    }
}

class program971
{
    public static void main(String A[])
    {
        Demo obj1 = new Demo();
        Demo obj2 = new Demo(); 

    }
}