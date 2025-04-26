
#include<iostream>
using namespace std;

class Teacher{
private:
    double salary;
public:
//    Teacher(){    //non-parameterized constructor
//        cout<<"Hi , I am constructor"<<endl;
//        dept="computer science & telecommunication engineering";
//    }
    
    Teacher(string n,string s,double sal){   //parameterized constructor
        name=n;
        sub=s;
        salary=sal;
        dept="computer science and telecommunication engineering";
    }
    string name;
    string sub;
    string dept;

    void changeDept(string newDept){ dept=newDept; }

    void setSalary(double s){ salary=s; }
    
    double getSalary(){ return salary; }
    
};
void print(Teacher x){
    cout<<x.name<<endl;
    cout<<x.dept<<endl;
    cout<<"course : "<<x.sub<<endl;
    cout<<"salary : "<<x.getSalary()<<endl<<endl;
}

    int main(){
        Teacher t1("professor kamal uddin","object oriented programming",105000);  //parameterized construction call
        Teacher t2("professor dr. humayon kabir","computer networking",187000);  //as i am giving values through parameters ,so i dont need to put input like i did previously
        
        Teacher t3("professor javed hossain","digital logic design",132000);
        
        
//        t1.name="professor kamal uddin";
//      //  t1.dept="computer science and telecommunication engineering";
//        t1.sub="object oriented programming";
//        t1.setSalary(105000);
//
//        t2.name="professor Dr. Humayon kabir";
//        //t2.dept="computer science and telecommunication engineering";
//        t2.sub="computer networking";
//        t2.setSalary(187000);
//
//        t3.name="Professor Javed Hossain";
//        //t3.dept="computer science and telecommunication engineering";
//        t3.sub="Digital Logic Design";
//        t3.setSalary(132000);

//        cout<<t1.name<<endl;
//        cout<<t1.dept<<endl;
//        cout<<"course : "<<t1.sub<<endl;
//        cout<<"salary : "<<t1.getSalary()<<endl<<endl;
//
//        cout<<t2.name<<endl;
//        cout<<t2.dept<<endl;
//        cout<<"course : "<<t2.sub<<endl;
//        cout<<"salary : "<<t2.getSalary()<<endl<<endl;
//
//        cout<<t3.name<<endl;
//        cout<<t3.dept<<endl;
//        cout<<"course : "<<t3.sub<<endl;
//        cout<<"salary : "<<t3.getSalary()<<endl<<endl;

        
        print(t1);
        print(t2);
        print(t3);

        return 0;

    }



