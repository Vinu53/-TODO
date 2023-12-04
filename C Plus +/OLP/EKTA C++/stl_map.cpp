#include <iostream>
#include <iterator>
#include <map>
using namespace std;
int main()
{
    map<int, int> gquiz1;
    map<int,string>m2;
    map<int,string>m3=m2;

    // insert elements in random order
    gquiz1.insert(pair<int, int>(1, 40));
    gquiz1.insert(pair<int, int>(2, 30));
    gquiz1.insert(pair<int, int>(3, 60));
   for (auto itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;
    m2[1]="sdd";
    m2[2]="sff";
    m2[3]="dfdg";
    m2.insert(pair <int,string> (4,"fgff"));
    m2.insert(make_pair(5,"dfe"));
//    m2.insert(make_pair(2,"voi"))    ---  it gives error
    for (auto itr = m2.begin(); itr != m2.end(); ++itr) {
        cout << '\t' << itr->first*10
             << '\t' << itr->second << '\n';
    }
    cout<<endl;
    //remove all elements up to element with key=3 in gquiz2
   // gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
    //
    //gquiz2.erase(4);
     cout << m2.lower_bound(5)->first << '\t';
    
    //map::count() is a built-in function in C++ STL which returns 1 if the element with 
     //key K is present in the map container.
     if (m2.count(1))
        cout << "The key 1 is present\n";
    else
        cout << "The key 1 is not present\n";

     map<int, int> mp;
    // insert elements in random order
    mp.insert({ 2, 30 });
    mp.insert({ 1, 40 });
    mp.insert({ 3, 60 });

    // does not inserts key 2 with element 20
    mp.insert({ 2, 20 });
    mp.insert({ 5, 50 });

    //The map::max_size() is a built-in function in C++ STL which returns the maximum number of elements 
    //a map container can hold.
     cout << "The max size of mp1 is " << mp1.max_size();

     //The map::emplace() is a built-in function in C++ STL which inserts the key and its element in 
    // the map container. It effectively increases the container size by one. If the same key is emplaced 
    // more than once, the map stores the first element only as the map is a container which does not store
     // multiple keys of the same value.
      map<int, int> mp,mpc;
  
    // insert elements in random order
    mp.emplace(2, 30);
    mp.emplace(1, 40);
    mp.emplace(2, 20);
    mp.emplace(1, 50);
    mp.emplace(4, 50);

    o/p-- >KEY    ELEMENT
            1    40
            2    30
            4    50
    mpc=mp // copying one container in another container

    cout << "map1 size: " << map1.size(); // gives size

     cout << "Element at map1[2] = "
         << map1.at(2) << endl;     // to print ellemnt at particular location
    map1.swap(map2)  or swap (map1,map2);    //  to map both containers

    // for iterating
    for(auto i:map){
        cout<<i.first<<" "<<i.second<<endl;
    }
     cout<<mp.size();  //   prints no of elemnets in map


}

// MULTIMAP 


#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main()
{
    multimap <int, int> gquiz1; // empty multimap container

    // insert elements in random order
    gquiz1.insert(pair <int, int> (1, 40));
    gquiz1.insert(pair <int, int> (2, 30));
    gquiz1.insert(pair <int, int> (3, 60));
    gquiz1.insert(pair <int, int> (6, 50));
    gquiz1.insert(pair <int, int> (6, 10));

    // printing multimap gquiz1
    multimap <int, int> :: iterator itr;
    cout << "\nThe multimap gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr)
    {
        cout << '\t' << itr->first
            << '\t' << itr->second << '\n';
    }
    cout << endl;
    multimap <int, int> g;
    g=gquiz1;
    cout<<"the copied multimap is:"<<endl;
    for (itr = g.begin(); itr != g.end(); ++itr)
    {
        cout << '\t' << itr->first
            << '\t' << itr->second << '\n';
    }
    cout << "\ngquiz2.erase(4) : "; // to remove element
    
    // also u can print multimap by:
      for( iter = m1.begin() ;iter != m1.end() ; iter++)
      
    cout << (*iter).first << " " << (*iter).second << "\n";


  

      auto it = gquiz1.equal_range(6);
     // auto it= gquiz1.find(6);

    cout << "The multimap elements of key 1 is : \n";
    cout << "KEY\tELEMENT\n";

    // Prints all the elements of key 1
    for (auto itr = it.first; itr != it.second; ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
    auto pa=gquiz.find(6);
    cout<<pa->first<<" "<<pa->second <<endl;  // it will give any value
}

}

//--------------------------------------------------------------------------------------------------------------------------------------------

//pgm to find the no of times an element is repeated in an array:
#include <iostream>
#include <map>
using namespace std;

void prCharWithFreq(int a[5])
{
    // Store all characters and
    // their frequencies in a map
    map<int, int> d;
    for(int i=0;i<5;i++)
    {
        d[a[i]]++;
    }
    
    for(auto i:d)
    {
        if(i.second == 1)
        {
            cout<<i.first<<" ";
        }
    }
}

// Driver Code
int main()
{
   // string s = "geekszforgeeks vinu";
   int a[5] = {10,10,10,11,34};
    prCharWithFreq(a);
    return 0;
}

// C++ program to demonstrate
// functionality of unordered_map
#include <iostream>
#include <map>
#include <vector>
#include<string>
using namespace std;

// Driver code
int main()
{

map<int, vector<string>> m1;
m1[10] = {"Wsdf","wd"};
m1[20] = {"Swdf", "sdf"};

for(auto it=m1.begin(); it!=m1.end();it++)
{
    cout<<it->first<<" ";
    for(auto ss=it->second.begin();ss!=it->second.end();ss++)
    {
        cout<<*ss<<" ";
    }
    cout<<endl;
}
}
