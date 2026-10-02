class ParkingLot                                        //singleton sathi steps
{
    private static ParkingLot instance;  //reference         step1

    private ParkingLot()                                 //    step2 constructor private
    {
        System.out.println("ParkingLot Object Gets Created ");
        
    }

    public static ParkingLot getInstance() //Static is used so that we can call getInstance() using the class name without creating an object.”                  //step3  getInstance navachi method banavli ji oublic ahe 
    {
        if(instance == null)
        {
            instance = new ParkingLot();
        }
        return instance;
    }
}

class program981
{
    public static void main(String A[])       //
    {
       

       ParkingLot pobj1 = ParkingLot.getInstance();  //constucrtor call hoil pn toh 
                                                  //private ahe mhnun object banat nahi mhnun reference ghetla instance navacha 
       ParkingLot pobj2 = ParkingLot.getInstance();
       ParkingLot pobj3 = ParkingLot.getInstance();
    }
}

//pobj 1 2 3 ekach object la point  karat ahe diagram dakhavli hoti tii

/*
1)static का लिहिलं आहे, हे सोप्या भाषेत समज. 😊

private static ParkingLot instance;

static लिहिलं कारण instance हा variable पूर्ण class चा असावा, प्रत्येक object चा वेगळा नसावा.

समज, आपल्याला ParkingLot चा एकच object ठेवायचा आहे.

static नसेल तर instance हा प्रत्येक object साठी वेगळा असू शकतो.

static असेल तर instance हा class-level variable असतो आणि सर्व objects 
त्याच shared variable ला access करतात (class च्या access rules नुसार).

Interview मध्ये सांग:

“Static is used because the instance variable should be shared at the class level,
 not separately stored in each object.”

2)1. static का लिहिलं?

कारण ParkingLot चा object तयार न करताच आपण getInstance() method call करू शकतो.

उदाहरण:

ParkingLot p1 = ParkingLot.getInstance();

इथे आपण ParkingLot चा object आधी तयार केलेला नाही.
 तरीही getInstance() call करता येतं, कारण ती method static आहे.

3)static → Object न बनवता class च्या नावाने method call करू शकतो.

non-static → Method call करण्यासाठी object चा reference लागतो.


4)public static ParkingLot getInstance()

public → ही method कुठूनही access करता येते.

static → object न बनवता method call करता येते.

ParkingLot → ही method ParkingLot प्रकारचा object reference return करणार आहे.

getInstance() → ही method चे नाव आहे.


5) 
1) Return type               Method काय return करेल

int                            पूर्णांक
String                         Text
ParkingLot                ParkingLot चा reference

getInstance() मधून ParkingLot चा reference परत द्यायचा आहे, 
म्हणून ParkingLot return type ठेवला आहे

6)मग Return type ParkingLot का?

कारण आपल्याला instance मधून ParkingLot चा reference परत मिळणार आहे.

int लिहिलं तर पूर्णांक परत देण्यासाठी असतो.

String लिहिलं तर text परत देण्यासाठी असतो.

ParkingLot लिहिलं तर ParkingLot चा reference परत देण्यासाठी असतो.
*/