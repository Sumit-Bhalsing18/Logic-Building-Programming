

class program704
{
    public static void main(String A[])
    {
       String header = "    India   is   my   country    ";//3 spaces
         
        System.out.println(header.length());
        header = header.trim();    //trim madhlya space kadhat nahi 
        
        System.out.println(header.length());

        header = header.replaceAll("  "," ");  
        
          System.out.println(header.length());

        header = header.replaceAll("  "," ");   
        
          System.out.println(header.length());

    }
}