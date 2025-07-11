#include<iostream>
using namespace std;
class Vehicle{
    public:
    string brand;
    string model;
    int year;
    Vehicle(string b,string m,int y){
        brand=b;
        model=m;
        year=y;
    }
    void displayInfo(){
        cout<<"Brand: "<<brand<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Year: "<<year<<endl;
    }
    virtual void displayVehicleType(){
        cout<<"Vehicle Type: Base Vehicle"<<endl;
    }
};
class Car:public Vehicle{
    public:
    string fuelType;
    Car(string b,string m,int y,string ft):Vehicle(b,m,y){
        fuelType=ft;
    }
    void displayInfo(){
        Vehicle::displayInfo();
        cout<<"Fuel Type: "<<fuelType<<endl;
    }
    void displayVehicleType(){
        cout<<"Vehicle Type: Car"<<endl;
    }
    void displayBrand(){
        cout<<"Brand: "<<brand<<endl;
    }
};
class Bike:public Vehicle{
    public:
    int engineCC;
    Bike(string b,string m,int y,int cc):Vehicle(b,m,y){
        engineCC=cc;
    }
    void displayInfo(){
        Vehicle::displayInfo();
        cout<<"Engine CC: "<<engineCC<<endl;
    }
    void displayVehicleType(){
        cout<<"Vehicle Type: Bike"<<endl;
    }
};
int main(){
    Car c("Maruti","Swift",2018,"Petrol");
    Bike b("Honda","Activa",2019,125);
    c.displayInfo();
    b.displayInfo();
    return 0;
};