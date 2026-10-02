class ParkingLot                                        //singleton sathi steps
{
    private static ParkingLot instance;  //reference         step1

    private ParkingLot()                                 //    step2 constructor private
    {
        System.out.println("ParkingLot Object Gets Created ");
        
    }

    public static ParkingLot getInstance()                       //step3
    {
        if(instance == null)
        {
            instance = new ParkingLot(); //control janar line 1 la
        }
        return instance;  //म्हणजे पहिल्यांदा तयार केलेल्या त्याच object चा reference परत मिळतो.
    }
}

class program974
{
    public static void main(String A[])
    {
       

       ParkingLot pobj1 = ParkingLot.getInstance();
       ParkingLot pobj2 = ParkingLot.getInstance();  
       
       System.out.println(pobj1 == pobj2); //object 2 ahet pn 1ach memory la point karat ahet 
       
    }
}
/*
STEPS SINGLETON PATTERN

Constructor private करा.
static instance reference तयार करा.
getInstance() method तयार करा.
getInstance() मध्ये if(instance == null) check करा.
main() मध्ये getInstance() call करा.*/