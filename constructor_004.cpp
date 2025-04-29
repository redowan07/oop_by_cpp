// custom copy constructor ---------------------have problem??(why all of them uses custom constructor&&&&&&&?????????----------------


#include<iostream>
using namespace std;

class Teacher{
private:
    double salary;
public:
    string name;
    string sub;
    int child;
    int wife;
    string dept;

    Teacher(string name,string sub,int child,double salary){
        cout<<"constructor 1 of Teacher"<<endl;
        this->dept="computer science & telecommunication engineering";

    this->salary=salary;
        this->name=name;
    this-> sub=sub;
        this->child=child;

    }

    Teacher(int wife,string name,double salary){
    cout<<"constructor 2 of Teacher"<<endl<<endl;

        this-> salary=salary;
      this->  wife=wife;
        this->name=name;

        dept="computer science";
    }
    
    
    //custom copy constructor
    Teacher(Teacher &obj){
        cout<<"this is custom copy constructor"<<endl;
        this->name=obj.name;
        this->dept=obj.dept;
        this->wife=obj.wife;
        this->salary=obj.salary;
        this->child=obj.child;
        this->sub=obj.sub;
    }


    double getSalary(){
        return salary;
    }
};


void print(Teacher x){
    cout<<111111111111<<endl;
    cout<<x.name<<endl;
    cout<<x.dept<<endl;
    cout<<"course : "<<x.sub<<endl;
    cout<<"wife : "<<x.wife<<endl;
    cout<<"child : "<<x.child<<endl;
    cout<<"salary : "<<x.getSalary()<<endl<<endl;

}

    int main(){
        Teacher t1("professor kamal uddin","object oriented programming",5,102000);
        Teacher t2("professor Humayon kabir","computer networking",8,187000);
        Teacher t3(3,"Mahmudul hasan",98000);
        
        for(int i=0;i<30;i++) cout<<"...";
        cout<<endl;

        print(t1);
        print(t2);
        print(t3);
        
        Teacher t4(t1);  //custom copy construcor used
        Teacher t5(t2); //custom copy constructor used
        
        cout<<"given below are from default copy constructor: "<<endl<<endl;
        print(t4);  //prints the value of custom copied constructor
        print(t5);  //prints the value of custom copied constructor

        return 0;

    }




