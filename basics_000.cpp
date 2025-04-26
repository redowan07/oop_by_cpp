//#include<iostream>
//using namespace std;
//
//class teacher{
//    
//private:
//    double salary;   //not accessible by everyone , could access through public
//    
//    public:  //accessible by everyone
//    
//    //properties / attributes
//    string name;
//    string dept;
//    string sub;
//    
//    //methods / member functions
//    void changeDept(string newDept){
//        dept=newDept;
//    }
//    //setter
//    void setSalary(double s){
//        salary=s;
//    }
//    
//    //getter
//    double getSalary(){
//        return salary;
//    }
//};
//
//int main(){
//        teacher t1;
//        t1.name="professor kamal uddin";
//        t1.dept="computer science and telecommunication engineering";
//        t1.sub="object oriented programming";
//        t1.setSalary(105000);   //sets the salary to set function by which we can access salary by get function
//        
//        cout<<t1.name<<endl;
//        cout<<t1.dept<<endl;
//        cout<<"course: "<<t1.sub<<endl;
//        cout<<"salary : "<<t1.getSalary()<<endl;  //as we set salary through set function,  we could now access through get function which
//        
//        return 0;
//    }
