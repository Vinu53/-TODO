//encryption and decreption
/*#include<iostream>
#include<cstring>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string s,t;
    string y;
    int z;
    cout<<"enter a string:";
    getline(cin,s);
   // cout<<"the string is:"<<s;
    stringstream X(s);
    while(getline(X,t,' ')){
       z=t.size();
       for(int i=0;i<=z;i++){
        if (i==0){
            cout<<'$';
        }
        else if(i%3==0 && t[i]==' '){
            continue;
        }
        else if(i%3==0){
            cout<<'#';
        }
        else{
                cout<<t[i];}
        }
       }
}*/
//2) Duplicate values

#include<iostream>
using namespace std;

 int main()
 {
  int i,arr[20],j,no;
 
  cout<<"Enter Size of array: ";
  cin>>no;
  cout<<"Enter any "<<no<<" num in array: ";
  for(i=0;i<no;i++)
  {
   cin>>arr[i];
  }
  cout<<"Dublicate Values are: ";
  for(i=0; i<no; i++)
   {
    for(j=i+1;j<no;j++)
    {
    if(arr[i]==arr[j])
    {
    cout<<arr[i]<<endl;
    }
   }
   }

 }

// 3) recursion facorial
#include<iostream>
using namespace std;

int factorial(int n);

int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Factorial of " << n << " = " << factorial(n);
    return 0;
}

int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
//4 fibonacci using recursion
#include <iostream>
using namespace std;
int fib(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(fib(x-1)+fib(x-2));
   }
}
int main() {
   int x , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "\nFibonnaci Series : ";
   while(i < x) {
      cout << " " << fib(i);
      i++;
   }
   return 0;
}

// calulator
#include<iostream>
using namespace std;

class Calculator{
private:
    float a,b;
public:
    void get(){
    cout<<"enter 1st value:";
    cin>>a;
    cout<<"enter 2nd valur:";
    cin>>b;
    }

    void calc(char c){
        

    if (c=='+'){
        cout<<a+b;
    }
    else if (c=='-')
        cout<<a-b;
    else if (c=='*')
        cout<<a*b;
    else
        cout<<a/b;
    }
};


int main(){
Calculator c1;
char op;
cout<<"enter a character:[+,-,*, /]:";
cin>>op;
c1.get();
c1.calc(op);
}

// emplyoeee
#include<iostream>
#include<string.h>
using namespace std;
class employee{
private:
    int age;
    char  name[10];
    int id;
public:
    void input(){
    cout<<"enter name:";
    cin>>name;
    cout<<"enter age:";
    cin>>age;
    cout<<"enter id:";
    cin>>id;
    }
    void put(){
    cout<<"the name is:"<<name<<" /t "<<"age is :"<<age<<endl;
    }
};

class sb1:public employee{
private:
    char dept[34];
public:
    void deptt(){
    cout<<"enter department:";
    cin>>dept;
    }
    void pdept(){
    cout<<"the dept is:"<<dept<<endl;;
    }
};

class lvs{
private:
    int ls;
public:
    void glvs(){
   cout<<"enter the remaining leaves:";
   cin>>ls;
    }
    void plvs(){
    cout<<"the remaining leaves are:"<<ls<<endl;
    }
};

class fina:public sb1, public lvs
{
public:
    void fpt()
    {
        put();
     pdept();
     plvs();
    }

};

int main(){
   fina f1;
   f1.input();
   f1.deptt();
   f1.glvs();
   f1.fpt();
}




