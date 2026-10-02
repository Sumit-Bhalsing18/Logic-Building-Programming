class ParkingTicket
{
    public int ticketNumber;
    public String vehicleNumber;
    public int floorNumber;
    public int spotNumber;
    public String entryTime;
    
    public ParkingTicket(int a,String b, int c, int d, String e)
    {
        this.ticketNumber = a;
        this.vehicleNumber = b;
        this.floorNumber = c;
        this.spotNumber = d;
        this.entryTime = e;
    } 

}
class program983
{
    public static void main(String A[])
    {
      ParkingTicket p1 = new ParkingTicket(11,"MH12 VL7172",3,89,"9:30 AM");
      ParkingTicket p2 = new ParkingTicket(12,"MH14 VL7020",4,32,"9:50 AM");

    }
}