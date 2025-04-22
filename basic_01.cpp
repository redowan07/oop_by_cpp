#include<iostream>
using namespace std;
class Car{
public:
    string name;
    int price;
    int seats;
    string type;
    
};
void print(Car c){
    cout<<"name: "<<c.name<<" || "<<"price: "<<c.price<<" || "<<"seats: "<<c.seats<<" || "<<"type: "<<c.type<<endl;
}


int main(){
    Car c1;
    c1.name="toyota";
    c1.price=900000;
    c1.seats=5;
    c1.type="private car";
    
    Car c2;
    c2.name="Mercedes";
    c2.price=90000000;
    c2.seats=5;
    c2.type="Jeep";
    
    Car c3;
    c3.name="Range Rover";
    c3.price=15000000;
    c3.seats=7;
    c3.type="SUV";
    
    print(c1);
    print(c2);
    print(c3);
}
