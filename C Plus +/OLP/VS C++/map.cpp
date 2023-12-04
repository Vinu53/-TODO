#include <iostream>
#include <map>
using namespace std;
int main() {
   map<char, int> m;

   cout << "Size of map = " << m.size() << endl;

   return 0;}
// basic functions:
#include <iostream>
#include <map>
using namespace std;
int main() {
   map<char, int> m1 = {
            {'a', 1},
            {'b', 2},
            {'c', 3},
            {'d', 4},
            {'e', 5}
            };

 map<char, int> m2(m1);
   cout << "Map contains following elements" << endl;
      for (auto it = m2.begin(); it != m2.end(); ++it)
      cout << it->first;

    multimap<char, int>m2(m1);
    cout << "Multimap contains following elements:" << endl;
    for (auto it = m2.begin(); it != m2.end(); ++it)
      cout << it->first << " = " << it->second << endl;

   return 0;
}
//2 .
#include <iostream>
#include <map>
using namespace std;
int main()
{
  /* map<char, int> m1 = {
            {'a', 1},
            {'b', 2},
            {'c', 3},
            {'d', 4},
            {'e', 5}
            };

 map<char, int> m2(m1);
   cout << "Map contains following elements" << endl;
      for (auto it = m2.begin(); it != m2.end(); ++it)
      cout << it->first<<"\t";
        cout<<endl;
     cout << "Value of key m1['a'] = " << m1.at('a') << endl;
     try {
      m1.at('z');
   } catch(const out_of_range &e) {
      cerr << "Exception at " << e.what() << endl;

   }


    map<int, int> gquiz1;
    gquiz1.insert(pair<int, char[]>(1, ,23,4));
    gquiz1.insert(pair<int, int>(2, 30,33));
    gquiz1.insert(pair<int, char>(3, 60,89));

        map<int, int>::iterator itr;
    cout << "\nThe map gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;

   /* int kk;
    cout<<"enter which key u want to print:"<<endl;
    cin>>kk;
       for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
            if (itr->first==kk){
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }}
    */
     map<int, int> mp;
     mp.insert({1,2});
     mp.insert({2,3});
     mp.insert({3,4});
     mp.insert({3,3});
    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
  /*  if (mp.count(100))
        cout << "The key 100 is present\n";
    else
        cout << "The key 100 is not present\n";  */

      pair<map<int, int>::iterator,
         map<int, int>::iterator>it;
         it = mp.equal_range(1);


    cout << "The lower bound is "
         << it.first->first             // lower bound and upper bound
         << ":" << it.first->second;
     cout << "\nThe upper bound is "
         << it.second->first
         << ":" << it.second->second;
 // new one
 
 cout << "Elements from position of 3 in the map are : \n";
    cout << "KEY\tELEMENT\n";
 
    // find() function finds the position
    // at which 3 is present
    for (auto itr = mp.find(3); itr != mp.end(); itr++) {
       
        cout << itr->first << '\t' << itr->second << '\n';
    }
    
    
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << (*it).first << " " <<
                              (*it).second << endl;
    }
    
    }

      
    return 0;}

// 3. basic functins's ---> MULTIMAPP
#include <iostream>
#include <map>
using namespace std;
int main(void) {
   multimap<char, int> m1 = {
         {'a', 1},
         {'a', 2},
         {'b', 3},
         {'c', 4},
         {'c', 5},
               };

   multimap<char, int>m2(move(m1));
   cout<<m1.size();

   cout << "Multimap contains following elements:" << endl;


   for (auto it = m2.begin(); it != m2.end(); ++it)
      cout << it->first << " = " << it->second << endl;

   return 0;
}

// map with classses 
#include<iostream>
#include<string.h>
#include<map>

using namespace std;

class employee
{
    char name[20];
    int age;
    public :
    employee(char *n, int a)
    {
        strcpy(name,n);
        age =a;
    }
    void show()
    {
        cout<<"Name is ::"<<name<<endl;
        cout<<"Age is ::"<<age<<endl;
        //return 0;

    }
};
int main()
{
    employee emp("ILINK",20);
    employee emp1("ILI",200);
    employee emp2("I",2000);

    map<int,employee> m;
    m.insert(pair<int,employee>(1,emp));
     m.insert(pair<int,employee>(2,emp1));
      m.insert(pair<int,employee>(3,emp2));

    map<int,employee> :: iterator it;
    cout<<"Values in class object"<<endl;
    for(it=m.begin();it!=m.end();it++)
        {
            it->second.show();       // (*it).second.show()
    }

    return 0;
}







