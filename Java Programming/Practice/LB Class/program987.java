//हा Builder Pattern चा example आहे.
class ParkingTicket
{
    private int ticketNumber;
    private String vehicleNumber;
    private int floorNumber;
    private int spotNumber;
    private String entryTime;
    
   /* public ParkingTicket(int a,String b, int c, int d, String e)
    {
        this.ticketNumber = a;
        this.vehicleNumber = b;
        this.floorNumber = c;
        this.spotNumber = d;
        this.entryTime = e;
    }  */


/*हा constructor म्हणतो:  public ParkingTicket(Builder builder)

"मला एक Builder object दे, म्हणजे त्याच्यात भरलेल्या values मी ParkingTicket मध्ये घेऊ शकतो."
 */
    public ParkingTicket(Builder builder)
    {
    //इथे Builder मधल्या values घेऊन ParkingTicket object मध्ये copy केल्या जातात.

        this.ticketNumber = builder.ticketNumber;  
        this.vehicleNumber = builder.vehicleNumber;
        this.floorNumber = builder.floorNumber;
        this.spotNumber = builder.spotNumber;
        this.entryTime = builder.entryTime;
    }

    public void Display()
    {
        System.out.println("Ticket Number"+this.ticketNumber);
        System.out.println("Vehicle Number"+this.vehicleNumber);
        System.out.println("floor Number"+this.floorNumber);
        System.out.println("Spot Number"+this.spotNumber);
        System.out.println("Entry Time"+this.entryTime);
    }

}

class Builder   //Builder मध्ये आपण सगळ्या values temporary store करतो.  
{
    public int ticketNumber;
    public String vehicleNumber;
    public int floorNumber;
    public int spotNumber;
    public String entryTime;
      
    //return value Builder ahe 
    public Builder setTicketNumber(int ticketNumber)
    {
        this.ticketNumber = ticketNumber;  //म्हणजे Builder object मध्ये value store केली.
        return this;         //म्हणजे तोच Builder object परत दे.
    }

    public Builder setVehicleNumber(String vehicleNumber)
    {
        this.vehicleNumber = vehicleNumber;
        return this;
    }

    public Builder setFloorNumber(int floorNumber)
    {
        this.floorNumber = floorNumber;
        return this;
    }

    public Builder setSpotNumber(int spotNumber)
    {
        this.spotNumber = spotNumber;
        return this;
    }

    public Builder setEntryTime(String entryTime)
    {
        this.entryTime = entryTime;
        return this;
    }


    //return value ParkingTicket cha object
    public ParkingTicket build()
    {
        return new ParkingTicket(this);   //इथे this म्हणजे current Builder object.
//"आता Builder मध्ये सगळ्या values भरल्या आहेत. आता त्या values वापरून ParkingTicket object तयार कर."
    }
    
}
class program987
{
    public static void main(String A[])
    {
       ParkingTicket pobj = new Builder()
       .setTicketNumber(11)
       .setVehicleNumber("MH12VL9080")
       .setFloorNumber(4)
       .setSpotNumber(89)
       .setEntryTime("10:30 AM")
       .build();

       pobj.Display();
    }
}

/*
1)ParkingTicket p1 = new ParkingTicket(
    11,
    "MH12 VL7172",
    3,
    89,
    "9:30 AM"
);

इथे constructor मध्ये सगळ्या values एकाच वेळी द्याव्या लागत होत्या.

समजा ParkingTicket मध्ये 10-15 variables असते, तर constructor खूप मोठा झाला असता:

new ParkingTicket(a,b,c,d,e,f,g,h,i,j...)

आणि कोणती value कोणासाठी आहे हे लक्षात ठेवणे कठीण.

2)2. म्हणून Builder Pattern वापरला

आपण असे लिहू शकतो:

ParkingTicket pobj = new Builder()
       .setTicketNumber(11)
       .setVehicleNumber("MH12VL9080")
       .setFloorNumber(4)
       .setSpotNumber(89)
       .setEntryTime("10:30 AM")
       .build();

हे वाचायलाही सोपे आहे:

Ticket number set कर
Vehicle number set कर
Floor number set कर
Spot number set कर
Entry time set कर
शेवटी ticket तयार कर

3)साधारण असे समज:

Builder object
   |
   | ticketNumber = 11
   | vehicleNumber = MH12VL9080
   | floorNumber = 4
   | spotNumber = 89
   | entryTime = 10:30 AM
   |
   ↓
ParkingTicket object तयार

4)याचा actual flow:

1. new Builder()
       ↓
   Builder object तयार

2. setTicketNumber(11)
       ↓
   Builder मध्ये 11 store

3. setVehicleNumber(...)
       ↓
   Builder मध्ये vehicle number store

4. setFloorNumber(4)
       ↓
   Builder मध्ये floor number store

5. setSpotNumber(89)
       ↓
   Builder मध्ये spot number store

6. setEntryTime(...)
       ↓
   Builder मध्ये entry time store

7. build()
       ↓
   ParkingTicket object तयार

8. ParkingTicket object चा reference
   pobj मध्ये store

5) VERY IMPORTANT

this ची गरज ParkingTicket object तयार करण्यासाठी नाही;
 Builder मध्ये भरलेल्या values ParkingTicket ला देण्यासाठी आहे. चला फक्त हेच समजून घेऊ.

*/