////multi-level inheritance
//
//#include<iostream>
//using namespace std;
//
////base class(parent)
//class MyClass{
//public:
//    void function(){
//        cout<<"some content in parent class"<<endl<<endl;
//    }
//};
//
//
////derived class(child)
//class Mychild:public MyClass{
//    
//};
//
////derived class(grandchild)
//class Grandchild : public MyClass{
//    
//};
//
//int main(){
//    Grandchild obj;
//    obj.function();   //here we called the object of Grandchild but we can access MyClass attributes due to multi-level inheritance
//    return 0;
//}
