enum VehicleType
{
    BIKE , CAR , TRUCK
}

abstract class Vehicle //(A)
{
   private String number;

   public Vehicle(String number) //getNumber() ही private method नाही, public method आहे. त्यामुळे Car सारख्या child class मधून ती वापरता येते.
   {
      this.number = number; //आलेला नंबर(Number) object मध्ये store करणे.
   }

   public String getNumber()  //getter method
   {
      return this.number;
   }

   public abstract void display();

}

class Bike extends Vehicle
{
   public Bike(String number)
   {
     super(number);  //super() हे parent चा constructor call करतं.
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
     super(number); //control janar line 10 
                    // parent class cha constructor call zala with number
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

class program977
{
    public static void main(String A[])
    {
       Car cobj = new Car("MH16SB3008");  //control line 39 la  
                                                 //object create zala car cha

       cobj.display();

       Truck tobj = new Truck("MH169566");
       tobj.display();
    }
}

/*
1)Vehicle abstract आहे म्हणून new Vehicle() लिहून तिचा direct object बनवता येत नाही.
 पण Vehicle चा constructor Car आणि Truck चे objects तयार होताना super() द्वारे call होतो.
 
2)abstract → method ची body child class मध्ये लिहावी लागते.

extends → parent class कडून inheritance.

super() → parent class चा constructor call.

this.number = number → आलेला नंबर object मध्ये store करणे.

3)this.number → Current object चा  variable toh manje number.

number → User ने दिलेला नंबर.

4)private String number;

म्हणून दुसऱ्या class मधून number ला direct access करता येत नाही.

त्यासाठी Vehicle मध्ये getter method लिहिली आहे:
*/