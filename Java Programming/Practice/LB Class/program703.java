

class program703
{
    public static void main(String A[])
    {
       String header = "    India   is   my   country    ";//atta 3 white spaces
         
        System.out.println(header.length());

        header = header.trim();    //trim madhlya space kadhat nahi 
        
        System.out.println(header.length());

        header = header.replaceAll("  "," ");  //double apace la replace kar 1 ni 
        
          System.out.println(header.length());

    }
}