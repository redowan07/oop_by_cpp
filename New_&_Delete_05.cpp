////gives a samp destructor , and now when p is freed , each elements destructor is called
//
//#include<iostream>
//using namespace std;
//
//class samp{
//    int i,j;
//public:
//    void set_ij(int a,int b){
//        i=a;
//        j=b;
//    }
//   
//  
//    int get_product(){
//        return i*j;
//    }
//    ~samp(){
//        cout<<"destroying...\n";
//    }
//};
//
//
//int main(){
//    samp *p;
//    
//    int i;
//    p=new samp[10];
//    if(!p){
//        cout<<"Allocation error!"<<endl;
//        return 1;
//    }
//    
//    for(i=0;i<10;i++) p[i].set_ij(i,i);
//    
//    for(i=0;i<10;i++){
//        cout<< "product [" << i << "] is : ";
//        cout<< p[i].get_product()<<"\n";
//    }
//    
//   delete [] p;
//    
//   cout<<"\n"<<"product[5] = "<<p[5].get_product()<<endl;
//    
//    return 0;
//}
