
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
}
class program1002
{
    public static void main(String A[])
    {

    }
}

/*
opd kivha passport chi system karaychi 

description lihi kuthla class kasyasathi ahe ani kay karto ahe kon kas call hot ahe*/