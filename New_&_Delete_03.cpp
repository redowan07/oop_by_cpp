//
////this program allocate an array of integers
//
//#include<iostream>
//using namespace std;
//
//int main(){
//    
//    int *p;
//    p=new int[5];  //allocate room for 5 integers
//    if(!p){
//        cout<<"Allocation error!"<<endl;
//        return 1;
//    }
//    int i;
//    for(i=0;i<5;i++){
//        p[i]=i+5;
//    }
//    for (i=0;i<5;i++){
//        cout<<"here is an integer at p["<<i<<"]"<<endl;
//        cout<<p[i]<<endl;
//    }
//    delete [] p;
//    return 0;
//}
