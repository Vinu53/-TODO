#include<iostream>
#include<forward_list>
using namespace std;
 int main()
{
    forward_list<int> flist1;
    forward_list<int> flist2={1,2,3,4};

    flist1.assign({1, 2, 3,4,5});            // assigning values using assign
    for(auto a: flist2){
        cout<<a<<" ";
    
        flist1.push_front(60);                 // 60,1,2,3,4,5

    flist1.push_front(70);                // 70,60,1,2,3,4,5

    flist1.pop_front();                  // 60,1,2,3,4,5

    
     forward_list<int>::iterator ptr;
   
   ptr= flist1.insert_after(flist1.begin(),{10,20,30});    // 1, 10,20,30,2,3,4

    flist1.erase_after(ptr);

    for(auto a: flist1){
        cout<<a<<" ";
    }
      flist1.remove(40);            // 10,20,20,50 remove all occurences of 40
    // remove_if() :- This function removes according to the condition in its argument.
   // removes elements greater than 20. Removes 30 and 40
    cout<<endl;
    flist1.remove_if([](int x)
            { return x>20;}  );
    
    forward_list<int> flist3 = {10, 20, 30};
     
    // Initializing second list
    forward_list<int> flist4 = {40, 50, 60};
     
    // Shifting elements from first to second
    // forward list after 1st position
    flist2.splice_after(flist2.begin(),flist1);

    // Creating deep copy using "="
     flist2 = flist1;

      // Using merge() to merge both list in 1
     flist1.merge(flist2);

     
     // Sorting the forward list using sort()
     flist1.sort();
    
    
     // Use of unique() to remove repeated occurrences
     flist1.unique();

     
     // Using reverse() to reverse 1st forward list
     flist1.reverse();

     
     // Use of swap() to swap the list
     flist1.swap(flist2);

     
     // Checking if list is empty
     flist1.empty() ? cout << "Forward list is empty" : 
                      cout << "Forward list is not empty";
    
     forward_list<int> fl = { 20, 30, 40, 50 };
  
    // performing before_begin function
    auto it = fl.before_begin();
  
    // inserting element before the first element
    fl.insert_after(it, 10);
  
    cout << "Element of the list are:" << endl;   // 10,20,30,40,50
    

      
  }