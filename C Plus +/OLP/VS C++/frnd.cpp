#include<iostream>         // through frnd funtion we can access the parent classes 
using namespace std;
class A{
public:
    int x=100;
};
class B: public A{
int y;
public:
    B (int y): y(y) {}
    friend void fn(B &); 
};
void fn(B & r){
cout<<r.y<<endl;
cout<<r.x;
}
int main(){
B b(10);
fn(b);
}
