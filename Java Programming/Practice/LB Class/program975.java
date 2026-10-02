enum VehicleType
{
    BIKE , CAR , TRUCK
}

class program975
{
    public static void main(String A[])
    {
       VehicleType obj = VehicleType.CAR;  //obj मध्ये VehicleType मधली एक (car) value store होईल.

       System.out.println(obj);
       System.out.println(VehicleType.CAR);
    }
}
/*
1)
Enum मध्ये:
VehicleType obj = VehicleType.CAR;

इथे:

VehicleType → enum type
obj → variable/reference
VehicleType.CAR → enum मधली fixed constant/value 

2)Enum is used when we have a fixed set of values/options.

3)Why use enum?

समजा Vehicle Type साठी आपण String वापरला:

String type = "CAR";

तर कोणी चुकून लिहू शकतो:

String type = "CARRR";

Java ला ते String असल्यामुळे चालू शकते. ❌

पण enum मध्ये:

VehicleType type = VehicleType.CAR;

फक्त:

BIKE
CAR
TRUCK

यापैकीच value घेता येते. ✅*/