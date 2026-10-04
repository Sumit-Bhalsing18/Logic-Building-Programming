import java.util.*;

interface ParkingObserver
{
    void update(int availableSlots);
}

class DisplayBoard implements ParkingObserver
{
     public void update(int availableSpots)
     {
        System.out.println("Display Board :"+availableSpots);
     }
}

class MobileApplication implements ParkingObserver
{
     public void update(int availableSpots)
     {
        System.out.println("Mobile Application :"+availableSpots);
     }
}

class ParkingFloor
{
    private int availableSpots;

    public ParkingFloor(int availableSpots)
    {
        this.availableSpots = availableSpots;
    }
}
class program994
{
    public static void main(String A[])
    {
       ParkingFloor floor= new ParkingFloor(5);

    }
}