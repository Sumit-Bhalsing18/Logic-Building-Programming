class ParkingTicket
{
    private int ticketNumber;
    private String vehicleNumber;
    private int floorNumber;
    private int spotNumber;
    private String entryTime;
    
    public ParkingTicket(int a,String b, int c, int d, String e)
    {
        this.ticketNumber = a;
        this.vehicleNumber = b;
        this.floorNumber = c;
        this.spotNumber = d;
        this.entryTime = e;
    } 

    public void Display()
    {
        System.out.println("Ticket Number :"+this.ticketNumber);
        System.out.println("Vehicle Number :"+this.vehicleNumber);
        System.out.println("floor Number :"+this.floorNumber);
        System.out.println("Spot Number :"+this.spotNumber);
        System.out.println("Entry Time :"+this.entryTime);
    }
}
class program985
{
    public static void main(String A[])
    {
      ParkingTicket p1 = new ParkingTicket(11,"MH12 VL7172",3,89,"9:30 AM");
      ParkingTicket p2 = new ParkingTicket(12,"MH14 VL7020",4,32,"9:50 AM");

       p1.Display();
       System.out.println();
       p2.Display();


    }
}

/*

ParkingTicket p1 = new ParkingTicket(11,"MH12 VL7172",3,89,"9:30 AM");
Step 1: Object तयार होतो
new ParkingTicket(...)

यामुळे ParkingTicket चा एक नवीन object तयार होतो.

Step 2: Constructor call होतो
ParkingTicket(11,"MH12 VL7172",3,89,"9:30 AM")

Constructor ला ही values मिळतात:

a = 11
b = "MH12 VL7172"
c = 3
d = 89
e = "9:30 AM"

मग:

this.ticketNumber = a;
this.vehicleNumber = b;
this.floorNumber = c;
this.spotNumber = d;
this.entryTime = e;

त्या object च्या variables मध्ये values store होतात.

Step 3: p1 काय आहे?
ParkingTicket p1

p1 हा त्या तयार झालेल्या ParkingTicket object चा reference ठेवतो.

म्हणजे साधारण असे समज:

p1 ─────────► ParkingTicket object
               ticketNumber = 11
               vehicleNumber = "MH12 VL7172"
               floorNumber = 3
               spotNumber = 89
               entryTime = "9:30 AM"
Step 4: p1.Display();

जेव्हा तू लिहितेस:

p1.Display();

तेव्हा p1 ज्या object कडे point/reference करत आहे, त्या object ची Display() method call होते.*/