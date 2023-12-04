// simple thread program : -->
#include <iostream>
#include<thread>
using namespace std;
using namespace std::chrono;

int even(int a, int b){
    int evensum=0;
    for(int i=a;i<=b;i++)
        if (i%2==0)
            evensum+=1;
    return evensum;

}
int odd(int a, int b){
    int oddsum=0;
    for(int i=a;i<=b;i++)
        if (i%2==0)
            oddsum+=1;
    return oddsum;
}
int main(){
int a=1,b=10;
auto start = high_resolution_clock::now();
/*cout<<even(a,b);
cout<<endl;
cout<<odd(a,b);
cout<<endl; */

thread t1(even, a,b);
thread t2(odd ,a,b);
t1.join();
t2.join();
auto stop = high_resolution_clock::now();
auto duration = duration_cast<microseconds>(stop - start);
 cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
cout<<"In sec:"<<duration.count()/1000;
return 0;
}
// creato of thread example: -1 
#include<iostream>
#include<thread>
using namespace std;
void run(int x){
    while(x-->0){
        cout<<"hello"<<endl;
    }
}
int main(){
    thread t(run,5);
    t.join();
    return 0;
}
// 4-- non satcic meber funcions
class base{
public:
    int ope(int x) {

    while(x-->0){
    cout<<x<<" ";}
    }
};
int main(){
    base b;
    thread t(&base::ope, &b ,10);
    t.join();
}
// 5-- static member functions
class base{
public:
    static void ope(int x) {

    while(x-->0){
    cout<<x<<" ";}
    }
};
int main(){
    base b;
    thread t(&base::ope,10);
    t.join();
}

// simple operatios on thraeds
#include <iostream>
#include<thread>
#include<chrono>
using namespace std;

void run(int x){
while(x-->0){
    cout<<"heloo"<<endl;}
    this_thread::sleep_for(chrono::seconds(5));

}
int main(){
thread t(run,5);
cout<<"main()"<<endl;
cout<<"fhi"<<endl;
t.join();
cout<<"aftetr main():"<<endl;
return 0;
}
// use of detach to make a progtam to wait till the completion of thread 
#include <iostream>
#include<thread>
#include<chrono>
using namespace std;

void run(int x){
while(x-->0)
    cout<<"heloo"<<endl;

    cout<<"Thread finished:";
    this_thread::sleep_for(chrono::seconds(5));

}
int main(){
thread t(run,15);
cout<<"main()"<<endl;

t.detach();
cout<<"aftetr main():"<<endl;

return 0;

}







