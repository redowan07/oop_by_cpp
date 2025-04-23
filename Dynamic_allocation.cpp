////the following program passes initial values to a dynamically allocated object
//
//#include<iostream>
//using namespace std;
//
//class samp{
//    int i,j;
//public:
//    samp(int a,int b){
//        i=a;
//        j=b;
//    }
//    int get_product(){
//        return i*j;
//    }
//};
//
//
//int main(){
//    samp *p;
//    p=new samp(6,5);    //allocates object with initialization
//
//    if(!p){
//        cout<<"Allocation error\n";
//        return 1;
//    }
//    cout<<"product is "<<p->get_product()<<"\n";
//    delete p;
//    return 0;
//
//}
//
//
