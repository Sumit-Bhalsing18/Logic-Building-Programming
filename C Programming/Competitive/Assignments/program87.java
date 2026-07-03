//Write a program to print all even numbers up to n
//even numbers are 2 4 6 8 10

/* Output
2
4
6
8
10
12
14
16
18
20 */
class Logic
{
    void PrintEvenNumbers(int Num)   //function ahe public chi garaj nahi 
    {
        int iCnt =0;
       for(iCnt =2 ;iCnt <=Num  ;iCnt =iCnt +2) 
       {
        System.out.println(iCnt);
       }
    }
}
class program87
{
    public static void main(String A[])
    {
        Logic obj = new Logic();  //class cha object
        obj.PrintEvenNumbers(20);
    }
}

//factors manje purn pane (divide) karnare number  number 