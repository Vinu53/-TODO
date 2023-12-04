#include <iostream>
#include <queue>
#include<vector>

using namespace std;

void showpq(priority_queue<int> g)
{
    while (!g.empty()) {
        cout << '\t' << g.top();
        g.pop();
    }
    cout << '\n';
}

int main()
{
    priority_queue<int> gquiz;
    gquiz.push(10);
    gquiz.push(30);
    gquiz.push(20);
    gquiz.push(5);
    gquiz.push(1);

    cout << "The priority queue gquiz is : ";
    showpq(gquiz);

    cout<<"the second type of creation is :";
    priority_queue<int,vector> p;
    for(int  ele :{1,4,5,2,6,0}) { p.push(ele);}
    showpq(p);

    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.top() : " << gquiz.top();

    cout << "\ngquiz.pop() : ";
    gquiz.pop();
    showpq(gquiz);

       priority_queue<int> pqueue;
    pqueue.push(1);
  
    // Priority Queue becomes 1
  
    if (pqueue.empty()) {
        cout << "True";
    }
    else {
        cout << "False";
    }
    
    cout << pqueue.size();
   
    Input  : mypqueue1 = {1, 3, 5, 7}
         mypqueue2 = {2, 4, 6, 8}
         mypqueue1.swap(mypqueue2);
    Output : mypqueue1 = {8, 6, 4, 2}
         mypqueue2 = {7, 5, 3, 1}

         

    return 0;
}
