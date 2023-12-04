#include<iostream>
using namespace std;
int main(){
auto x=10;

cout<<typeid(x).name()<<endl;       // i
auto *z =new int ;                  
cout<<typeid(z).name()<<endl;        // pi
cout<<sizeof(x);                     //4 

}

by default all member functions inside class are inline functions
