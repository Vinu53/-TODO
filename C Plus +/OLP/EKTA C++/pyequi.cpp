#include <iostream>
#include <algorithm> //This is the standard library function for sorting sequences like arrays, vectors, etc.

int main() {
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::sort(arr, arr + n);      // std::sort(s.begin(),s.end()); for strings

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}

// reversed 
#include <iostream>
#include <algorithm>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::reverse(arr, arr + n);       //reverse(s.begin(),s.end()); for strings

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}

// pgm to find the repeated elements in ana array in c++:
#include <iostream>
#include <algorithm>

int main() 
{
    int arr[] = {4, 2, 4, 5, 2, 3, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::sort(arr, arr + n);

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            std::cout << arr[i] << " ";
        }
    }

    return 0;
}
// but do not work when there 3 same elements in an array:

// works fine for all elements:
#include <iostream>
#include<map>
#include <algorithm>
using namespace std;


int main() 
{
    int a[] = {11,12,1,21,12,27,12,11,27};
    map<int,int>m;
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
    }
    for(const auto&i: m)
    {
        if(i.second>1)
            {
                cout<<i.first<<" ";
            }
        }
}

// pgm to check anangram just sort and compare
//An anagram is a word or phrase formed by rearranging the letters of a different word or phrase,
#include <iostream>
#include <algorithm> 
#include <string>
using namespace std;

int main() {
   
    string s1 ="teacher";
    string s2 = "cheater";
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1 == s2)
        cout<<"ana";
    else
        cout<<"not ana";
    
    return 0;
}



//pamgram
//A pangram or holoalphabetic sentence is a sentence using every letter of a given alphabet at least once


