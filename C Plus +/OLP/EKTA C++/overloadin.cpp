// overloading using unary operator
/*#include<iostream>
using namespace std;

class IncreDecre
{
        int a, b;
     public:
        void accept()
        {
                cout<<"\n Enter Two Numbers : \n";
                cout<<" ";
                cin>>a;
                cout<<" ";
                cin>>b;
        }
        void operator--() //Overload Unary Decrement
        {
                a--;
                b--;
        }
        void operator++() //Overload Unary Increment
        {
                a++;
                b++;
        }
        void display()
        {
                cout<<"\n A : "<<a;
                cout<<"\n B : "<<b;
        }
};
int main()
{
        IncreDecre id;
        id.accept();
        --id;
        cout<<"\n After Decrementing : ";
        id.display();
        ++id;
        ++id;
        cout<<"\n\n After Incrementing : ";
        id.display();
        return 0;
}
// overloading to perform negation
#include<iostream>
using namespace std;

class Numbers
{
        int x, y, z;
    public:
        void accept()
        {
                cout<<"\n Enter Three Numbers";
                cout<<"\n --------------------------";
                cout<<"\n First Number   :  ";
                cin>>x;
                cout<<"\n Second Number  :  ";
                cin>>y;
                cout<<"\n Three Number   :  ";
                cin>>z;
                cout<<"\n --------------------------";
        }
        void display()
        {
                cout<<" ";
                cout<<x<<"\t"<<y<<"\t"<<z;
        }
        void operator-()
        {
                x=-x;
                y=-y;
                z=-z;
        }
};
int main()
{
        Numbers num;
        num.accept();
        cout<<"\n Numbers are :\n\n";
        num.display();
        -num;    //Overloaded Unary (-) Operator
        cout<<"\n\n Negated Numbers are :\n\n";
        num.display();
        return 0;
}
// overloading all the arithmatic operations
#include<iostream>
using namespace std;

class Arithmatic
{
        float num;
    public:
        void accept()
        {
                cout<<"\n Enter Number  : ";
                cin>>num;
        }
        Arithmatic operator+(Arithmatic &a)
        {
                Arithmatic t;
                t.num=num+a.num;
                return t;
        }
        Arithmatic operator-(Arithmatic &a)
        {
                Arithmatic t;
                t.num=num-a.num;
                return t;
        }
        Arithmatic operator*(Arithmatic &a)
        {
                Arithmatic t;
                t.num=num*a.num;
                return t;
        }
        Arithmatic operator/(Arithmatic &a)
        {
                Arithmatic t;
                t.num=num/a.num;
                return t;
        }
        void display()
        {
                cout<<num;
        }
};
int main()
{
        Arithmatic a1, a2, a3;

        a1.accept();
        a2.accept();
        a3=a1+a2;
        cout<<"\n --------------------------------------------";
        cout<<"\n\n Addition of Two Numbers        :   ";
        a3.display();

        a3=a1-a2;
        cout<<"\n\n Subtraction of Two Numbers     :   ";
        a3.display();

        a3=a1*a2;
        cout<<"\n\n Multiplication of Two Numbers  :   ";
        a3.display();

        a3=a1/a2;
        cout<<"\n\n Division of Two Numbers        :   ";
        a3.display();
        return 0;
}
// overloading + to convatenaye two strings
#include<iostream>
#include<string.h>
using namespace std;

class CString
{
    public:
        char str[20];
    public:
        void get_string()
        {
                cout<<"\n Enter String              :   ";
                cin>>str;
        }
        void display()
        {
                cout<<str;
        }
        CString operator+(CString x)  //Concatenating String
        {
                CString s;
                strcat(str, x.str);
                strcpy(s.str, str);
                return s;
        }
};
int main()
{
        CString str1, str2, str3;
        int result=0;

        str1.get_string();
        str2.get_string();

        cout<<"\n ----------------------------------------------";
        cout<<"\n\n First String is           :  ";
        str1.display();   //Displaying First String

        cout<<"\n\n Second String is          :  ";
        str2.display();  //Displaying Second String

        cout<<"\n ----------------------------------------------";
        str3=str1+str2;         //String is concatenated. Overloaded '+' operator
        cout<<"\n\n Concatenated String is    :  ";

       str3.display();
}
// virtual fn overloading
#include<iostream>
#include<string.h>
using namespace std;

class A
{
    public:
       virtual void fn(){
       cout<<"1";
       }
};
class B: public A{
public:
    void fn(){
    cout<<"2";
    }
};
class C: public B
    {
    public:
        void fn(){
        cout<<"3";
        }
    };
int main()
{

 B c1;
 A *a1=&c1;
 a1->fn();
}
// use of this keyword
#include <iostream>

using namespace std;

class Box {
   public:
      // Constructor definition
      Box(double l = 2.0, double b = 2.0, double h = 2.0) {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
      }
      double Volume() {
         return length * breadth * height;
      }
      int compare(Box box) {
         return this->Volume() > box.Volume();
      }

   private:
      double length;     // Length of a box
      double breadth;    // Breadth of a box
      double height;     // Height of a box
};

int main(void) {
   Box Box1(3.3, 1.2, 1.5);    // Declare box1
   Box Box2;    // Declare box2

   if(Box1.compare(Box2)) {
      cout << "Box2 is smaller than Box1" <<endl;
   } else {
      cout << "Box2 is equal to or larger than Box1" <<endl;
   }

   return 0;
}
 
 

