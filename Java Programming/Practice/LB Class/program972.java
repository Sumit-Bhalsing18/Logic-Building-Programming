class Demo
{
   public int i , j ;

    private Demo()
    {
     System.out.println("Object created ");
     this.i = 0;
     this.j = 0;
    }
}

class program972
{
    public static void main(String A[])
    {
        Demo obj1 ;
        Demo obj2 ; //reference ahet object nahi 

    }
}
/*
Reference म्हणजे काय?

Reference = object चा address/पत्ता ठेवणारा variable.

उदा. समजा Demo हा एक class आहे.

Demo obj1 = new Demo();

इथे दोन गोष्टी आहेत:

new Demo() → Object तयार केला
obj1 → त्या object चा reference ठेवतो.

सोपं उदाहरण:

🏠 Object = घर
📍 Reference = घराचा पत्ता

म्हणजे obj1 हा घर स्वतः नाही, तर घर कुठे आहे त्याचा पत्ता ठेवतो. */