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

   public String getNumber() //getter method
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


//या class चं काम आहे कोणत्या प्रकारचं vehicle बनवायचं ते ठरवून त्याचा object तयार करून देणं.

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

         //default missing error  //manje default lihila nahi mhnun error 
       }
   }
}

class program978
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
1) Factory design pattern ch kam 
या class चं काम आहे कोणत्या प्रकारचं vehicle बनवायचं ते ठरवून त्याचा object तयार करून देणं.

उदाहरणार्थ, तुला Bike चा object पाहिजे, तर तू थेट new Bike() लिहिण्याऐवजी Factory 
ला सांगतोस की Bike तयार करून दे. 

2)public static Vehicle createVehicle(...)

static असल्यामुळे VehicleFactory चा वेगळा object न बनवता method call करता येते.

3)Vehicle return type का घेतला?
public static Vehicle createVehicle(...)

Factory Bike, Car किंवा Truck यांपैकी कोणताही object परत देऊ शकते. 
हे तिन्ही Vehicle चे child classes आहेत.

म्हणून return type म्हणून Vehicle वापरलं आहे.

4)Vehicle v1 = VehicleFactory.createVehicle( VehicleType.BIKE, "MH16SB3008");
Factory ला सांगितलं की BIKE तयार कर.

Factory ने new Bike("MH16SB3008") वापरून object तयार केला.

तो object v1 मध्ये मिळाला.

अशाच प्रकारे v2 मध्ये Car आणि v3 मध्ये Truck चा object मिळतो.

5)तुझ्या code मध्ये switch ला default नाही.
 त्यामुळे default नसल्यामुळेच compile-time error येतो असं नाही. 
 पण Java मध्ये या method मधून प्रत्येक शक्य execution path वर Vehicle return होत नसल्यामुळे 
 compile-time error येऊ शकतो.

switch च्या शेवटी असं लिहिता येईल:   
 default:
    throw new IllegalArgumentException("Invalid vehicle type");

);
*/