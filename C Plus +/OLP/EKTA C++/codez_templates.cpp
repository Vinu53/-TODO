// template usability function template
#include <iostream>
using namespace std;
 
// One function works for all data types.  This would work
// even for user defined types if operator '>' is overloaded
template <typename T>
T myMax(T x, T y)
{
   return (x > y)? x: y;
}
 
int main()
{
  cout << myMax<int>(3, 7) << endl;  // Call myMax for int
  cout << myMax<double>(3.0, 7.0) << endl; // call myMax for double
  cout << myMax<char>('g', 'e') << endl;   // call myMax for char
 
  return 0;
}
//2 function template second example
#include <iostream>
using namespace std;
  
// A template function to implement bubble sort.
// We can use this for any data type that supports
// comparison operator < and swap works for it.
template <class T>
void bubbleSort(T a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1])
              swap(a[j], a[j - 1]);
}
  
// Driver Code
int main() {
    int a[5] = {10, 50, 30, 40, 20};
    int n = sizeof(a) / sizeof(a[0]);
  
    // calls template function
    bubbleSort<int>(a, n);
  
    cout << " Sorted array : ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
  
  return 0;
}

class template
1//
#include<iostream>
using namespace std;
  
template<class T, class U = char> 
class A
{
public:
    T x;
    U y;
};
  
int main()
{
    A<char> a;
    A<int, int> b;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    return 0;
}
//
#include <iostream>
using namespace std;
  
// Template declaration
template <class T>
  
// Template overloading of function
void display(T t1)
{
    cout << "Displaying Template: "
         << t1 << "\n";
}
  
// Template overloading of function  // if not specified it will take default
void display(int t1)
{
    cout << "Explicitly display: "
         << t1 << "\n";
}
  
// Driver Code
int main()
{
    // Function Call with a
    // different arguments
    display(200);
    display(12.40);
    display('G');
    return 0;
}
//
#include <iostream>
using namespace std;

template <class T>
class Calculator
{
private:
	T num1, num2;
	
public:
	Calculator(T n1, T n2)
	{
		num1 = n1;
		num2 = n2;
	}
	
	void displayResult()
	{
		cout << "Numbers are: " << num1 << " and " << num2 << "." << endl;
		cout << "Addition is: " << add() << endl;
		cout << "Subtraction is: " << subtract() << endl;
		cout << "Product is: " << multiply() << endl;
		cout << "Division is: " << divide() << endl;
	}
	
	T add() { return num1 + num2; }
	
	T subtract() { return num1 - num2; }
	
	T multiply() { return num1 * num2; }
	
	T divide() { return num1 / num2; }
};

int main()
{
	Calculator<int> intCalc(2, 1);
	Calculator<float> floatCalc(2.4, 1.2);
	
	cout << "Int results:" << endl;
	intCalc.displayResult();
	
	cout << endl << "Float results:" << endl;
	floatCalc.displayResult();
	
	return 0;
}
