#include <iostream>
#include <list>
#include <iterator>
using namespace std;

//function for printing the elements in a list
void showlist(list <int> g)
{
    list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}
int main()
{

    list <int> gqlist1, gqlist2;


    for (int i = 0; i < 10; ++i)
    {
        gqlist1.push_back(i * 2);
        gqlist2.push_front(i * 3);
    }
    showlist(gqlist1);
    showlist(gqlist2);

     cout << "\ngqlist1.front() : " << gqlist1.front();
    cout << "\ngqlist1.back() : " << gqlist1.back();

 /* gqlist1.pop_front();
  gqlist1.pop_back();

  gqlist1.reverse();
   gqlist2.sort(); */
   cout<<endl;
   list<int>l1;
   l1=gqlist2;
   showlist(l1);

   cout<<endl;
   list<int>l;
    for(auto i=gqlist1.begin();i!=gqlist1.end();i++){
        l.push_back(*i*2);
    }
    showlist(l);
    
     // using assign() to insert multiple numbers
    // creates 3 occurrences of "2"
    list1.assign(3, 2);
    
     list<int> list1;
  
    // using assign() to insert multiple numbers
    // creates 3 occurrences of "2"
    list1.assign(3, 2);
  
    // initializing list iterator to beginning
    list<int>::iterator it = list1.begin();
  
    // iterator to point to 3rd position
    advance(it, 2);                                    // 2 2 5 2 
  
    // using insert to insert 1 element at the 3rd position
    // inserts 5 at 3rd position
    list1.insert(it, 5);
  
    // Printing the new list
    cout << "The list after inserting"
         << " 1 element using insert() is : ";
    for (list<int>::iterator i = list1.begin();
         i != list1.end();
         i++)
        cout << *i << " ";
  
    cout << endl;
  
    // using insert to insert
    // 2 element at the 4th position
    // inserts 2 occurrences
    // of 7 at 4th position
    list1.insert(it, 2, 7);
  
    // Printing the new list
    cout << "The list after inserting"
         << " multiple elements "              //  2 2 5 7 7 2
         << "using insert() is : ";
  
    for (list<int>::iterator i = list1.begin();
         i != list1.end();
         i++)
        cout << *i << " ";
  
    cout << endl;

     list<int> list1 = { 10, 20, 30 };
    list<int> list2 = { 40, 50, 60 };
  
    // merge operation
    list2.merge(list1);       // by default it willl be in ascending order

}

