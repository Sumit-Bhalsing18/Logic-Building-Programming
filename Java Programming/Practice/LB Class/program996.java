
/*
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
class program996
{
    public static void main(String A[])
    {

    }
}