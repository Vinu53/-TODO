#include <iostream>
#include <iterator>
#include <set>

using namespace std;

int main()
{
    set<int, greater<int> > s1;

    // insert elements in random order
    s1.insert(40);
    s1.insert(30);
    s1.insert(60);
    s1.insert(20);
    s1.insert(50);

    // only one 50 will be added to the set
    s1.insert(50);
    s1.insert(10);

    // printing set s1
    set<int, greater<int> >::iterator itr;
    cout << "\nThe set s1 is : \n";
    for (itr = s1.begin(); itr != s1.end(); itr++)
    {
        cout << *itr<<" ";
    }
    cout << endl;

    set<int > s3{11,12,15,13,10};           // set by default arranges in increasing order
    cout<<"the third set is:"<<endl;
     for (itr = s3.begin(); itr != s3.end(); itr++)
    {
        cout << *itr<<" ";
    }
    cout<<endl;


    // assigning the elements from s1 to s2
    set<int> s2(s1.begin(),s1.end());

    // print all elements of the set s2
    cout << "\nThe set s2 after assign from s1 is : \n";
    for (itr = s2.begin(); itr != s2.end(); itr++)
    {
        cout << *itr<<" ";
    }
    cout << endl;

    // remove all elements up to 30 in s2
    cout
        << "\ns2 after removal of elements less than 30 :\n";
    s2.erase(s2.begin(), s2.find(30));
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout <<*itr<<" ";
    }
     // lower bound and upper bound for set s1
     cout<<endl;
     set<int>ss{1,2,3,4,5,6};
     cout<<"lower bound:"<<" ";
     cout<<*ss.lower_bound(2);    // it gives the nearest small number (either 40 ,if 41 then gives 41)
     cout<<'\n';
     cout<<"upper bound:"<<" ";
     cout<<*ss.upper_bound(5);    // it always gives the upper value

     cout<<'\n';

     set<int> s4;
      //s4.insert(s1.find(3), s1.end());
        s2.insert(s2.end(),1234);
      for (itr = s2.begin(); itr != s2.end(); itr++)
    {
        cout << *itr<<" ";
    }

}


