//here i have checked whether its passing by value or reference

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
//lets find if its passing by reference or value
void change(Car c){    //i have checked it's only passes the value
    c.name="changed by values";
    cout<<"name: "<<c.name<<" || "<<"price: "<<c.price<<" || "<<"seats: "<<c.seats<<" || "<<"type: "<<c.type<<endl;
    cout<<endl;
}

void changeReference(Car& c){  //i have checked & its passes by reference
    c.name="Changed by Reference";
    cout<<"name: "<<c.name<<" || "<<"price: "<<c.price<<" || "<<"seats: "<<c.seats<<" || "<<"type: "<<c.type<<endl;
    cout<<endl;
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
    
    change(c1);
    
    changeReference(c2);
    
    print(c1);
    print(c2);
    print(c3);
}
