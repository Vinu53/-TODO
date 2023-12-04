// list 
/*  FROM geeks for geeks
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
    cout << "\nList 1 (gqlist1) is : ";
    showlist(gqlist1);
  
    cout << "\nList 2 (gqlist2) is : ";
    showlist(gqlist2);
  
    cout << "\ngqlist1.front() : " << gqlist1.front();
    cout << "\ngqlist1.back() : " << gqlist1.back();
  
    cout << "\ngqlist1.pop_front() : ";
    gqlist1.pop_front();
    showlist(gqlist1);
  
    cout << "\ngqlist2.pop_back() : ";
    gqlist2.pop_back();
    showlist(gqlist2);
  
    cout << "\ngqlist1.reverse() : ";
    gqlist1.reverse();
    showlist(gqlist1);
  
    cout << "\ngqlist2.sort(): ";
    gqlist2.sort();
    showlist(gqlist2);
  
    return 0;
  
} */
//
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l = {1,2,3,4,5};
    list<int>::iterator it = l.begin();

    l.insert (it, 100);
    for(it= l.begin();it!=l.end();it++){
        cout<<*it<<"\t";
    }
    cout<<endl;
    list<int> new_l = {10,20,30,40};
    new_l.insert (new_l.begin(), l.begin(), l.end());
    for(it=new_l.begin();it!=new_l.end();it++){
        cout<<*it<<"\t";}
    cout<<endl;
    l.insert(l.begin(), 5, 10);
      for(it=l.begin();it!=l.end();it++){
        cout<<*it<<"\t";}
    cout<<endl;

    return 0;
}
//
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l{1,2,3,4,5};
    
    l.push_back(6);
    l.push_back(7);
    /* now the list becomes 1,2,3,4,5,6,7 */
    
    l.push_front(8);
    l.push_front(9);
    /* now the list becomes 9,8,1,2,3,4,5,6,7 */
    
    l.pop_back()();
    /* now the list becomes 1,2,3,4 */
    
    l.pop_front()();
    /* now the list becomes 2,3,4 */
    l.reverse();
    /* now the list becomes 5,4,3,2,1 */

}
//#include <iostream>
#include <list>
using namespace std;
int main ()
{
    list<int> list1 = {1,2,3,4};
    list<int> list2 = {5,6,7,8};
    list<int>::iterator it;
    
    it = list1.begin();
    ++it;   //pointing to second position           
    
    list1.splice(it, list2);
    /* transfer all elements of list2 at position 2 in list1 */
    /* now list1 is 1 5 6 7 8 2 3 4 and list2 is empty */
    
    list2.splice(list2.begin(), list1, it);
    /* transfer element pointed by it in list1 to the beginning of list2 */
    /* list2 is now 5 and list1 is 1 6 7 8 2 3 4*/
    list1.merge(list2); // returns 1 2 3 4 5 6 7 8
    
    return 0;
}
//
#include <iostream>
#include <list>
using namespace std;


void showTheContent(list<int> l)
{
     list<int>::iterator it;
      for(it=l.begin();it!=l.end();it++)
   {
       cout <<  *it << " ";
   }
   cout << "\n";
}
int main()
{
   // Sample Code to show List and its functions

   list<int> list1,list2;
   int i;
   // inserting at the back
   for(i=0;i<10;i++)
    list1.push_back(i+1);

   //inserting at the front
   for(i=0;i<10;i++)
    list2.push_front(i+1);

   cout << "Content of List 1: ";
   showTheContent(list1);
   cout << "Content of list 2: ";
   showTheContent(list2);

   // sorting the second list
   list2.sort();
   cout << "Sorted List2 : ";
   showTheContent(list2);

   //Removing five elements from front in list1.
   int times = 5;
   while(times--)
   {
       list1.pop_front();
   }
   cout << "Content of List 1: " ;
   showTheContent(list1);
   //Removing five elements from the back in list2.
   times=5;
   while(times--)
   {
       list2.pop_back();
   }
   cout << "Content of List 2: ";
   showTheContent(list2);

    //seek the first element of list 1
    cout << list1.front() << " is now at the front in list 1\n";
    // seek the last element in list 2
    cout << list2.back() << " is now the last element in list 2\n";

    //Inserting elements in list 1.
    list1.insert(list1.begin(),5,10);
    cout << "After Insertion list 1: ";
    showTheContent(list1);

    //remove() to remove all the elements with value 10.
    list1.remove(10);
    cout << "After Removal list 1: ";
    showTheContent(list1);

    // size() to know the number of elements
    cout << "No. of elements in list 1: ";
    cout << list1.size() << "\n";

    //Reversing the content of list 2
    list2.reverse();
    cout << "Reversed list 2: ";
    showTheContent(list2);

    //erasing first element of list 2
    list2.erase(list2.begin());
    cout << "After erasing from list 2: ";
    showTheContent(list2);

    //Removing all elements from list 1.
    list1.clear();
    // Use of empty() function
    if(list1.empty()) cout << "List 1 is now empty\n";
    else cout << "Not Empty\n";

    // use of assign function
    list1.assign(5,2); // 2 2 2 2 2
    cout << "List 1: ";
    showTheContent(list1);
    return 0;
}
// Forward list""" is similar to singly linked list
#include <iostream>
#include <forward_list>
using namespace std;

 void showTheContent(forward_list<int> l)
{
     forward_list<int>::iterator it;
      for(it=l.begin();it!=l.end();it++)
   {
       cout <<  *it << " ";
   }
   cout << "\n";
}
int main(){
 forward_list<int> list1,list2,list3;
   int i;
   list3.assign({1,2,3});
    showTheContent(list3);

    list3.push_front(60);
    showTheContent(list3);
    list3.emplace_front(70);
    showTheContent(list3);

    list3.pop_front();
    showTheContent(list3);

    forward_list<int> l1={11,12,13,14,15};
    l1.insert_after(l1.before_begin(),10);
    showTheContent(l1);

}

