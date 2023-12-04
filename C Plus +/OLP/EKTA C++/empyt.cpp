#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l = {1,2,3,4,5};
    //list<int>::iterator it = l.begin();    
    
    
    l.insert (i, 100);    // insert 100 before 2 position
    /* now the list is 1 100 2 3 4 5 */
    
    for(i=0;i<l.size();i++){
        cout<<l[i];
    }
}