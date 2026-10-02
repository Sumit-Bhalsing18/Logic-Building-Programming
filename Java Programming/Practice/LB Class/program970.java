class Demo
{
   public int i , j ;

   public Demo()
   {
     System.out.println("Object created ");
     this.i = 0;   //Java मध्ये this म्हणजे current object.
     this.j = 0;
   }
}

class program970
{
    public static void main(String A[])
    {
        Demo obj1 = new Demo();
        Demo obj2 = new Demo(); 

    }
}
/*
1)this म्हणजे current object.

सोप्या भाषेत:

this.i = 0;

म्हणजे

"आत्ता जो object तयार झाला आहे, त्याच्या i ची value 0 कर.
 */