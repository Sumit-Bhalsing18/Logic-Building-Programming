//Write a program to print all odd numbers up to n
//even numbers are 2 4 6 8 10

/* Output
1
3
5
7
9
11
13
15
17
19

apn odd la ass pn lihu shakto if(Num % iCnt)!=0  tar print iCnt
*/


class Logic
{
    void PrintEvenNumbers(int Num)   //function ahe public chi garaj nahi 
    {
        int iCnt =0;
       for(iCnt =1 ;iCnt <=Num  ;iCnt =iCnt +2) 
       {
        System.out.println(iCnt);
       }
    }
}
class program88
{
    public static void main(String A[])
    {
        Logic obj = new Logic();  //class cha object
        obj.PrintEvenNumbers(20);
    }
}

//factors manje purn pane (divide) karnare number  number 