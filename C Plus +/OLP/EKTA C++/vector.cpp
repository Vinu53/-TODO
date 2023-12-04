/*
Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, 
with their storage being handled automatically by the container. Vector elements are placed in contiguous storage so
 that they can be accessed and traversed using iterators. In vectors, data is inserted at the end. Inserting at the end
  takes differential time, as sometimes there may be a need of extending the array. Removing the last element takes only
   constant time because no resizing happens. 
Inserting and erasing at the beginning or in the middle is linear in time.
*/
#include <iostream>
#include <vector>
  
using namespace std;
  
int main()
{
    vector<int> g1;
  
    for (int i = 1; i <= 5; i++)
        g1.push_back(i);
  
    cout << "Output of begin and end: ";
    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";
  
    cout << "\nOutput of cbegin and cend: ";
    for (auto i = g1.cbegin(); i != g1.cend(); ++i)
        cout << *i << " ";
  
    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
        cout << *ir << " ";
  
    cout << "\nOutput of crbegin and crend : ";
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
        cout << *ir << " ";
  
    return 0;
} */
// some more functionalities
#include <iostream>
#include <vector>
  
using namespace std;
  
int main()
{
    vector<int> g1;
  
    for (int i = 1; i <= 5; i++)
        g1.push_back(i);
  
    cout << "Size : " << g1.size();             // 5
    cout << "\nCapacity : " << g1.capacity();    // 8
    cout << "\nMax_Size : " << g1.max_size();    // some big numberrr
  
    // resizes the vector size to 4
    g1.resize(4);
  
    // prints the vector size after resize()
    cout << "\nSize : " << g1.size();
  
    // checks if the vector is empty or not
    if (g1.empty() == false)
        cout << "\nVector is not empty";
    else
        cout << "\nVector is empty";
  
    // Shrinks the vector
    g1.shrink_to_fit();
    cout << "\nVector elements are: ";
    for (auto it = g1.begin(); it != g1.end(); it++)
        cout << *it << " ";
  
    return 0;
} 
// 

// C++ program to illustrate the
// element accesser in vector
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    vector<int> g1;
  
    for (int i = 1; i <= 10; i++)
        g1.push_back(i * 10);
  
    cout << "\nReference operator [g] : g1[2] = " << g1[2];
  
    cout << "\nat : g1.at(4) = " << g1.at(4);
  
    cout << "\nfront() : g1.front() = " << g1.front();
  
    cout << "\nback() : g1.back() = " << g1.back();
  
    // pointer to the first element
    int* pos = g1.data();
  
    cout << "\nThe first element is " << *pos;
    return 0;
} */
// 4th function
/* include <bits/stdc++.h>
#include <vector>
using namespace std;
  
int main()
{
    // Assign vector
    vector<int> v;
  
    // fill the array with 10 five times
    v.assign(5, 10);
  
    cout << "The vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
  
    // inserts 15 to the last position
    v.push_back(15);
    int n = v.size();
    cout << "\nThe last element is: " << v[n - 1];
  
    // removes last element
    v.pop_back();
  
    // prints the vector
    cout << "\nThe vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
  
    // inserts 5 at the beginning
    v.insert(v.begin(), 5);
  
    cout << "\nThe first element is: " << v[0];
  
    // removes the first element
    v.erase(v.begin());
  
    cout << "\nThe first element is: " << v[0];
  
    // inserts at the beginning
    v.emplace(v.begin(), 5);
    cout << "\nThe first element is: " << v[0];
  
    // Inserts 20 at the end
    v.emplace_back(20);
    n = v.size();
    cout << "\nThe last element is: " << v[n - 1];
  
    // erases the vector
    v.clear();
    cout << "\nVector size after erase(): " << v.size();
  
    // two vector to perform swap
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
  
    cout << "\n\nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
  
    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
  
    // Swaps v1 and v2
    v1.swap(v2);
  
    cout << "\nAfter Swap \nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
  
    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //static array
    int arr[8] = { 1, 2, 3, 4, 5, -1, -2, 6 };

    //initialize with array elements

    vector<int> vect(arr, arr + 8);

    cout << "Printing the vector...\n";
    for (auto i : vect)
        cout << i << " ";
    cout << endl;

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;
  
class MyClass {
    vector<int> vec;
  
public:
    MyClass(vector<int> v) 
    {
       vec = v;
    }
    void print()
    {
        /// print the value of vector
        for (int i = 0; i < vec.size(); i++)
            cout << vec[i] << " ";
    }
};
  
int main()
{
    vector<int> vec;
    for (int i = 1; i <= 5; i++)
        vec.push_back(i);
    MyClass obj(vec);
    obj.print();
}
#include <iostream>
#include <vector>
  
using namespace std;
  
int main()
{
    vector <int> v;
    for(int i=0;i<v.size();i++){
        v.push_back(i);
    }
    for(int i=0;i<v.size();i++){
        cout<<i<<" ";
    }
} 


#include <iostream>
#include<vector>
using namespace std;

int main()
{
vector<int> v1;
  
    for (int i = 1; i <= 5; i++)
        v1.push_back(i);
    cout<<"printing vector values:  ";
    for(int i=0;i<v1.size();i++)
        cout<<" "<<v1[i]<<"  ";
    cout<<endl;
    cout<<"the first element is: ";
    cout<<v1[0];
    v1.push_back(15);
    int n = v1.size();
    cout << "\nThe last element is: " << v1[n - 1];
    v1.pop_back();
    cout<<endl;
    cout<<"after popping the elements:";
    for(int i=0;i<v1.size();i++)
        cout<<" "<<v1[i]<<"  ";
    cout<<endl;
    vector<int>v2;
    for(int j=1; j<=5;j++){
        v2.push_back(j*10);
    }
    v1.swap(v2);
    cout<<"after swapping elements:"<<endl;
    for(int i=0; i<v1.size();i++){
        cout<<" "<<v1[i]<<" ";
    }
    cout<<endl;
      for(int j=0;j<v2.size();j++){
        cout<<" "<<v2[j]<<"  ";
    }
} 

