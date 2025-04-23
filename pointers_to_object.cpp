////using pointers to objects
//
//#include<iostream>
//using namespace std;
//
//class samp{
//    int a,b;
//public:
//    samp(int n,int m){
//        a=n;
//        b=m;
//    }
//    int get_a(){
//        return a;
//    }
//    int get_b(){
//        return b;
//    }
//};
//
//
//int main(){
//    samp ob[4]={ samp(1,2),samp(3,4),samp(5,6),samp(7,8)};
//    
//    int i;
//    samp *p;    //declaring a pointer p that can point to objects of type samp
//    p=ob;       //get starting address of array ,here p gets the 0th address of ob(ob[0]
//    
//    for(i=0;i<4;i++){
//    cout<<p->get_a()<<' ';    //arrow operator(->), used to access members of an object when using a pointer
//       
//        cout<<p->get_b()<<"\n";
//        p++;        //advance to next project
//    }
//    cout<<"\n";
//    
//    return 0;
//}
