//#include<iostream>
//using namespace std;
//
//class Teacher{
//private:
//    double salary;
//public:
//    Teacher(){    //constructor(written as same as class name)
//        cout<<"Hi , I am constructor"<<endl;
//        dept="computer science & telecommunication engineering";  //as all of the teachers are of same department so i can fix it by initializing  "dept" in the constructor
//    }
//    string name;
//    string sub;
//    string dept;
//
//    void changeDept(string newDept){
//        dept=newDept;
//    }
//
//    void setSalary(double s){
//        salary=s;
//    }
//    double getSalary(){
//        return salary;
//    }
//};
//
//
//    int main(){
//        Teacher t1;  //construction call
//        Teacher t2;
//        Teacher t3;
//        Teacher t4;
//
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
//
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
//        
//        cout<<"teacher 4 is from --> "<<t4.dept<<endl;
//
//        return 0;
//
//    }
//
//
