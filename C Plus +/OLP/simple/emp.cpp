#include<iostream>
#include<cstring>
#include "emp.h"
using namespace std;

void emplyoee::setdata(char *n, int a){
    strcpy(name,n);
    age=a;
}
void emplyoee :: getdata(){
    cout<<"name is:"<<name<<endl;
    cout<<"age is:"<<age<<endl;
    cout<<"welcome:: "<<name<<endl;
    cout<<"hi everyone:";

}