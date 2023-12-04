#include <iostream>
using namespace std;

class base
{
    public:

    void print()
    {
        cout<<"printing"<<endl;
    }

};

class child:public base
{
    public:

    void asd()
    {
        cout<<"child done"<<endl;
    }

};

int main()
{
    int a = 3;
    char c = 'v';

    //int *p = (int*) &c;
    int q = static_cast<int>(a);
    cout<<q;
}