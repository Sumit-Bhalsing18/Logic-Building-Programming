
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
class program998
{
    public static void main(String A[])
    {

    }
}