////example of this pointer
//
//#include<iostream>
//#include<cstring>
//using namespace std;
//
//class inventory{
//    char item[20];
//    double cost;
//    int on_hand;
//    
//public:
//    inventory(char*i,double c,int o){  //here it points to p
//        strcpy(this->item,i);  //access members
//       this->cost=c;    //through the this
//        this->on_hand=o; //pointer
//    }
//    void show();
//};
//
//
//void inventory::show(){
//    cout<<this->item;
//    cout<<": $"<<this->cost;
//    cout<<" on hand: "<<this->on_hand<<"\n";
//}
//
//int main(){
//    inventory ob("wrench",4.95,4);
//    ob.show();
//    return 0;
//}
