//
////this pointer refers the variable of object , and on the other side's variable is for function
//
//
//#include<iostream>
//using namespace std;
//
//class Teacher{
//private:
//    double salary;
//public:
//    string name;
//    string sub;
//    int child;
//    int wife;
//    string dept;
//
//    Teacher(string name,string sub,int child,double salary){
//        cout<<"this is member function 1 of Teacher"<<endl;
//         dept="computer science & telecommunication engineering";
//        
//    this-> salary=salary;     //this-> salary refers to the objects salary , the other one refers to function parameter
//       this-> name=name;
//    this-> sub=sub; //this -> sub refers to the objects sub , other one is for function parameter
//       this-> child=child;
//        
//    }
//
//    Teacher(int wife,string name,double salary){
//    cout<<"this is member function 2 of Teacher"<<endl<<endl;
//        
//        this-> salary=salary;
//      this->  wife=wife;
//        this->  name=name;
//        
//        dept="computer science";
//    }
//
//
//    double getSalary(){
//        return salary;
//    }
//};
//
//
//void print(Teacher x){
//    cout<<x.name<<endl;
//    cout<<x.dept<<endl;
//    cout<<"course : "<<x.sub<<endl;
//    cout<<"wife : "<<x.wife<<endl;
//    cout<<"child : "<<x.child<<endl;
//    cout<<"salary : "<<x.getSalary()<<endl<<endl;
//
//}
//
//    int main(){
//        Teacher t1("professor kamal uddin","object oriented programming",5,102000);
//        Teacher t2("professor Humayon kabir","computer networking",8,187000);
//        Teacher t3(3,"Mahmudul hasan",98000);
//
//        print(t1);
//        print(t2);
//        print(t3);
//
//        return 0;
//
//    }
//
//
//
