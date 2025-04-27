////constructor overloading
////constructor of same name have different number of parameters
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
//    Teacher(string n,string su,int ch,double x){
//        cout<<"this is member function 1 of Teacher"<<endl;
//         dept="computer science & telecommunication engineering";
//        salary=x;
//        name=n;
//        sub=su;
//        child=ch;
//    }
//   
//    Teacher(int w,string na,double s){
//        cout<<"this is member function 2 of Teacher"<<endl<<endl;
//        salary=s;
//        wife=w;
//        name=na;
//        dept="computer science";
//    }
//
////    void setSalary(double s){
////        salary=s;
////    }
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
//        Teacher t1("professor kamal uddin","object oriented programming",5,102000);//goes to first Teacher constructor
//        Teacher t2("professor Humayon kabir","computer networking",8,187000);   //goes to first Teacher constructor
//        Teacher t3(3,"Mahmudul hasan",98000);   //this goes to the second Teacher constructor
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
