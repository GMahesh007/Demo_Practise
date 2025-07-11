#include<iostream>
using namespace std;
class labor{
    public:
    string name;
    int id;
    int hours;
    int wage;
    void getdata(){
        cout<<"Enter the name of the employee: ";
        cin>>name;
        cout<<"Enter the employee id: ";
        cin>>id;
        cout<<"Enter the number of hours worked: ";
        cin>>hours;
        cout<<endl;
        }
    void calculate(){
        if(hours<=8){
            wage = hours*50;
            }
        else if(hours>8 && hours<=12){
            wage = 8*50 + (hours-8)*10;
            }
        else if(hours>12 && hours<=16){
            wage = 8*50 + 4*10 + (hours-12)*20;
            }
        else if(hours>16 && hours<=20){
            wage = 8*50 + 4*10 + 4*20 + (hours-16)*25;
            }
        else{
            wage = 8*50 + 4*10 + 4*20 + 4*25 + (hours-20)*40;
            }
        }
    void display(){
        cout<<"Employee Details: "<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Employee ID: "<<id<<endl;
        cout<<"Number of hours worked: "<<hours<<endl;
        cout<<"Total wage: "<<wage<<endl;
        }
    };
    int main(){
        labor l;
        l.getdata();
        l.calculate();
        l.display();
        return 0;
        }