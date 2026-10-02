class ParkingLot
{
    private static ParkingLot instance;  //reference 

    private ParkingLot()
    {
        System.out.println("ParkingLot Object Gets Created ");
        
    }

    public static ParkingLot getInstance() //static ka ? static → object तयार न करता method call करता यावी म्हणून.
    {
        if(instance == null)
        {
            instance = new ParkingLot();  //इथे object तयार होतो आणि त्या object चा reference (patta) instance मध्ये store होतो.
        }
        return instance;  //म्हणजे पहिल्या object चा reference परत देतो.
    }
}

class program973
{
    public static void main(String A[])
    {
       // ParkingLot pobj1 = new ParkingLot(); error

       ParkingLot pobj1 = ParkingLot.getInstance();
       ParkingLot pobj2 = ParkingLot.getInstance();
       ParkingLot pobj3 = ParkingLot.getInstance();

      //pobj1, pobj2, pobj3 हे 3 reference variables आहेत, पण ParkingLot चा फक्त 1 object create झाला आहे.
       
    }
}
/*
1)दुसऱ्या code चा aim आहे: फक्त ONE object तयार करणे आणि तोच object सर्वांना वापरायला देणे.

याला Singleton Pattern म्हणतात. ani hyasathi यासाठी Singleton वापरतो.

2)समजा Parking Lot मध्ये एकच central object ठेवायचा आहे.

आपण कितीही वेळा:

ParkingLot.getInstance()

लिहिले तरी नवीन object तयार होणार नाही.

पहिल्यांदा → object create
नंतर → existing object चा reference return

3)ParkingLot.getInstance() is used to get the single object of the ParkingLot 
class because its constructor is private.

4)
1. Constructor private आहे
private ParkingLot()
{
    System.out.println("ParkingLot Object Gets Created");
}

म्हणून main() मध्ये हे लिहिता येत नाही:

ParkingLot pobj1 = new ParkingLot();  // ❌ Error

कारण constructor बाहेरून accessible नाही.

2. म्हणून getInstance() method दिली
public static ParkingLot getInstance()
{
    if(instance == null)
    {
        instance = new ParkingLot();
    }
    return instance;
}

ही method object तयार करून/आधीचा object परत देते.

5)
private constructor → बाहेरून new करता येत नाही
↓
static getInstance() → object मागण्यासाठी वापरतो
↓
instance == null → पहिल्यांदा object तयार
↓
new ParkingLot() → constructor call
↓
return instance → तोच object परत मिळतो.

6)
instance म्हणजे काय?

instance हा एक reference variable आहे.

त्याचं काम आहे:

ParkingLot च्या object चा reference (पत्ता) स्वतःकडे ठेवणे.

*/