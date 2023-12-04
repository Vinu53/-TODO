// pgm to find largest of three no;
/*#include<iostream>
using namespace std;

class largest
{
        private:
                int x,y,z;
    public:
        void input()
        {
                cout<<"\nEnter 1st number :: ";
                cin>>x;
                cout<<"\nEnter 2nd number :: ";
                cin>>y;
                cout<<"\nEnter 3rd number :: ";
                cin>>z;
        }

        void calc()
        {
                int r;
                r=((x>y)&&(x>z)?x:(y>x)&&(y>z)?y:z);

                cout<<"\nThe Largest Number among [ "<<x<<", "<<y<<", "<<z<<" ] = "<<r<<"\n";
        }
};
int main()
{
        largest g;
        g.input();
        g.calc();

        return 0;
}
// C++ Program to find Factorial of a number using class (outside)

#include<iostream>
using namespace std;

class factorial
{
        private:
                        int n,n1,f=1;
        public:
                void input();
                void calc();
                void display();
};

void factorial::input()
{
        cout<<"\nEnter any number :: ";
        cin>>n;
}

void factorial::calc()
{
        n1=n;
        if(n==0||n==1)
        cout<<"\nFactorial of Number [ "<<n<<" ] is :: 1\n";
        else
        {
                while(n>0)
                {
                        f=f*n;
                        n--;
                }
        }

}

void factorial::display()
{
                cout<<"\nFactorial of [ "<<n1<<" ] is :: "<<f<<"\n";
}

int main ()
{
        factorial f;
        f.input();
        f.calc();
        f.display();

        return 0;
}
//  C++ program to find Reverse of a Number using class (outside) 

#include<iostream>
using namespace std;

class rev
{
        private:
                        int n,n1,rn=0,d;
        public:
                void input();
                void calc();
                void display();
};

void rev::input()
{
        cout<<"\nEnter any positive no. :: ";
        cin>>n;
}

void rev::calc()
{
        n1=n;
        while(n>0)
        {
                d=n%10;
                rn=(rn*10)+d;
                n/=10;

        }
}

void rev::display()
{
                cout<<"\nReverse of [ "<<n1<<" ] is :: "<<rn<<"\n";
}

int main ()
{
        rev r;
        r.input();
        r.calc();
        r.display();

        return 0;
}
// pgm to demonstarte use of inline function in class
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
// C++ program to find Square of a Number using inline function  (similR TO FUNCTION OUTSISE CLASS)

#include<iostream>
using namespace std;

class square
{
   private:
        int n,r;
        float n1,r1;
        public:
                void input();
                void calc();
                void display();

};

inline void square::input()
{
        cout<<"Enter an integer :: ";
        cin>>n;
        cout<<"\nEnter a float no. :: ";
        cin>>n1;


}

inline void square::calc()
{
        r=n*n;
        r1=n1*n1;
}

inline void square::display()
{
        cout<<"\nSquare of integer [ "<<n<<" ] = "<<r<<"\n";
        cout<<"\nSquare of float [ "<<n1<<" ] = "<<r1<<"\n";
}

int main ()
{
        square s;
        s.input();
        s.calc();
        s.display();

        return 0;
}
//C++ program to display time using class
# include<iostream>
using namespace std;
class time
{
        int m,s,h;
        public:
                void get(int p,int q,int r)
                {
                        h=p;
                        m=q;
                        s=r;
                }
                void display()
                {
                        cout<<"Time is "<<h<<":"<<m<<":"<<s; 
                }
};
int main()
{
        int p,q,r;
        time t;
        
        cout<<"Enter hour:";
        cin>>p;
        cout<<"Enter minute:";
        cin>>q;
        cout<<"Enter seconds:";
        cin>>r;
        t.get(p,q,r);
        t.display();
}
// swap two numbers
#include<iostream>
using namespace std;

class largest
{
    int a,b;
    public:
        void input()

        {
                cout<<"\nEnter 1st number :: ";
                cin>>a;
                cout<<"\nEnter 2nd number :: ";
                cin>>b;

        }

        void swwap()
        {
                a=a+b;
                b=a-b;
                a=a-b;

                cout<<"the swapped nubers are: "<<" "<<a<<" "<<b;
        }
};
int main(){
    largest l;
    l.input();
    l.swwap();

}
//  C++ Program to enter student details using Virtual Class  

#include<iostream>
using namespace std;
class student

{
    protected:

        int roll_no;

    public:

        void get_no(int x)
        {
            roll_no=x;
        }

        void put_no()
        {
            cout<<"\nRoll Number :: "<<roll_no<<"\n";

        }
};

class test: virtual public student
{
    protected:
        float sub_marks;

    public:
        void get_submarks(float y)
        {
            sub_marks=y;
        }

        void put_submarks()
        {
            cout<<"\nSubject Marks :: "<<sub_marks<<"\n";
        }
};
class sports: public virtual student
{
    protected:
        float sp_marks;

    public:
        void get_spmarks(float z)
        {
            sp_marks=z;
        }

        void put_spmarks()
        {
            cout<<"\nSports Marks :: "<<sp_marks<<"\n";
        }

};

class result: public test, public sports
{

    float total_marks;

    public:
        void put_result()
        {
            total_marks=sub_marks+sp_marks;
            put_no();

            put_submarks();
            put_spmarks();
            cout<<"\nTotal Marks :: "<<total_marks<<"\n";
        }
};
int main()
{
    result R;
    R.get_no(34);
    R.get_submarks(67.2);
    R.get_spmarks(98.9);
    R.put_result();

    return 0;
}
//  C++ Program to calculate Volume of Cube using constructor  

#include<iostream>
using namespace std;
class cube

{
 public:
                        double side;
                        double volume()
                         {    return(side*side*side);
                         }

                        cube(double side1)

                        {

                            cout << "\nA constructor is called" << endl;

                            side=side1;

                        }

                        cube()

                        {

                            cout << "\nA default constructor is called " << endl;

                        }

                        ~cube()

                        {

                            cout << "\nDestructing " << side << endl;

                        }

};

int main()

{

            cube c1(2.34);

            cube c2;

            cout << "\nThe side of the cube is: " << c1.side << endl;

            cout << "\nThe volume of the first cube is : " << c1.volume() << endl;

            cout << "\nEnter the length of the second cube : " ;

            cin >> c2.side;

            cout << "\nThe volume of second cube is : " << c2.volume() << endl;

            return(0);

}
// pgm showing example of const and dest
#include<iostream>
using namespace std;

class CAdd
{

    public:
                int one;

                CAdd(int two)
                {
                        cout << "\nA constructor is called." << endl;
                        one=two;
                }

                CAdd()
                {
                        cout << "\nA default constructor is called " << endl;
                }

                ~CAdd()
                {
                        cout << "\nDestructing " << one << endl;
                }

                int add()
                {
                        return(one+one);
                }
};

int main()
{
                CAdd myobj1(4);
                CAdd myobj2;

                cout <<"\nThe value in Object1 is :: "<< myobj1.one << endl;
                cout << "\nEnter a number :: " ;

                cin >> myobj2.one;
                cout << myobj2.add()<<endl;

                return(0);
}
//store student details using constr and destru
#include<iostream>
using namespace std;

class stu
{
                private:
                    char name[20],add[20];
                        int roll,zip;

                public:
                    stu ();//Constructor
                        ~stu();//Destructor
                        void read();
                        void disp();
};

stu :: stu()
{
        cout<<"\nThis is Student Details constructor called..........."<<endl;
}

void stu :: read()
{
        cout<<"\nEnter the student Name :: ";
        cin>>name;
        cout<<"\nEnter the student roll no :: ";
        cin>>roll;
        cout<<"\nEnter the student address :: ";
        cin>>add;
        cout<<"\nEnter the Zipcode :: ";
        cin>>zip;
}

void stu :: disp()
{
    cout<<"\nThe Entered Student Details are shown below ::---------- \n";
        cout<<"\nStudent Name :: "<<name<<endl;
        cout<<"\nRoll no   is :: "<<roll<<endl;
        cout<<"\nAddress is :: "<<add<<endl;
        cout<<"\nZipcode is :: "<<zip;
}

stu :: ~stu()
{
        cout<<"\n\nStudent Detail is Closed.............\n";
}


int main()
{
        stu s;
    s.read ();
    s.disp ();

    return 0;
} */
// constructor overloading
#include <iostream>
using namespace std;

// base class
class Parent {

public:
    // base class's parameterised constructor
    Parent()
    {

        cout << "Inside base class's parameterised "
                "constructor"
             << endl;
    }
};

// sub class

class child:public Parent
{
public:
    // sub class's parameterised constructor
    child()//: Parent(j),j(y)

        {

            cout << "Inside sub class's parameterised "
                "constructor"
             << endl;
    }
};
class child2:public Parent
{
public:
    // sub class's parameterised constructor
    child2()//: Parent(j),j(y)

        {

            cout << "Inside sub sub class's parameterised "
                "constructor"
             << endl;
    }
};
class child3:public child2 ,public child{
public:
    // sub class's parameterised constructor
    child3()//: Parent(j),j(y)

        {

            cout << "Inside sub sub sub class's parameterised "
                "constructor"
             << endl;
    }
};

// main function
int main()
{

    // creating object of class Child
    child3 obj1;
    return 0;
}





