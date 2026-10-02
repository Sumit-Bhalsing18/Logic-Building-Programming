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

   public String getNumber()//getter method
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
             //return type
   public static Vehicle createVehicle(VehicleType type ,String number)  //method object banvaychya jagi he lihil apn manje object handle karaychi gaaraj nahi 
   {                                                                     //hyamule code reduce hoto garaj nahi pratek type cha object banvaycha
       switch(type)
       {
         case BIKE :
            return new Bike(number);  //Bike cha constructor call hoil
         
         case CAR :
            return new Car(number);

         case TRUCK:
            return new Truck(number);

         default:
            return null;
       }
   }
}

class program979
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
1)Why do we use the Factory Design Pattern?

We use the Factory Design Pattern to create objects in one place.
It hides the object creation logic and makes the code easier to manage.
It is useful when we need to create different types of objects based on a condition.


2)म्हणजे object बनवण्याचं काम एका ठिकाणी ठेवणे आणि त्याची process बाकीच्या code पासून लपवणे.
Factory मुळे प्रत्येक वेळी code कमी होतोच असं नाही; पण object creation व्यवस्थित manage करता येतं.

3)Factory असेल तर: Object बनवण्याचं logic आपण VehicleFactory मध्ये लिहितो.
 मग object तयार करण्यासाठी Factory ची method call करतो.

4)VehicleFactory ला सांगितलं की BIKE चा object बनव.

Factory new Bike("MH16SB3008") वापरून Bike चा object बनवते.

तो object v1 मध्ये मिळतो. म्हणजे v1 हा Bike च्या object ला refer करतो.

आता पुढची line:

v1.display();

यामुळे Bike च्या object मधील display() method call होते.

कारण Factory ने Bike चाच object तयार करून दिला आहे.

लक्षात ठेव:

Vehicle हा reference type आहे, पण v1 मध्ये reference असलेला actual object हा Bike चा आहे.
*/