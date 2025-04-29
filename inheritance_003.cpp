////access specifier (protected)   
//
//#include<iostream>
//using namespace std;
//
////base class
//class Employee{
//    //protected access specifier
//protected:
//    int salary;
//};
//
////derived class
//class programmer: public Employee{
//public:
//    int bonus;
//    
//    void setSalary(int x){
//        salary=x;
//    }
//    
//    int getSalary(){
//        return salary;
//    }
//};
//
//int main(){
//    programmer obj;
//    obj.setSalary(50000);
//    obj.bonus=1500;
//    cout<<"Salary : "<<obj.getSalary()<<endl;  //salary is a protected member of Employee class, so we can't direct access through obj.salary
//    cout<<"Bonus : "<<obj.bonus<<endl;
//    return 0;
//    
//}
