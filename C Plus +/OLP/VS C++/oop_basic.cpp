/*#include<iostream>
using namespace std;
class book{
    public:
        string name;
        int pages;
        string author;
};
int main(){
    book b1;
    b1.name="cplus plus";
    b1.pages=29;
    b1.author="hc verma";
    cout<<b1.pages;
} 
// 2) practice showing use of private and public
#include<iostream>
#include<string>
using namespace std;
class person{
   
    private:
        string name;
     public:
        person (){
            cout<<"this will print automatically";
        }
        void setname(string x){
            name=x;
        }
        string getname(){
            return name;
        }

};
int main(){

person p;
p.setname("ec");
cout<<p.getname();
return 0;

} */
//3) pgm showung the use of constructor to assign values
#include<iostream>
#include<string>
using namespace std;
class person{
   
    private:
        string name;
     public:
        person (string z){
            setname(z);
        }
        void setname(string x){
            name=x;
        }
        string getname(){
            return name;
        }

};
int main(){

person p("huli");
cout<<p.getname()<<"\n";

person p1("huliiiii1");
cout<<p1.getname();
return 0;

}


