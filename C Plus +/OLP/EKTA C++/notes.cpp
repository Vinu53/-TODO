#include<iostream>
#include<cmath>
using namespace std;
class base{
public:
    void fun(){
    cout<<"in base:"<<endl;
    }
    void f(){
    cout<<"fg";}
    void fun(int i){
    cout<<"in baase intt:"<<endl;
    }
};                              // if you are using any function name from derived class it will hide alll the functions with same name
                        // from base class this is called function hiding
class derived:public base{
public:
    void fun(char c){
    cout<<"in derived:"<<endl;
    }
};
int main(){
derived d;
d.fun(9);                   // in derived
d.base::fun('r');            // in basse intt
d.base::fun();
d.f();             // in base
}

#include <iostream>
#include <cstring>
using namespace std;               // to print the charater , noof times in its index
int main()
{
    string str="ahAjdB";
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z'){
            string x(i,str[i]);
            cout<<x<<endl;
        }
        else
            cout<<str[i]<<endl;
    }
}






