#include <iostream>
#include <deque>
#include <vector>

using namespace std;

 void showTheContent(deque<int> q)
{
     deque<int>::iterator it;
      for(it=q.begin();it!=q.end();it++)
   {
       cout <<  *it << " ";
   }
   cout << "\n";
}

int main ()
{

    int a[] = { 1,5,8,9,3 };
    deque<int> dq(a, a+5);
    showTheContent(dq);
     dq.push_back(10);
    /* now dq is : 1,5,8,9,3,10 */
    
    dq.push_front(20);// now dq is 20,1,5,8,9,3,10
   
    deque<int>::iterator i;
    i=dq.begin()+2;/* i points to 3rd element in dq */
    dq.insert(i,15);
    showTheContent(dq);

    dq.insert(dq.begin(),111);
    showTheContent(dq);

    dq.pop_front();  // pop_front means front elemnt will be popped
    showTheContent(dq);
    dq.pop_back();       // pop_back means last element will be removed
    showTheContent(dq);
       
    
       int b[]={7,7,7,7};
    dq.insert(dq.begin() , b , b+1 );
       showTheContent(dq);

       deque<int>d1(dq);
       showTheContent(d1);
}
// some more additional functionalities
#include <iostream>
#include <deque>

using namespace std;

int main(void) {

   deque<int> d;
   cout << "Size of deque = " << d.size() << endl; // o/p-> size of deque will be 0
   
   deque<int> d(5, 1);
    cout << "Contents of deque are" << endl;
    for (int i = 0; i < d.size(); ++i)
      cout << d[i] << endl;


}
//
#include <iostream>
#include <deque>

using namespace std;

int main(void) {

/*   deque<int> d1 = {1, 2, 3, 4, 5};
   deque<int> d2(d1);
   deque<int>d3(d1.begin(),d1.end()+5);
   deque<int>d4(d1.begin(),d1.begin()+3);

   cout << "Contents of deque are" << endl;
    for (int i = 0; i < d3.size(); ++i)
      cout << d3[i] << "\t";
    cout<<endl;

    for (int i = 0; i < d4.size(); ++i)
      cout << d4[i] << "\t";
    cout<<endl;

      auto it = {1, 2, 3, 4, 5};  // one method of initilization
   deque<int> d(it);
    for (auto i=d.begin(); i!=d.end(); i++)
      cout << *i<< "\t";

    cout<<endl;
    deque<int>d5={11,12,13,14,15};
    deque<int>d6(move(d5));
    for (auto i=d6.rbegin();i!=d6.rend();i++)
      cout << *i << "\t";  */

    deque<int> d7 = {1, 2, 3};
    d7.emplace_back(4);
   d7.emplace_back(5);        // 1,2,3,4,5

    deque<int>::iterator itt;
    itt=d7.begin()+3;          // to remove particular elemnet
    d7.erase(itt);
  
  //  d.erase(d.begin(), d.begin() + 2);
    
    for (auto i=d7.begin();i!=d7.end();i++)
      cout << *i << "\t";


   return 0;
}
