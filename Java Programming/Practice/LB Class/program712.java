
class program712
{
    public static void main(String A[])
    {
       String header = "India   is  my  country";

       header = header.trim();

       header = header.replaceAll("\\s+"," ");
         
       String Arr[] = header.split(" ");//space ha delimitor ahe space disla ki tukda

       System.out.println("Number of words are :"+Arr.length);

       for(int i =0 ;i < Arr.length ; i++)
       {
        System.out.println(Arr[i]);
       }

    }
}
