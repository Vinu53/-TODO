// 1 pgm .static variables and templates
#include <iostream>
using namespace std;
  
template <class T> class Test
{  
private:
  T val; 
public:
  static int count;
  Test()
  {
    count++;
  }
  // some other stuff in class
};
  
template<class T>
int Test<T>::count = 0;
  
int main()
{
  Test<int> a;  // value of count for Test<int> is 1 now
  Test<int> b;  // value of count for Test<int> is 2 now
  Test<double> c;  // value of count for Test<double> is 1 now
  cout << Test<int>::count   << endl;  // prints 2  
  cout << Test<double>::count << endl; //prints 1
     
  getchar();
  return 0;
}

//2 passing non type as a parameter
// A C++ program to demonstrate working of non-type
// parameters to templates in C++.
#include <iostream>
using namespace std;

template <class T, int max>
int arrMin(T arr[], int n)
{
   int m = max;
   for (int i = 0; i < n; i++)
      if (arr[i] < m)
         m = arr[i];

   return m;
}

int main()
{
   int arr1[]  = {10, 20, 15, 12};
   int n1 = sizeof(arr1)/sizeof(arr1[0]);

   char arr2[] = {1, 2, 3};
   int n2 = sizeof(arr2)/sizeof(arr2[0]);

   // Second template parameter to arrMin must be a constant
   cout << arrMin<int, 1000>(arr1, n1) << endl;
   cout << arrMin<char, 256>(arr2, n2);
   return 0;
}
// 3
#include <iostream>
using namespace std;
 
template <typename T>
void fun(const T&x) //sine its static complier creates new Compiler creates a new instance of a template function for every 
{                    //daeta type. 
    static int count = 0; 
    cout << "x = " << x << " count = " << count << endl;
    ++count;
    return;
}
 
int main()
{
    fun<int> (1); 
    cout << endl;
    fun<int>(1);        //o/p =0,1,0
    cout << endl;
    fun<double>(1.1);
    cout << endl;
    return 0;
}
// assume size of int is 4 and  double is 8 then find the output
#include<iostream>
#include<stdlib.h>
using namespace std;
 
template<class T, class U, class V=double>
class A  {
    T x;
    U y;                        o/p== 16,24
    V z;
    static int count;
};
 
int main()
{
   A<int, int> a;
   A<double, double> b;
   cout << sizeof(a) << endl;
   cout << sizeof(b) << endl;
   return 0;
}
//
#include <iostream>
using namespace std;
 
template <int i>        // error non type parametrers type cannot be modified
void fun()
{
   i = 20;
   cout << i;
}
 
int main()
{
   fun<10>();
   return 0;
}
//template specilization
#include <iostream>
using namespace std;

template <class T>
void fun(T a)
{
cout << "The main template fun(): "
		<< a << endl;
}

template<>
void fun(int a)
{
	cout << "Specialized Template for int type: "
		<< a << endl;
}

int main()
{
	fun<char>('a');           //o/p-The main template fun(): a
    	fun<int>(10);         //Specialized Template for int type: 10
    fun<float>                //The main template fun(): 10.14
}
//#include <iostream>
using namespace std;
 
template <class T>
class Test
{
  // Data members of test
public:
   Test()
   {
       // Initialization of data members
       cout << "General template object \n";
   }
   // Other methods of Test
};
 
template <>
class Test <int>
{
public:
   Test()
   {
       // Initialization of data members
       cout << "Specialized template object\n";
   }
};
 
int main()
{
    Test<int> a;
    Test<char> b;   //   o/p -->> specialized template objects
    Test<float> c;    //        general template
    return 0;           //      general template
}
//