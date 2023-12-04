#include <bits/stdc++.h>
using namespace std;
 
// Prints frequencies of individual words in str
void printFrequencies(const string &str)
{
    // declaring map of <string, int> type, each word
    // is mapped to its frequency
    unordered_map<string, int> wordFreq;
 
    // breaking input into word using string stream
    stringstream ss(str);  // Used for breaking words
    string word; // To store individual words
    while (ss >> word)
        wordFreq[word]++;
 
    // now iterating over word, freq pair and printing
    // them in <, > format
    unordered_map<string, int>:: iterator p;
    for (p = wordFreq.begin(); p != wordFreq.end(); p++)
        cout << "(" << p->first << ", " << p->second << ")\n";
}
 
// Driver code
int main()
{
    string str = "geeks for geeks geeks quiz "
                 "practice qa for";
    printFrequencies(str);
    return 0;
}

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    // Declaring umap to be of <string, int> type
    // key will be of string type and mapped value will be of int type
    unordered_map<string, int> umap;

    // inserting values by using [] operator
    umap["GeeksforGeeks"] = 10;
    umap["Practice"] = 20;
    umap["Contribute"] = 30;

  //  for (auto x : umap)
    //  cout << x.first << " " << x.second << endl;

    for(auto i=umap.begin();i!=umap.end();i++)
        cout<<i->first<<" "<<i->second<<endl;

      unordered_map<string, double> umap1={{"hi",3.233},{"fr",12.3},{"gt",2.34}};
       umap["PI"] = 3.14;
        umap["root2"] = 1.414;
         umap.insert(make_pair("e", 2.718));
           if (umap.find(key) == umap.end())
        cout << key << " not found\n\n";

    // If key found then iterator to that key is returned
    else
        cout << "Found " << key << "\n\n";

#include <bits/stdc++.h>
using namespace std;
  
int countWords(string str)
{
    // breaking input into word using string stream
    stringstream s(str); // Used for breaking words
    string word; // to store individual words
  
    int count = 0;
    while (s >> word)
        count++;
    return count;
}
  
// Driver code
int main()
{
    string s = "geeks for geeks geeks "
               "contribution placements";
    cout << " Number of words are: " << countWords(s);
    return 0;
}