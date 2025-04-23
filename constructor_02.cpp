
#include<iostream>
using namespace std;
class Car{
public:
    string name;
    int price;
    int seats;
    string type;

    Car(string t,int s,string n,int p){
        type=t;
        name=n;
        price=p;
        seats=s;
    };
};
void print(Car c){
    cout<<"name: "<<c.name<<" || "<<"price: "<<c.price<<" || "<<"seats: "<<c.seats<<" || "<<"type: "<<c.type<<endl;
}
void change_val(Car c){
    c.name ="changed by value";
    cout<<endl;
    print(c);
    cout<<endl;
}
void change_ref(Car& c){
    c.name="changed by reference";
    print(c);
    cout<<endl;
}


int main(){
    Car c1("private car",5,"toyota",900000);
//    c1.name="toyota";
//    c1.price=900000;
//    c1.seats=5;
//    c1.type="private car";

    Car c2("Jeep",5,"Mercedes",70000000);
//    c2.name="Mercedes";
//    c2.price=70000000;
//    c2.seats=5;
//    c2.type="Jeep";

    Car c3("SUV",7,"Range Rover",15000000);
//    c3.name="Range Rover";
//    c3.price=15000000;
//    c3.seats=7;
//    c3.type="SUV";
    print(c1);
    print(c2);
    print(c3);
    
    change_val(c1);
    
    change_ref(c2);

    print(c1);
    print(c2);
    print(c3);
}
