#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <string>
using namespace std;

int main() {
  array<int, 5> ar1{{3, 4, 5, 1, 2}};
  array<int, 5> ar2 = {1, 2, 3, 4, 5};
  array<string, 2> ar3 = {"a", "b"};

  cout << "Sizes of arrays are" << endl;
  cout << ar1.size() << endl;
  cout << ar2.size() << endl;
  cout << ar3.size() << endl;

  cout << "\nInitial ar1 : ";
  for (auto i : ar1)          
    cout << i << ' ';
    sort(ar1.begin(), ar1.end());          // 1 sort(begin,end)

  cout << "\nsorted ar1 : ";
  for (auto i=ar1.begin();i!=ar1.end();i++)
    cout << *i << ' ';

  ar2.fill(10);                                //2  fill( ) function: This is specially used to initialize or fill all 
//                                              the indexes of the array with a similar value
cout << "\nFilled ar2 : ";
  for (auto i : ar2)
    cout << i << ' ';

  cout << "\n ar3 : ";
  for (auto s : ar3)
    cout << s << ' ';
    
    cout<<endl;                                 //3  [ ] Operator : This is similar to the normal array, we use it to access 
    cout<<arr[0] <<" "<<arr[2]<<endl;           //   the element store at index ‘i’ .
    
    cout<<arr.front() <<" "<<arr.back();       //4  front( ) and back( ) function: These methods are used to access the first and the
                                               //   last element of the array directly
    arr.swap(arr1)<<endl;                      //5  swap  swap( ) function: This swap function is used to swap the content of the two arrays
                                               //6  empty( ) function: This function is used to check whether the declared STL array 
   cout<<arr.empty();                         //   is empty or not , if it is empty then it returns false else true
    cout<< arr.at(2)                          //7  at( ) function: This function is used to access the element stored at a specific location, 
                                              //   if we try to access the element which is out of bounds of array size then it throws an exception.
    
    array <int , 10> arr;   
    cout<<arr.size()<<'\n'; // toatal num of indexes       // 8) prints --> size of array == 10
    cout<<arr.max_size()<<'\n'; // toatal num of indexes   // 9 ) prints 10
    cout<<sizeof(arr); // toatal size of array             // 10 -- o/p 40(4*10)
    
    //10) data( ): This function returns the pointer to the first element of the array object. Because elements in the array are 
    //stored in contiguous memory locations. This data( ) function return us the base address of the string/char type object.                              

  const char* str = "GeeksforGeeks";
  array<char,12> arr;
  memcpy (arr.data(),str,13);    // data() points to first element 
  cout << arr.data() << '\n';
  return 0;
} 
    
    
  return 0;
}


#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int A[]={12,14,17,17,19};
    int n=sizeof(A)/sizeof(A[0]);
    int *ti=adjacent_find(A,A+n);
    cout<<*ti;
} 

