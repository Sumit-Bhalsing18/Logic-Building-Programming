
/*         riksha auto add kar tu 
    ParkingLot Automation System

    step 1: Create required enums
    step 2: Vehicle hierarchy creation  // sagle classes
    step 3: VehicleFactory creation (Factory Pattern)
    step 4: ParkingSpot Hierarchy
    step 5: ParkingObserver class
    step 6: ParkingFloor class
    step 7: ParkingDisplayBoard (Observer Pattern)
    step 8: ParkingStrategy class (Strategy Pattern)
    step 9: PricingStrategy class (Strategy Pattern)
    step 10: PaymentStrategy class
    step 11: ParkingTicket class
    step 12: EntryGate class
    step 13: ExitGate  class
    step 14: ParkingLot class (Singleton pattern)
    step 15: Main class (Controller)
*/

import java.util.*;
import java.time.Duration;
import java.time.LocalDateTime;

////////////////////////////////////////////////////////////////////////////////////
// step 1 : Create Enums
// It is used to create fixed constants which are required throughout the program
////////////////////////////////////////////////////////////////////////////////////


//represent different type of vehicle supported by the project
enum VehicleType
{
    BIKE ,
    CAR,
    TRUCK
}

//represent different type of Parking spots
enum SpotType
{
    BIKE ,
    CAR,
    TRUCK
}

//repreent the current state of parking ticket
enum TicketStatus
{
    ACTIVE,
    CLOSED
}

////////////////////////////////////////////////////////////////////////////////////
// step 2 : Create Vehicle Class Hierarchy
// It is used to create Multiple types of classes which represents the type of vehicle
//Concepts : Abstaction , Inheritance ,polymorphism ,encapsulation
////////////////////////////////////////////////////////////////////////////////////

//class which represents a generic vehicle type
abstract class Vehicle
{
    //abstracted (hidden) characteristics of class
   private String vehicleNumber;

   private VehicleType vehicleType;

   //parametrised constructor
   public Vehicle(String vehicleNumber ,VehicleType vehicleType)
   {
    this.vehicleNumber = vehicleNumber;
    this.vehicleType   = vehicleType;
   }

   //concreate getter method
   public VehicleType getVehicleType()       //characteristic private ahe tyana baher acces karav mhnun getlihil
    {
      return this.vehicleType;
    }

    //concreate getter method
    public String getVehicleNumber()
    {
      return this.vehicleNumber;
    }

    //Every concrete provide its own defination
    public abstract void display();

}

//class which represent the vehicle type as  Bike
class Bike extends Vehicle
{
    //parametrised constructor
    public Bike(String vehicleNumber)  //vehicletype deychi garaj nahi karan apn Bike class madhe ahe 
    {
        //calls Vehicle class constructor
        super(vehicleNumber,VehicleType.BIKE);
    }

    //Method overriding
    @Override
    public void display()
    {
       System.out.println("Bike : "+getVehicleNumber());
    }
}

//class which represent the vehicle type as  Car
class Car extends Vehicle
{
    //parametrised constructor
    public Car(String vehicleNumber)  //vehicletype deychi garaj nahi karan apn Bike class madhe ahe 
    {
        //calls Vehicle class constructor
        super(vehicleNumber,VehicleType.CAR);
    }

    //Method overriding
    @Override
    public void display()
    {
       System.out.println("Car : "+getVehicleNumber());
    }
}

//class which represent the vehicle type as  truck
class Truck extends Vehicle
{
    //parametrised constructor
    public Truck(String vehicleNumber)  //vehicletype deychi garaj nahi karan apn Bike class madhe ahe 
    {
        //calls Vehicle class constructor
        super(vehicleNumber,VehicleType.TRUCK);
    }

    //Method overriding
    @Override
    public void display()
    {
       System.out.println("Truck : "+getVehicleNumber());
    }
}

////////////////////////////////////////////////////////////////////////////////////
// step 3 : Create VehicleFactory class
// It is used to centralised the creation of vehicle objects
//Concepts : Factory Design Pattern
////////////////////////////////////////////////////////////////////////////////////

class VehicleFactory
{
    //create and return the desired class object
    public static Vehicle createVehicle(VehicleType type , String number)          //static ahe manje object banvaychi garaj nahi
    {
        switch(type)
        {
            case BIKE:
                return new Bike(number);

            case CAR:
                return new Car(number);

            case TRUCK:
                return new Truck(number);
                
            default:
                throw new IllegalArgumentException("Invalid Vehicle type");
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////
// step 4 : Create ParkingSpot hierarchy
// It is used to create hierarchy of parking spots
//Concepts : Abstaction , Inheritance ,polymorphism ,encapsulation
////////////////////////////////////////////////////////////////////////////////////
abstract class ParkingSpot
{
    //unique number for parking spot (Primary Key)
    private int spotNumber;

    //Type of parking spot
    private SpotType spotType;

    //indicate whether spot is currently ocuupied or not
    private boolean occupied;

    //store the information about the vehicle
    private Vehicle vehicle;

    //Parametrised constructor
    public ParkingSpot(int spotNumber ,SpotType spotType)
    {
       this.spotNumber = spotNumber;
       this.spotType = spotType;

       //initialised with default values
       this.occupied = false;
       this.vehicle = null;
    }

    public int getSpotNumber()   //setter method lihaychi garaj nahi 
    {
        return this.spotNumber;
    }

    public SpotType getSpotType()
    {
        return this.spotType;
    }

    public boolean isOccupied()
    {
        return this.occupied;
    }

    public Vehicle getVehicle()
    {
        return this.vehicle;
    }

    //it is used to park the vehicle
    public void parkVehicle(Vehicle vehicle)//vehicle aliye manje ti car truck kivha bike he mahiti asnar ahe
    {
       if(this.occupied == true)
       {
         throw new RuntimeException("PArking spot is already occupied");  
       }
       else
       {
         this.vehicle = vehicle;
         this.occupied = true;
       }
    }
          //return value
    public Vehicle removeVehicle()   // ethe kuthli gadi remove hotiye he sangayla lagel
    {
        if(this.occupied == true)       //manje vehicle parked ahe 
        {
          Vehicle temp = vehicle;        //
          
          this.vehicle = null;

          this.occupied = false;

          return temp;          
        }
        else
        {
            throw new RuntimeException("Parking spot is alrady empty");

        }
    }
    
    //this method decides whether we can park it in the spot or not
    public abstract boolean canFitVehicle(Vehicle vehicle);

    public void display()
    {
        System.out.println("Spot : "+spotNumber+"["+ spotType +"]");

        if(this.occupied == true)
        {
          System.out.println("Occupied by :"+vehicle.getVehicleNumber());
    
        }
        else
        {
            System.out.println("Spot is available");
        }
    }
} //end of parkingSpot class

class BikeSpot extends ParkingSpot
{
    public BikeSpot(int spotNumber)
    {
        super(spotNumber,SpotType.BIKE);
    }

    public boolean canFitVehicle(Vehicle vehicle)
    {
        return vehicle.getVehicleType() == VehicleType.BIKE; //gadicha spot jar car ahe ani car ch park zali tar true manje barobar ani jar gadicha spot truck ani car jar park zali tar error
    }
}

class CarSpot extends ParkingSpot
{
    public CarSpot(int spotNumber)
    {
        super(spotNumber,SpotType.CAR);
    }

    public boolean canFitVehicle(Vehicle vehicle)
    {
        return vehicle.getVehicleType() == VehicleType.CAR; //gadicha spot jar car ahe ani car ch park zali tar true manje barobar ani jar gadicha spot truck ani car jar park zali tar error
    }
}

class TruckSpot extends ParkingSpot
{
    public TruckSpot(int spotNumber)
    {
        super(spotNumber,SpotType.TRUCK);
    }

    public boolean canFitVehicle(Vehicle vehicle)
    {
        return vehicle.getVehicleType() == VehicleType.TRUCK; //gadicha spot jar car ahe ani car ch park zali tar true manje barobar ani jar gadicha spot truck ani car jar park zali tar error
    }
}

////////////////////////////////////////////////////////////////////////////////////
// step 5 : ParkingObserver class
// It is used to Automatically update display board when the parking availability changes
//Concepts : Observer
////////////////////////////////////////////////////////////////////////////////////

interface ParkingObserver
{
    void update();
}

////////////////////////////////////////////////////////////////////////////////////
// step 6 : ParkingFloor class
// It is used to manage parking floor
//Concepts : composition , ArrayList ,object Management
////////////////////////////////////////////////////////////////////////////////////

class ParkingFloor
{
    //unique floor number
    private int floorNumber;

    //collection of all parking spots
    private List<ParkingSpot> parkingSpots;

    //Collection of observer registered for the floor
    private List<ParkingObserver> observers;

    public ParkingFloor(int floorNumber)
    {
        this.floorNumber = floorNumber;


        //object creation arraylist ch
        this.parkingSpots = new ArrayList<>();

        this.observers = new ArrayList<>();
    }

    public int getFloorNumber()//private la get use kel ahe 
    {
        return this.floorNumber;
    }

    public void addParkingSpot(ParkingSpot spot)
    {
        parkingSpots.add(spot);

    }

    public void addObserver(ParkingObserver observer)  //manje jar ajun koni add karaycha asel observer jas ki website , mobile sarkh 
    {
       observers.add(observer); 
    }

    private void notifyObservers()
    {
        for(ParkingObserver observer : observers)
        {
            observer.update();
        }
    }
                                        //upcasting ahe ethe
                                        //class name  and object name
    //methos is going to search parking spot for specific type of vehicle
    public ParkingSpot findAvailableSpot(Vehicle vehicle)
    {
        for(ParkingSpot spot: parkingSpots)
        {
            //2 ni pn  gost jar true zalya tarach        //false ani true ahe ka tarach return 
            if(!spot.isOccupied() && spot.canFitVehicle(vehicle))
            {
                return spot;
            }
        }
        return null;    //jar bike la jaga ahe pn car la nahi tevha null jaga nahi 
    }

    //kahi return karnar nahiye
    //called when new vehicle is parked
    public void occupySpot(ParkingSpot spot,Vehicle vehicle) //gadi ali ani park zali 
    {
        //allocate spot for the vehicle
       spot.parkVehicle(vehicle); 

       //notify all observers about the availability of spots
       notifyObservers();
    }

    public void releaseSpot(ParkingSpot spot) //gadi atta challi ahe baher jatani gadicha cha number vagere kashala pahije na mhnun 1ch parameter
    {
        //release the already allocated spot
        spot.removeVehicle();
  
        //notify all observers about the availability of spots
        notifyObservers();
    }

    public int getAvailableCount(SpotType type)
    {
        int Count = 0;
                              
        //class name           list name
        for(ParkingSpot spot : parkingSpots)
        {
            if(spot.getSpotType() == type && !spot.isOccupied())
            {
               Count++;
            }
        }
        return Count;
    }

    //display all parking spot on specific floor
    public void displayFloor()
    {
       System.out.println();

       System.out.println("Floor :"+floorNumber);

       for(ParkingSpot spot : parkingSpots)
       {
         spot.display();
       }
    }
}

////////////////////////////////////////////////////////////////////////////////////
// step 7 : Create ParkingDisplayBoard Class
// It is used to create a class which displays the parking
// status
// Subject -> ParkingFloor
// Observer -> ParkingDisplayBoard

//Note : Any observer is going to observe the subject
//there will be multiple observer for one subject 
//Concepts : observer design pattern
////////////////////////////////////////////////////////////////////////////////////


class ParkingDisplayBoard implements ParkingObserver
{
    //floor whose availability is display by this board
    private ParkingFloor floor;

    public ParkingDisplayBoard(ParkingFloor floor)
    {
        this.floor = floor;
    }

    //Automatically call whenever floor availability changes
    @Override 
    public void update()
    {
       System.out.println();
       System.out.println("------------------Display Board-----------------");
       System.out.println("Floor :"+floor.getFloorNumber());
       System.out.println("Available Bike Spots :"+floor.getAvailableCount(SpotType.BIKE));
       System.out.println("Available Car Spots :"+floor.getAvailableCount(SpotType.CAR));
       System.out.println("Available Truck Spots :"+floor.getAvailableCount(SpotType.TRUCK));
       System.out.println("------------------------------------------------");
       System.out.println();
    }
}

//we can create new observers for the same subject
/*
   class ParkingWebsite implements ParkingObserver
    {
      public void update()
      {
      }
    }    
*/

////////////////////////////////////////////////////////////////////////////////////
// step 8 : Create ParkingStrategy Class
// It is used to create a class ParkingStrategy which is responsible to decide the
//parking spot selection
//Concepts : Strategy design pattern
////////////////////////////////////////////////////////////////////////////////////

//Defines a common concepts for parking spot selection algorithm 
interface ParkingStrategy
{
    ParkingSpot findSpot(List<ParkingFloor> floors,Vehicle vehicle);
}

//select the first available parking spot
class FirstAvailableParkingStrategy implements ParkingStrategy
{
   @Override 
   public ParkingSpot findSpot(List<ParkingFloor> floors,Vehicle vehicle)
   {
      //iterate over all available floors
      for(ParkingFloor floor : floors)
      {
        ParkingSpot spot = floor.findAvailableSpot(vehicle);

        if(spot != null)
        {
            return spot;
        }
      }
      return null;
   }

}

/*
 */

////////////////////////////////////////////////////////////////////////////////////
// step 9 : Create PricingStrategy Class
// It is used to create a class PricingStrategy 
//it keeps the pricing algorithm independent of exit logic
//Concepts : Strategy design pattern
////////////////////////////////////////////////////////////////////////////////////

interface PricingStrategy
{
    double calculatePrice(Vehicle vehicle ,long hours);
}

class NormalPricingStrategy implements PricingStrategy
{
    @Override
    public double calculatePrice(Vehicle vehicle ,long hours)
    {
        if(hours <= 0)
        {
            hours = 1;
        }

        switch(vehicle.getVehicleType())
        {
            case BIKE:
                return hours * 20;

            case CAR:
                return hours * 50;

            case TRUCK:
                return hours * 100;

            default:
                return 0;
        }
    }
}

class WeekendPricingStrategy implements PricingStrategy
{
    @Override
    public double calculatePrice(Vehicle vehicle ,long hours)
    {
        if(hours <= 0)
        {
            hours = 1;
        }

        switch(vehicle.getVehicleType())
        {
            case BIKE:
                return hours * 40;

            case CAR:
                return hours * 100;

            case TRUCK:
                return hours * 200;

            default:
                return 0;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////
// step 10 : Create PaymentStrategy Class
// It is used to create a class PaymentStrategy 
//it supports different type of payment methods
//Concepts : Strategy design pattern
////////////////////////////////////////////////////////////////////////////////////

//common contract for all payment method
interface PaymentStrategy
{
    void pay(double amount);

}

class UPIPayment implements PaymentStrategy
{
    @Override 
    public void pay(double amount)
    {
        System.out.println("UPI payment successful : Rs"+amount);
    }
}

class CardPayment implements PaymentStrategy
{
    @Override 
    public void pay(double amount)
    {
        System.out.println("Card payment successful : Rs"+amount);
    }
}

class CashPayment implements PaymentStrategy
{
    @Override 
    public void pay(double amount)
    {
        System.out.println("Cash payment successful : Rs"+amount);
    }
}

////////////////////////////////////////////////////////////////////////////////////
// step 11 : Create ParkingTicket Class
// It is used to represent one complete parking transaction
//Concepts : Strategy design pattern
////////////////////////////////////////////////////////////////////////////////////

class ParkingTicket
{
    //used for generating unique tickets
    private static int counter = 1000;

    //Ticket number for unique ticket
    private int ticketNumber;
    
    //vehicle associated with that ticket
    private Vehicle vehicle;

    //Floor on which the vehicle is parked
    private ParkingFloor floor;

    //Actual spot on which the vehicle is parked
    private ParkingSpot spot;

    //time at which vehicle is arrived
    private LocalDateTime entryTime;

    //time at which vehicle exited from parking floor
    private LocalDateTime exitTime;

    //it maintains the status of the ticket
    private TicketStatus status;

    public ParkingTicket(  Vehicle vehicle,
                           ParkingFloor floor,
                           ParkingSpot spot
                        )
    {
        this.ticketNumber = ++counter;
        this.vehicle = vehicle;
        this.floor = floor;
        this.spot = spot;
        this.entryTime = LocalDateTime.now();
        this.status = TicketStatus.ACTIVE;
    }

    //Getter method for ticket number
    public int getTicketNumber()
    {
        return this.ticketNumber;
    }

    //Getter method for vehicle
    public Vehicle getVehicle()
    {
        return this.vehicle;
    }

    //Getter method for floor
    public ParkingFloor getFloor()
    {
        return this.floor;
    }

    //Getter method for floor
    public LocalDateTime getEntryTime()
    {
        return this.entryTime;
    }

    //Getter method for floor
    public LocalDateTime getExitTime()
    {
        return this.exitTime;
    }

    //method gets called when vehicle is going out
    public void closeTicket()
    {
       this.exitTime = LocalDateTime.now();

       this.status = TicketStatus.CLOSED;
    }

    //calculate 
    public long calculateHours()
    {
       LocalDateTime endTime;

       if(exitTime == null)
       {
        endTime = LocalDateTime.now();
       }
       else
       {
        endTime = exitTime;
       }

       //calculate the actual time 
       long minutes = Duration.between(entryTime, endTime).toMinutes();

       //convert minutes to hours
       long hours = minutes / 60;

       if(minutes % 60 != 0)
       {
         hours++;
       }

       if(hours == 0)
       {
         hours = 1;
       }

       return hours;


    }

    //it will display complete ticket on screen 
    public void displayTicket()
    {
        System.out.println("-------------------------------------------------");
        System.out.println("------------------Parking Ticket-----------------");
        System.out.println("-------------------------------------------------");

        System.out.println("Ticket Number :"+this.ticketNumber);
        System.out.println("Vehicle Number :"+this.vehicle.getVehicleNumber());
        System.out.println("Vehicle Type :"+this.vehicle.getVehicleType());
        System.out.println("Floor Number :"+this.floor.getFloorNumber());
        System.out.println("Spot Number :"+this.spot.getSpotNumber());
        System.out.println("Entry time :"+this.entryTime);
        System.out.println("Ticket Number :"+this.ticketNumber);
        System.out.println("Status  Number :"+this.ticketNumber);
        System.out.println("-------------------------------------------------");

    }
}

////////////////////////////////////////////////////////////////////////////////////
// step 12 : Create EntryGate Class
// It is used to handle entry of avehicle and its ticket generation
////////////////////////////////////////////////////////////////////////////////////

class EntryGate
{
    private int gateNumber;    //SOLID principle very important for interview

    public EntryGate(int gateNumber)
    {
         this.gateNumber = gateNumber ;
    }

    public int getGateNumber()
    {
        return this.gateNumber;
    }

    //it generates the new parking ticket when the vehicle is enters

    public ParkingTicket generateTicket(Vehicle vehicle ,ParkingFloor floor,ParkingSpot spot)
    {
        System.out.println("Vehicle entering from gate :"+this.gateNumber);

        //new parking ticket gets generated for the vehicle

        return new ParkingTicket(vehicle,floor,spot);
    }
}

////////////////////////////////////////////////////////////////////////////////////
// step 11 : Create EXitGate Class
// It is used to handle Billing and payment during the vehicle exit
////////////////////////////////////////////////////////////////////////////////////

class ExitGate
{
    private int gateNumber;

    public ExitGate(int gateNumber)
    {
        this.gateNumber = gateNumber;
    }

    public int getGateNumber()
    {
        return this.gateNumber;
    }

    public void processExit(ParkingTicket ticket , PricingStrategy pricingStrategy,PaymentStrategy paymentStrategy)
    {

        //step 1: close the ticket and record the exit time
        ticket.closeTicket();

        //step 2 : calculate the parking duration
        long hours = ticket.calculateHours();

        //step 3 :Calculate the Parking charges
        double amount =pricingStrategy.calculatePrice(ticket.getVehicle(), hours);

        System.out.println();

        //paishe detani ji pavti aste tyavr sagl print hoil hee

        System.out.println("Vehicle exiting from gate :"+gateNumber);

        System.out.println("Parking Duration :"+hours);

        System.out.println("Parking charges :"+amount);

        //step 4: process the payment using selected payment strategy

        paymentStrategy.pay(amount);

    }
}

////////////////////////////////////////////////////////////////////////////////////
// step 11 : Create ParkingLot Class
// this class is the main controller of complete parking system
////////////////////////////////////////////////////////////////////////////////////

//Singleton class
class ParkingLot
{
   private static ParkingLot instance;

   //store the parking lot name
   private String ParkingLotName;

   //store all floors of the parking lot
   private List<ParkingFloor> floors;

   //maps the ticket number with active parking slot
   private Map<Integer , ParkingTicket> activeTickets;

   //maps vehicle number with active ticket
   //use for searching vehicle
   //it prevents duplicate parking

   private Map<String ,ParkingTicket> vehicleTicketMap; //map madhe duplicate houn det nahi same slot milnar nahi 

   //Algorithm used for selecting parking spot
   private ParkingStrategy parkingStrategy;

   //algorithm used for calculating parking strategy
   private PricingStrategy pricingStrategy;

   //private constructor for singleton class
   private ParkingLot()
   {
      floors = new ArrayList<>();

      activeTickets = new HashMap<>();

      vehicleTicketMap = new HashMap<>();

      //default parking strategy
      parkingStrategy = new FirstAvailableParkingStrategy();

      //default pricing strategy
      pricingStrategy = new NormalPricingStrategy();

   }
    
   //used to set name for complete parkingLot
   public void setParkingLotName(String ParkingLotName)
   {
      this.ParkingLotName = ParkingLotName;
   }

   public void addFloor(ParkingFloor floor)
   {
     floors.add(floor);
   }

   //this method return list of all floors
   public List<ParkingFloor> getFloors()
   {
     return floors;
   }

   //this method can be used to change the default parking strategy
   public void setParkingStrategy(ParkingStrategy strategy)
   {
      this.parkingStrategy = strategy;
   }

    //this method can be used to change the default pricing strategy
   public void setPricingStrategy(PricingStrategy strategy)
   {
     this.pricingStrategy = strategy;
   }

   /*
      check duplicate vehicle
             |
        find available spot
             |
        Identify floor for vehicle
             |
        Occupy spot for vehicle
             |
        Generate ticket for vehicle
             |
        Store the finale ticket
    */
   public ParkingTicket parkVehicle( Vehicle vehicle , EntryGate entryGate  )
   {
       //step 1 : prevent the same vehicle for being parked multiple times

       if(vehicleTicketMap.containsKey(vehicle.getVehicleNumber()))
        {
            System.out.println("this vehicle is already parked");

            throw new RuntimeException("the vehicle is already parked");
        }

        //step 2 : find the available parking spot

        ParkingSpot spot = parkingStrategy.findSpot(floors, vehicle);

        //if there is no empty spot
        if(spot == null)
        {
            throw new RuntimeException("Parking is full");
        }

        //step 3 : identify the exact floor for the vehicle

        ParkingFloor selecedFloor = null;

        for(ParkingFloor floor :floors)
        {
            ParkingSpot temp = floor.findAvailableSpot(vehicle);

            if(temp == spot)
            {
                selectedFloor = floor;
                break;
            }
        }

        if(selectedFloor == null)
        {
            throw new RuntimeException("unable to identify floor");
        }

        //Step 4 : Occupy the spot

        selectedFloor.occupySpot(spot, vehicle);

        //step 5 : generate parking ticket from entry gate

        ParkingTicket ticket = entryGate.generateTicket(vehicle, selecedFloor, spot);

        //step 6 : store the ticket using ticket number
        activeTickets.put(ticket.getTicketNumber(),ticket);

        //step 7 : store ticket using vehicle number

        vehicleTicketMap.put(vehicle.getVehicleNumber(),ticket);

        return ticket;

   }

   /*
        find ticket
            |
        process Exit
            |
        Caiculate charges
            |
         Payment
            |
        Release spot
            |
        remove active records
   */
   public void removeVehicle(int ticketNumber, ExitGate exitGate ,
                             PaymentStrategy paymentStrategy)
   {

      //step 1 : find active ticket using ticket number
      ParkingTicket ticket = activeTickets.get(ticketNumber);

      if(ticket == null)
      {
        throw new RuntimeException("there is no such ticket");
      }

      //step 2 : perform billing and payment 

      exitGate.processExit(ticket, pricingStrategy, paymentStrategy);

      //step 3 : release the occupied spot
      ticket.getFloor().releaseSpot(ticket.getSpot());

      //step 4 : remove ticket
      activeTickets.remove(ticketNumber);

      //step 5 :remove vehicle from active vehicle
      vehicleTicketMap.remove(ticket.getVehicle().getVehicleNumber());

      System.out.println("vehicle remove sucessfully");
     

      public ParkingTicket searchTicket(String vehicleNumber)
      {
         return vehicleTicketMap.get(vehicleNumber);
      }

      //display complete parking lot information 
      public void displayParkingLot()
      {
        System.out.println();
        System.out.println("------------------------------------------------");
        System.out.println("------------Paking Lot Details------------------");
        System.out.println("------------------------------------------------");

        for(ParkingFloor floor :floors)
        {
            floor.displayFloor();
        }
      }

   }

}//parkingLot end

////////////////////////////////////////////////////////////////////////////////////
// step 15 : Controller of the project

////////////////////////////////////////////////////////////////////////////////////

/*
  step 1 : create ParkingLot class object  */
class program1013
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
    }

    ////////////////////////////////////////////////////////
    /// 
    ///  Create singlt Parking Lot object
    /// 
    ////////////////////////////////////////////////////////
    
    ParkingLot parkingLot = ParkingLot.getInstance();

    ParkingLot.setParkingLotName( "Marvellous ParkEngine");
}

/*
opd kivha passport chi system karaychi 

description lihi kuthla class kasyasathi ahe ani kay karto ahe kon kas call hot ahe*/