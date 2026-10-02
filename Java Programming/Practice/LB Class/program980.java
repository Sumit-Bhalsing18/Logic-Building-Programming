enum VehicleType
{
    BIKE , CAR , TRUCK
}

abstract class Vehicle
{
   private String number;

   public Vehicle(String number)
   {
      this.number = number;
   }

   public String getNumber()
   {
      return this.number;
   }

   public abstract void display();

}

class Bike extends Vehicle
{
   public Bike(String number)
   {
     super(number);
   }

   public void display()
   {
     System.out.println("Bike :"+getNumber());
   }
}

class Car extends Vehicle
{
   public Car(String number)
   {
     super(number);
   }

   public void display()
   {
     System.out.println("Car :"+getNumber());
   }
}

class Truck extends Vehicle
{
   public Truck(String number)
   {
     super(number);
   }

   public void display()
   {
     System.out.println("Truck :"+getNumber());
   }
}

class VehicleFactory             //Design pattern class konapasn inherit hot nahi koanala karat nahi
{
   public static Vehicle createVehicle(VehicleType type ,String number)  //method object banvaychya jagi he lihil apn manje object handle karaychi gaaraj nahi 
   {                                                                     //hyamule code reduce hoto garaj nahi pratek type cha object banvaycha
       switch(type)
       {
         case BIKE :
            return new Bike(number);
         
         case CAR :
            return new Car(number);

         case TRUCK:
            return new Truck(number);

         default:
            throw new IllegalArgumentException("Invalid vehicle type ");
       }
   }
}

class program980
{
    public static void main(String A[])
    {
       Vehicle v1 = VehicleFactory.createVehicle(VehicleType.BIKE , "MH16SB3008");
       Vehicle v2 = VehicleFactory.createVehicle(VehicleType.CAR , "MH16WZ9866");
       Vehicle v3 = VehicleFactory.createVehicle(VehicleType.TRUCK , "MH16WZ111");

       v1.display();
       v2.display();
       v3.display();
    }
}
/*
1)enum → कोणकोणते types उपलब्ध आहेत ते सांगतो.
class → त्या type चा object आणि त्याचं काम define करते.


*/