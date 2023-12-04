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


#include <iostream>
using namespace std;
class operation
{
	int a,b,add,sub,mul;
	float div;
public:
	void get();
	void sum();
	void difference();
	void product();
	void division();
};
inline void operation :: get()
{
	cout << "Enter first value:";
	cin >> a;
	cout << "Enter second value:";
	cin >> b;
}

inline void operation :: sum()
{
	add = a+b;
	cout << "Addition of two numbers: " << a+b << "\n";
}

inline void operation :: difference()
{
	sub = a-b;
	cout << "Difference of two numbers: " << a-b << "\n";
}

inline void operation :: product()
{
	mul = a*b;
	cout << "Product of two numbers: " << a*b << "\n";
}

inline void operation ::division()
{
	div=a/b;
	cout<<"Division of two numbers: "<<a/b<<"\n" ;
}

int main()
{
	cout << "Program using inline function\n";
	operation s;
	s.get();
	s.sum();
	s.difference();
	s.product();
	s.division();
	return 0;
}
// Modified program using structures
#include <iostream>
using namespace std;

class bs{
    public:
      int big,small;
};

bs findbigsmall(int a, int b){
    bs xx;
    if(a>b){
     xx.big = a;
     xx.small = b;
    }
    else{
        xx.big = b;
        xx.small = a;
    }
    return xx;
}

int main(){
  bs bh;
  bh = findbigsmall(5,33);
  cout<<"big no is:"<<bh.big;
}


} */

//4) pgm showung the use of constructor to assign values
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


