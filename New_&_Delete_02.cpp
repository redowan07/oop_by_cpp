

#include<iostream>
using namespace std;

int main(){
    int *p;
    p=new int(9); //give initial value of 9
    
    if(!p){
        cout<<"Allocation error\n";
        return 1;
    }
    cout<<"here is integer at p: "<<*p<<endl;
    
    delete p;  //release the memory
    return 0;
}
