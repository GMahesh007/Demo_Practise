//search for array elements
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5], searchValue, index = -1;
//     cout << "Enter 5 elements of the array: ";

//     for (int i = 0; i < 5; i++) {
//         cin >> arr[i];
//     }

//     cout << "Enter the value to search: ";
//     cin >> searchValue;

//     for (int i = 0; i < 5; i++) {
//         if (arr[i] == searchValue) {
//             index = i;
//             break;
//         }
//     }

//     if (index != -1) {
//         cout << "Value found at " << index << endl;
//     } else {
//         cout << "Value not found" << endl;
//     }
//     return 0;
// }


//sort of array
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[3][3], i, j, temp;

//     cout << "Enter the elements of the matrix: " << endl;
//     for (i = 0; i < 3; i++) {
//         for (j = 0; j < 3; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     for (i = 0; i < 3; i++) {
//         for (int k = 0; k < 2; k++) { 
//             for (j = 0; j < 2; j++) { 
//                 if (arr[i][j] > arr[i][j + 1])
//                  {
//                     temp = arr[i][j];
//                     arr[i][j] = arr[i][j + 1];
//                     arr[i][j + 1] = temp;
//                 }
//             }
//         }
//     }

//     cout << "Array elements (sorted rows) are: " << endl;
//     for (i = 0; i < 3; i++) {
//         for (j = 0; j < 3; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }



//reverse array 2d array
// #include <iostream>

// using namespace std;

// int main() {
//     int arr[3][3], i, j;

//     cout << "Enter the elements of the matrix: " << endl;
//     for (i = 0; i < 3; i++) {
//         for (j = 0; j < 3; j++) {
//             cin >> arr[i][j];
//         }
//     }
 
//     cout << "Array elements (reversed) are: " << endl;
//     for (i = 2; i >= 0; i--) {
//         for (j = 2; j >= 0; j--) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// //reverse array
// #include <iostream>

// using namespace std;

// int main() {
//     int arr[5], i, j, temp;

//     cout << "Enter the elements of the array: " << endl;
//     for (i = 0; i < 5; i++) {
//         cin >> arr[i];
//     }
//     for (i = 0, j = 4; i < j; i++, j--) {
//         temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//     }

//     cout << "Array elements (reversed) are: " << endl;
//     for (i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// //method to display the some information
// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Hello World!" << endl;
//     cout << "My name is " << "John Doe" << endl;
//     cout << "I am " << 25 << " years old" << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int num1, num2, sum;

//     cout << "Enter the first number: ";
//     cin >> num1;

//     cout << "Enter the second number: ";
//     cin >> num2;

//     sum = num1 + num2;

//     cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;

//     return 0;
// }


// // //parameter passing to the function
// #include <iostream>
// using namespace std;

// void swapNumbers(int &x, int &y) {
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;
// }

// int main() {
//     int num1 = 5;
//     int num2 = 10;
//     cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
//     swapNumbers(num1, num2);
//     cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
//     return 0;
// }


// // #include <iostream>
// // void add();
// // int main(){
// //     add();
// // }
// // void add(){
// //     int num1, num2;
// //     cin>>num1>>num2
// //     cout<<"num1 = "<<num1
// //     cout<<"num2 = "<<num2
// //     cout<<"the sum of the numbers is "<<(num1+num2)<<endl;
// // }


// #include<iostream>
// using namespace std;
// class student{
//     public:
//     int rool;
//     string name[15];
//     private:
//     int phno;
//     public:
//     void display(){
//         cout<<"roll no:"<<rool<<endl;
//         cout<<"name:"<<name<<endl;
//         cout<<"phno"<<phno<<endl;
//     };
// };
//     int main(){
// student stu;
// stu.rool=77;
// stu.name="Ashu";
// stu.phno =1234567890;
//     };

// #include<iostream>
// using namespace std;
// class student{
//     public:
//     int rool;
//     string name[15];
//     private:
//     int phno;
//     public:
//     void display(){
//         cout<<"roll no:"<<rool<<endl;
//         cout<<"name:"<<name<<endl;
//         cout<<"phno"<<phno<<endl;
//     };
// };
//     int main(){
// student stu;
// stu.rool=77;
// stu.name="Ashu";
// stu.phno =1234567890;
//     };


// //constructor
// #include<iostream>
// using namespace std;
// class student{
//     public:
//     int rool;
//     string name;
//     private:
//     int phno;
//     public:
//     student(){
//         cout<<"constructor called"<<endl;
//     }
//     void display(){
//         cout<<"roll no:"<<rool<<endl;
//         cout<<"name:"<<name<<endl;
//         cout<<"phno"<<phno<<endl;
//     }
// };
//     int main(){
//     student stu;
//     stu.rool=77;
//     stu.name="Ashu";
//     stu.phno =1234567890;
//     stu.display();
//     return 0;
//     }

//constructor overloading function
// #include<iostream>
// using namespace std;
// class student{
//     public:
//     int roll;
//     string name;
//     private:
//     int phno;
//     public:
//     student(string name){
//         this->name=name;
//     }
//     student(int r,string n,int p){
//         roll=r;
//         name=n;
//         phno=p;
//     }
//     void display(){
//         cout<<"roll no:"<<roll<<endl;
//         cout<<"name:"<<name<<endl;
//         cout<<"phno:"<<phno<<endl;
//     }
// };
//     int main(){
//     student stu1("Bshu");
//     student stu2(77,"Ashu",1234567890);
//     stu1.display();
//     stu2.display();
//     return 0;
//     }


    // //inheritance
    // #include<iostream>
    // using namespace std;
    // class A
    // {
    //     public:
    //     int i;
    //     void display(){
    //         cout<<"i="<<i<<endl;
    //     }
    //     virtual void show(){
    //         cout<<"show of Base A"<<endl;
    //     }
    // };
    // class B:public A
    // {
    //     public:
    //     int j;
    //     void display(){
    //         cout<<"i="<<i<<endl;
    //         cout<<"j="<<j<<endl;
    //     }
    //     void show(){
    //         cout<<"show of Derived B"<<endl;
    //     }
    // };
    // int main(){
    //     // B b;
    //     // b.i=10;
    //     // b.j=20;
    //     // b.display();
    //     // b.A::display();
    //     // b.show();
    //     // b.A::show();
    //     // return 0;
    //     A *a;
    //     a = new A;
    //     a->display();
    //     a->show();
    //     a = new B;
    //     a->display();
    //     a->A::display();
    //     return 0;
    
    // };

    // //multi level inhertance
    // #include<iostream>
    // using namespace std;
    // class A
    // {
    //     public:
    //     int i;
    //     void display(){
    //         cout<<"i="<<i<<endl;
    //     }
    // };
    // class B:public A
    // {
    //     public:
    //     int j;
    //     void display(){
    //         cout<<"i="<<i<<endl;
    //         cout<<"j="<<j<<endl;
    //     }
    // };
    // class C:public B
    // {
    //     public:
    //     int k;
    //     void display(){
    //         cout<<"i="<<i<<endl;
    //         cout<<"j="<<j<<endl;
    //         cout<<"k="<<k<<endl;
    //     }
    // };
    // int main(){
    //     C c;
    //     c.i=10;
    //     c.j=20;
    //     c.k=30;
    //     c.display();
    //     c.B::display();
    //     c.A::display();
    //     return 0;
    // }

    //hybrid inheritance
    // #include<iostream>
    // using namespace std;
    // class A
    // {
    //     public:
    //     int i;
    //     void display(){
    //         cout<<"i="<<i<<endl;
    //     }
    // };
    // class B:public virtual A
    // {
    //     public:
    //     int j;
    //     void display(){
    //         cout<<"j="<<j<<endl;
    //     }
    // };
    // class C:public virtual A
    // {
    //     public:
    //     int k;
    //     void display(){  
    //         cout<<"k="<<k<<endl;
    //     }
    // };
    // class D:public B,public C
    // {
    //     public:
    //     int l;
    //     void display(){
    //         cout<<"l="<<l<<endl;
    //         B::display();
    //         C::display();
    //         A::display();
    //     }
    // };
    // int main(){
    //     D d;
    //     d.i=10;
    //     d.j=20;
    //     d.k=30;
    //     d.l=40;
    //     d.display();
    //     return 0;
    // }

    //multiple inheritance
    // #include<iostream>
    // using namespace std;
    // class A
    // {
    //     public:
    //     int i;
    //     void display(){
    //         cout<<"i="<<i<<endl;
    //         cout<<"first Base class"<<endl;
    //     }
    // };
    // class B
    // {
    //     public:
    //     int j;
    //     void display(){
    //         cout<<"j="<<j<<endl;
    //         cout<<"second Base class"<<endl;
    //     }
    // };
    // class C:public A,virtual public B
    // {
    //     public:
    //     int k;
    //     void display(){
    //         cout<<"k="<<k<<endl;
    //         A::display();
    //         B::display();
    //     }
    // };
    // int main(){
    //     C c;
    //     c.i=10;
    //     c.j=20;
    //     c.k=30;
    //     c.display();
    //     return 0;
    // }

    // /*1)A software company wants to maintain employee records using object-oriented programming in C++. The company has a general category of employees and a special category of managers who receive an additional allowance. To implement this, you need to create a base class Employee that contains the attributes name (a string) and empID (an integer). This class should have a constructor to Initialize these attributes and a display () function to print employee details. Then, create a derived class Manager that inherits from Employee and introduces an additional attribute, allowance (a float), with a constructor to initialize all attributes. The display () function should be overridden in Manager to print the employee's details along with the allowance. In the main () function, create an object of the Manager class, Initialize it with appropriate values, and call the display() function to print the details. For an extended challenge, modify the program to include a salary field in Employee and adjust the display() function in Manager to show the total salary, including the allowance.*/
    // #include<iostream>
    // using namespace std;
    // class Employee
    // {
    //     public:
    //     string name;
    //     int empID;
    //     float salary;
    //     Employee(string n,int id,float sal){
    //         name=n;
    //         empID=id;
    //         salary=sal;
    //     }
    //     void display(){
    //         cout<<"Name: "<<name<<endl;
    //         cout<<"Employee ID: "<<empID<<endl;
    //         cout<<"Salary: "<<salary<<endl;
    //     }
    // };
    // class Manager:public Employee
    // {
    //     public:
    //     float allowance;
    //     Manager(string n,int id,float sal,float al):Employee(n,id,sal){
    //         allowance=al;
    //     }
    //     void display(){
    //         Employee::display();
    //         cout<<"Allowance: "<<allowance<<endl;
    //         cout<<"Total Salary: "<<salary+allowance<<endl;
    //     }
    // };
    // int main(){
    //     Manager m("Billa",236,5000,1000);
    //     m.display();
    //     return 0;
    // };


    /* Teacher to include additional attributes related to research. To Implement this, create a base class Person with attributes name (a string) and age (an integer), along with a constructor to initialize these attributes and a display() function to print personal details. Next, create a derived class Teacher that inherits from Person and adds an attribute subject ja string) to represent the suljest they teach. This class should also uverride the display() function to print both personal details and subject information. Finally, create another destved class Professor, which inherits from Teacher, and adds an attribute mearch Areaja string) to store the professor's research spesialization. The display() function in Professar should be overridden to print all details, including the revearth area, in the main() function, create an object of the Professor class, initialias it with appropriate values, and call the display function to print all detalls. As an additional challenge, extend the program to include a salary attribute in the Teacher class and modify the Professor class to adjust the salary based on research experience.
*/

// #include<iostream>
// using namespace std;
// class Person
// {
//     public:
//     string name;
//     int age;
//     Person(string n,int a){
//         name=n;
//         age=a;
//     }
//     void display(){
//         cout<<"Name: "<<name<<endl;
//         cout<<"Age: "<<age<<endl;
//     }
// };
// class Teacher:public Person
// {
//     public:
//     string subject;
//     int salary;
//     Teacher(string n,int a,string s,int sal):Person(n,a){
//         subject=s;
//         salary=sal;
//     }
//     void display(){
//         Person::display();
//         cout<<"Subject: "<<subject<<endl;
//         cout<<"Salary: "<<salary<<endl;
//     }
// };
// class Professor:public Teacher
// {
//     public:
//     string researchArea;
//     int salary;
//     Professor(string n,int a,string s,int sal,string ra):Teacher(n,a,s,sal){
//         researchArea=ra;
//         salary=sal+(sal*0.1);
//     }
//     void display(){
//         Teacher::display();
//         cout<<"Research Area: "<<researchArea<<endl;
//         cout<<"Salary: "<<salary<<endl;
//     }
// };

// int main(){
//     Professor p("Billa",45,"Maths",50000,"Algebra");
//     p.display();
//     return 0;
// };

/*3) A car manufacturing company wants to manage different types of vehicles using an object-oriented approach in C++. The company has a general category of vehicles, which includes both cars and bikes as subcategories. To implement this, create a base class Vehicle that contains common attributes such as brand (a string) and model (a string), along with a constructor to initialize these attributes and a display() function to print the vehicle details. Then, create two derived classes, Car and Bike, both inheriting from Vehicle. The Car class should introduce an additional attribute numDoors (an integer) to store the number of doors, while the Bike class should include an attribute engineCapacity (a float) to represent the engine displacement in CC. Each derived class should override the display() function to print all relevant details, in the main () function, create objects of both Car and Bike, initialize them with appropriate values, and call their respective display() functions to show the details. As an extension, modify the program to include a fuel Type attribute in Vehicle and update both Car and Bike classes to display the fuel type along with other details.*/

// #include<iostream>
// using namespace std;
// class Vehicle{
//     public:
//     string brand;
//     string model;
//     string fuelType;
//     Vehicle(string b,string m,string ft){
//         brand=b;
//         model=m;
//         fuelType=ft;
//     }
//     void display(){
//         cout<<"Brand: "<<brand<<endl;
//         cout<<"Model: "<<model<<endl;
//         cout<<"Fuel Type: "<<fuelType<<endl;
//     }

// };
// class Car:public Vehicle{
//     public:
//     int numDoors;
//     Car(string b,string m,string ft,int nd):Vehicle(b,m,ft){
//         numDoors=nd;
//     }
//     void display(){
//         Vehicle::display();
//         cout<<"Number of Doors: "<<numDoors<<endl;
//     }
// };
// class Bike:public Vehicle{
//     public:
//     float engineCapacity;
//     Bike(string b,string m,string ft,float ec):Vehicle(b,m,ft){
//         engineCapacity=ec;
//     }
//     void display(){
//         Vehicle::display();
//         cout<<"Engine Capacity: "<<engineCapacity<<endl;
//     }
// };
// int main(){
//     Car c("Maruti","Swift","Petrol",4);
//     Bike b("Honda","Activa","Petrol",110);
//     c.display();
//     b.display();
//     return 0;
// };


/*C++ problem statement set 1      Employee Management System
You are developing an Employee Management System for a company. The company has two types of employees: Full-Time Employees and Part-Time Employees.
Requirements:
•  Create a base class Employee with the following members:
o  name, employeeID
o  A constructor to initialize these values.
o  A displayDetails() function to show the basic details.
•  Create two derived classes:
1.  FullTimeEmployee
Additional member: salary
Constructor to initialize salary
Override displayDetails() to include salary
2.  PartTimeEmployee
Additional members: hourlyRate, hoursWorked
Constructor to initialize hourlyRate and hoursWorked
Override displayDetails() to include total pay (hourlyRate * hoursWorked)*/

#include<iostream>
using namespace std;
class Employee{
    public:
    string name;
    int employeeID;
    Employee(string n,int id){
        name=n;
        employeeID=id;
    }
    void displayDetails(){
        cout<<"Name: "<<name<<endl;
        cout<<"Employee ID: "<<employeeID<<endl;
    }
};
class FullTimeEmployee:public Employee{
    public:
    float salary;
    FullTimeEmployee(string n,int id,float s):Employee(n,id){
        salary=s;
    }
    void displayDetails(){
        Employee::displayDetails();
        cout<<"Salary: "<<salary<<endl;
    }
    float getTotalPay(){
        return salary;
    }
};
class PartTimeEmployee:public Employee{
    public:
    float hourlyRate;
    float hoursWorked;
    PartTimeEmployee(string n,int id,float hr,float hw):Employee(n,id){
        hourlyRate=hr;
        hoursWorked=hw;
    }
    void displayDetails(){
        Employee::displayDetails();
        cout<<"Hourly Rate: "<<hourlyRate<<endl;
        cout<<"Hours Worked: "<<hoursWorked<<endl;
        cout<<"Total Pay: "<<hourlyRate*hoursWorked<<endl;
    
    }
    float getTotalPay(){
        return hourlyRate*hoursWorked;
    }
};
int main(){
    FullTimeEmployee fte("Billi",1234,50000);
    PartTimeEmployee pte("Billu",5678,20,40);
    fte.displayDetails();
    pte.displayDetails();
    return 0;
};

/*set -2 Vehicle Hierarchy
You are designing a Vehicle Information System that stores details of different types of vehicles.
Requirements:
•  Create a base class Vehicle with:
o  brand, model, year
o  Constructor and a displayInfo() function
•  Create two derived classes:
1.  Car
Additional member: fuelType
Override displayInfo() to include fuelType
2.  Bike
Additional member: engineCC
Override displayInfo() to include engineCC*/


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