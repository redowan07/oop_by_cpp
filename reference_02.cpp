
//usefulness of passing an object by reference.
//Here is a version of a program that passes an object of myclass by value to a function called f()

#include<iostream>
using namespace std;

class myclass{
    int who;
public:
    myclass(int n){
        who=n;
        cout<<"constructing "<<who<<"\n";
    }
    
    ~myclass(){
        cout<<"Destructing"<<endl;
    }
    
    int id(){ return who;}
};

void f(myclass o){          //o is passed by value.
    cout<<"recieved "<<o.id()<<"\n";
}


int main(){
    
    myclass x(81);
    f(x);
    
    return 0;
}
