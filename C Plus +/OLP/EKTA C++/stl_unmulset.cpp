#include <iostream>
#include<unordered_set>
#include<array>
using namespace std;
int main(){

unordered_multiset<int>u;
array<int,5>a; 
// int a[8] ; u cannot array of non class type
for(int i=0;i<5;i++){
    cin>>a[i];
}
u.insert(a.begin(),a.end());
for(auto j:u){
    cout<<j<<" ";
}

 unordered_multiset<string> ums = { "apple", "orange", "banana" };
    array<string, 3> arr = { "cherry", "mango", "apple"};
    string str = "grapes";
 
    ums.insert(str); // copy insertion
    ums.insert(arr.begin(), arr.end()); // range insertion
    ums.insert({ "pineapple", "papaya" });
    
unordered_multiset<int> ums = {2, 4, 6};
    vector<int> x;
    x.push_back(3);
    x.push_back(9);
      x.push_back(4);
    int val = 5;
    
    ums.insert(val); // copy insertion
    ums.insert(x.begin(), x.end()); // range insertion
    ums.insert({ 7, 8 }); // initializer list insertion
    
    unordered_multiset<int> sample;
  
    // inserts element
    sample.insert(100);
    sample.insert(100);
    sample.insert(100);
    sample.insert(200);
    sample.insert(500);
    sample.insert(500);
    sample.insert(600);
    
    // equal_range is equal to find the value equal to the given value:
    // iterator of pairs pointing to range
    // which includes 500 and print by iterating in range
    auto itr = sample.equal_range(500);
    for (auto it = itr.first; it != itr.second; it++) {
        cout << *it << " ";
    }
    cout << endl;
    
     cout << "Maximum size = "
         << num.max_size() << "\n";           // 1152921504606846975
  
    cout << "Current size = "
         << num.size();                        // 6
         
    
    #include <bits/stdc++.h>
using namespace std;
#include<unordered_set>
int main()
{

    // declaration
    unordered_multiset<int> sample;

    // inserts element
    sample.insert(10);
    sample.insert(15);
    sample.insert(15);
    sample.insert(13);
    sample.insert(13);

    for (auto it = sample.begin(); it != sample.end(); it++) {
        cout << "The bucket size in which " << *it
             << " is " << sample.bucket_size(*it) << endl;
    }
cout<<sample.bucket(13);
// The load factor is the ratio between the number of elements in the container (its size) and the number of buckets (bucket_count):

  // declaration
    unordered_multiset<char> sample;
  
    // inserts element
    sample.insert('a');
    sample.insert('b');
  
    cout << "The size is: " << sample.size();
    cout << "\nThe bucket_count is: " << sample.bucket_count();
    cout << "\nThe load_factor is: " << sample.load_factor();
  
    sample.insert('b');
    sample.insert('b');
  
    cout << "\n\nThe size is: " << sample.size();
    cout << "\nThe bucket_count is: " << sample.bucket_count();
    cout << "\nThe load_factor is: " << sample.load_factor();
  
    sample.insert('z');
  
    cout << "\n\nThe size is: " << sample.size();
    cout << "\nThe bucket_count is: " << sample.bucket_count();
    cout << "\nThe load_factor is: " << sample.load_factor();
  
  //  2nd example --------------------------------------------
   unordered_multiset<char> s1;
    s1 = { 'a', 'b', 'c', 'd' };
   
    // displaying initial parameters
    cout << "Current parameters are :\n";
    cout << "max_load_factor= " << s1.max_load_factor() << endl;
    cout << "load_factor= " << s1.load_factor() << endl;
    cout << "size of s1= " << s1.size() << endl;
    cout << "bucket_count= " << s1.bucket_count() << endl;
   
    // changing max_load_factor
    s1.max_load_factor(0.5);
    cout << endl;
   
    // displaying final parameters
    cout << "Final parameters are :\n";
    cout << "max_load_factor= " << s1.max_load_factor() << endl;
    cout << "load_factor= " << s1.load_factor() << endl;
    cout << "size of s1= " << s1.size() << endl;
    cout << "bucket_count= " << s1.bucket_count() << endl;
    
     unordered_multiset<int> sampleSet;
  
    bool answer = sampleSet.key_eq()(100, 200);
  
    // check
    if (answer)
        cout << "100 and 200 are treated similarly in the container\n";
    else
        cout << "100 and 200 are treated dissimilarly in the container\n";
        
        
    
    


}

  